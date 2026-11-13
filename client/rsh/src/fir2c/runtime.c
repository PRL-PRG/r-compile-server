#include "runtime.h"
#include "print_sexp.h"

#include <assert.h>
#include <float.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <R_ext/Boolean.h>
#include <R_ext/Error.h>
#include <R_ext/Rdynload.h>
#ifdef FIR_STATS
#include <dlfcn.h>
#endif


static const Fir_StubCompiler *stub_compiler = NULL;

int Fir_jit_threshold = 10;

void Fir_set_jit_threshold(int threshold) {
  Fir_jit_threshold = threshold;
}

void Fir_set_stub_compiler(const Fir_StubCompiler *compiler) {
  stub_compiler = compiler;
}

void *Fir_stub_enter(Fir_Stub *stub) {
  if (stub->compiled != NULL) {
    return stub->compiled;
  }
  if (stub_compiler == NULL || stub->state == FIR_STUB_FAILED ||
      stub->state == FIR_STUB_FALLBACK) {
    return NULL;
  }

  if (stub->state == FIR_STUB_UNREQUESTED) {
    // Run the fallback until the stub is hot, and while the server compiles.
    if (++stub->calls >= Fir_jit_threshold) {
      stub->state = FIR_STUB_REQUESTED;
      stub_compiler->request(stub);
    }
    return NULL;
  }

  stub_compiler->poll(stub, stub_compiler->deterministic);
  return stub->compiled;
}

void Fir_stub_compiled(Fir_Stub *stub, void *compiled) {
  stub->compiled = compiled;
  stub->state = FIR_STUB_COMPILED;
}

void Fir_stub_fallback(Fir_Stub *stub) {
  stub->compiled = NULL;
  stub->state = FIR_STUB_FALLBACK;
}

static void Fir_assert_symbol(SEXP sym, const char *what) {
  ASSERT(
    TYPEOF(sym) == SYMSXP,
    "Expected a symbol for %s",
    what
  );
}

// The base function `symbol` names.
//
// Not every function in `builtins.fir` is a primitive: `bitwShiftL` and friends wrap an
// `.Internal` whose `R_FunTab` name differs from theirs, and `print`, `stopifnot` and `xor` are
// plain R. Those have no builtin index to call or compare against, so the generated code refers
// to them by symbol and resolves the base binding here instead.
static SEXP Fir_base_function(SEXP symbol) {
  Fir_assert_symbol(symbol, "base function");
  return Rf_findFun(symbol, R_BaseEnv);
}

bool Fir_is_compiled_promise(SEXP value, Fir_PromiseGlobalData **global_data, Fir_PromiseLocalData **local_data) {
  if (TYPEOF(value) != PROMSXP) {
    return false;
  }
  SEXP body = PRCODE(value);
  if (TYPEOF(body) != EXTPTRSXP || !IS_RSH_CODE(body)) {
    return false;
  }
  SEXP data = EXTPTR_PROT(body);
  SEXP cp = Fir_prom_cp(data);
  ASSERT(Fir_const(cp, 0) != R_NilValue, "Promise data not set");
  *global_data = (Fir_PromiseGlobalData*) STDVEC_DATAPTR(Fir_const(cp, 0));
  *local_data = Fir_prom_local(data);
  return true;
}

static bool Fir_kind_is_subtype(Fir_Kind this_kind, Fir_Kind other_kind) {
  switch (other_kind.tag) {
  case FIR_KIND_ANY_VALUE:
    // AnySexp is the top type for SEXP (boxed) values only
    return this_kind.tag != FIR_KIND_PRIMITIVE_SCALAR && this_kind.tag != FIR_KIND_BOOLEAN;
  case FIR_KIND_PRIMITIVE_VECTOR: {
    int other_primitive = other_kind.as.primitive.primitive;
    // PrimitiveVector1 is a subtype of PrimitiveVector (same primitive)
    return (this_kind.tag == FIR_KIND_PRIMITIVE_VECTOR || this_kind.tag == FIR_KIND_PRIMITIVE_VECTOR1)
        && this_kind.as.primitive.primitive == other_primitive;
  }
  case FIR_KIND_PRIMITIVE_VECTOR1:
    return this_kind.tag == FIR_KIND_PRIMITIVE_VECTOR1
        && this_kind.as.primitive.primitive == other_kind.as.primitive.primitive;
  case FIR_KIND_PRIMITIVE_SCALAR:
    return this_kind.tag == FIR_KIND_PRIMITIVE_SCALAR
        && this_kind.as.primitive.primitive == other_kind.as.primitive.primitive;
  case FIR_KIND_BOOLEAN:
    return this_kind.tag == FIR_KIND_BOOLEAN;
  case FIR_KIND_CLOSURE:
    return this_kind.tag == FIR_KIND_CLOSURE;
  case FIR_KIND_DOTS:
    return this_kind.tag == FIR_KIND_DOTS || this_kind.tag == FIR_KIND_MISSING;
  case FIR_KIND_MISSING:
    return this_kind.tag == FIR_KIND_MISSING;
  }
  return false;
}

static bool Fir_promisity_is_subtype(Fir_Promisity this_p, Fir_Promisity other_p) {
  switch (other_p.tag) {
  case FIR_PROMISITY_VALUE:
    return this_p.tag == FIR_PROMISITY_VALUE;
  case FIR_PROMISITY_MAYBE:
    return Fir_is_subeffects(this_p.effects, other_p.effects);
  case FIR_PROMISITY_PROMISE:
    return this_p.tag == FIR_PROMISITY_PROMISE && Fir_is_subeffects(this_p.effects, other_p.effects);
  }
  return false;
}

bool Fir_is_subtype(Fir_Type this_type, Fir_Type other_type) {
  return Fir_kind_is_subtype(this_type.kind, other_type.kind)
      && Fir_promisity_is_subtype(this_type.promisity, other_type.promisity)
      && this_type.ownership == other_type.ownership
      && (this_type.definite || !other_type.definite);
}

bool Fir_promise_value_matches(SEXP promise, Fir_Type type) {
  // If safe-forceable, it's an already-evaluated promise - check inner value type
  SEXP forced = Fir_safe_force(promise);
  if (TYPEOF(forced) != PROMSXP) {
    return Fir_value_kind_matches(forced, type.kind);
  }

  // If a FIŘ promise, check value type and effects
  Fir_PromiseGlobalData *global_data;
  Fir_PromiseLocalData *local_data;
  if (Fir_is_compiled_promise(promise, &global_data, &local_data)) {
    Fir_Type value_type = Fir_type(type.kind, Fir_promisity_value, type.ownership, type.definite);
    return Fir_is_subtype(global_data->value_type, value_type)
        && Fir_is_subeffects(global_data->effects, type.promisity.effects);
  }

  // GNU-R promise with eval body.
  // We have no information except that the inner type is never another promise.
  return type.kind.tag == FIR_KIND_ANY_VALUE;
}

SEXP Fir_mk_closure(Rsh_code dispatchFromR, SEXP formals, SEXP cp, SEXP env) {
  ASSERT(TYPEOF(env) == ENVSXP || env == R_NilValue, "Environment or elided expected for closure");
  // See `Fir_push_env`.
  if (env == Rsh_ElidedEnv) {
    env = ENCLOS(env);
  }

  SEXP ext = PROTECT(R_MakeExternalPtr((void *)dispatchFromR, Rsh_CodeTag, cp));
  SEXP closure = PROTECT(Rf_mkCLOSXP(formals, ext, env));
  UNPROTECT(2); // body + closure

  return closure;
}

SEXP Fir_closure_body_expr(SEXP body) {
  SEXP cp = EXTPTR_PROT(body);
  if (TYPEOF(cp) != VECSXP || XLENGTH(cp) == 0) {
    return NULL;
  }
  SEXP data = VECTOR_ELT(cp, 0);
  if (TYPEOF(data) != RAWSXP || XLENGTH(data) != sizeof(Fir_FunctionData)) {
    return NULL;
  }
  return ((Fir_FunctionData *)STDVEC_DATAPTR(data))->body;
}

void Fir_fun_set_entries(SEXP constants, Fir_DispatchImplFn dispatch_impl, Fir_FromRFn from_r) {
  Fir_FunctionData *data = Fir_fun_data(constants);
  data->dispatch_impl = dispatch_impl;
  data->from_r = from_r;
}

typedef struct Fir_VersionCounter {
  char *name;
  double calls;
  struct Fir_VersionCounter *next;
} Fir_VersionCounter;

static Fir_VersionCounter *Fir_version_counters = NULL;

double *Fir_stats_version_counter(const char *name) {
  for (Fir_VersionCounter *counter = Fir_version_counters; counter != NULL; counter = counter->next) {
    if (strcmp(counter->name, name) == 0) {
      return &counter->calls;
    }
  }
  Fir_VersionCounter *counter = malloc(sizeof(Fir_VersionCounter));
  char *copy = malloc(strlen(name) + 1);
  if (counter == NULL || copy == NULL) {
    Rf_error("out of memory for the version counter %s", name);
  }
  strcpy(copy, name);
  *counter = (Fir_VersionCounter){.name = copy, .calls = 0, .next = Fir_version_counters};
  Fir_version_counters = counter;
  return &counter->calls;
}

SEXP Fir_stats_versions_get(void) {
  int n = 0;
  for (Fir_VersionCounter *counter = Fir_version_counters; counter != NULL; counter = counter->next) {
    n++;
  }
  SEXP result = PROTECT(Rf_allocVector(REALSXP, n));
  SEXP names = PROTECT(Rf_allocVector(STRSXP, n));
  int i = 0;
  for (Fir_VersionCounter *counter = Fir_version_counters; counter != NULL; counter = counter->next) {
    REAL(result)[i] = counter->calls;
    SET_STRING_ELT(names, i, Rf_mkChar(counter->name));
    i++;
  }
  Rf_setAttrib(result, R_NamesSymbol, names);
  UNPROTECT(2);
  return result;
}

#ifdef FIR_STATS
static struct {
  double fir_dups;
  double fir_dups_shallow;
  double created;
  double created_may_reflect;
  double forced;
  double forced_may_reflect;
  double reflected;
  double reflected_may_reflect;
  double elided;
} Fir_stats;

// GNU-R's copy counter. The vendored R exports it; another R may not (it's `attribute_hidden`
// upstream, and absent without `R_PROFILING`), so it's looked up at runtime.
static unsigned long (*Fir_stats_gnur_get_dups)(void) = NULL;
static void (*Fir_stats_gnur_reset_dups)(void) = NULL;

static void Fir_stats_resolve_gnur_dups(void) {
  static bool resolved = false;
  if (resolved) {
    return;
  }
  resolved = true;
  void *self = dlopen(NULL, RTLD_LAZY);
  if (self == NULL) {
    return;
  }
  Fir_stats_gnur_get_dups = (unsigned long (*)(void))dlsym(self, "get_duplicate_counter");
  Fir_stats_gnur_reset_dups = (void (*)(void))dlsym(self, "reset_duplicate_counter");
}

SEXP Fir_stats_get(void) {
  Fir_stats_resolve_gnur_dups();
  double dups = Fir_stats_gnur_get_dups && Fir_stats_gnur_reset_dups
      ? (double)Fir_stats_gnur_get_dups()
      : NA_REAL;
  struct { const char *name; double value; } const entries[] = {
    {"fir.dups", Fir_stats.fir_dups},
    {"fir.dups.shallow", Fir_stats.fir_dups_shallow},
    {"dups", dups},
    {"created", Fir_stats.created},
    {"created.may.reflect", Fir_stats.created_may_reflect},
    {"forced", Fir_stats.forced},
    {"forced.may.reflect", Fir_stats.forced_may_reflect},
    {"reflected", Fir_stats.reflected},
    {"reflected.may.reflect", Fir_stats.reflected_may_reflect},
    {"elided", Fir_stats.elided},
  };
  int n = sizeof(entries) / sizeof(entries[0]);
  SEXP result = PROTECT(Rf_allocVector(REALSXP, n));
  SEXP names = PROTECT(Rf_allocVector(STRSXP, n));
  for (int i = 0; i < n; i++) {
    REAL(result)[i] = entries[i].value;
    SET_STRING_ELT(names, i, Rf_mkChar(entries[i].name));
  }
  Rf_setAttrib(result, R_NamesSymbol, names);
  UNPROTECT(2);
  return result;
}

SEXP Fir_stats_reset(void) {
  memset(&Fir_stats, 0, sizeof(Fir_stats));
  Fir_stats_resolve_gnur_dups();
  if (Fir_stats_gnur_get_dups && Fir_stats_gnur_reset_dups) {
    Fir_stats_gnur_reset_dups();
  }
  return R_NilValue;
}

// Whether a promise whose environment is `env` can't reflect (see `Fir_push_env`): reflection in
// an elided or non-reflective frame is an error.
static bool Fir_stats_is_elided(SEXP env) {
  return env == Rsh_ElidedEnv || TYPEOF(env) != ENVSXP || RSH_IS_NON_REFLECTIVE(env);
}

// Whether the stats track `env`'s reflection mark: GNU-R's `recordReflection` skips locked and base
// environments.
static bool Fir_stats_can_track_mark(SEXP env) {
  return TYPEOF(env) == ENVSXP && env != Rsh_ElidedEnv && env != R_BaseEnv
      && env != R_BaseNamespace && !R_EnvironmentIsLocked(env);
}

// Mark `env` reflectively accessed, like GNU-R's `recordReflection`, if the stats can track it.
static void Fir_stats_record_reflection(SEXP env) {
  if (Fir_stats_can_track_mark(env)) {
    RSH_SET_REFLECTED(env);
  }
}

typedef struct {
  Fir_PromiseFn eval;
  SEXP env;
  Fir_PromiseGlobalData *global_data;
  Fir_PromiseLocalData *local_data;
  bool was_marked;
} Fir_StatsForce;

static SEXP Fir_stats_force_body(void *data) {
  Fir_StatsForce *force = data;
  return force->eval(force->env, force->local_data->captures);
}

// Also runs on a non-local exit out of the promise's code (an error, a `return` from the creating
// function), so the mark is restored before R continues the jump.
static void Fir_stats_force_cleanup(void *data, Rboolean jump) {
  (void)jump;
  Fir_StatsForce *force = data;
  bool is_marked = RSH_IS_REFLECTED(force->env);
  if (is_marked && !force->local_data->reflected) {
    force->local_data->reflected = true;
    Fir_stats.reflected++;
    if (force->global_data->may_reflect) {
      Fir_stats.reflected_may_reflect++;
    }
  }
  if (force->was_marked && !is_marked) {
    RSH_SET_REFLECTED(force->env);
  }
}

// To see whether the code reflects, clear the frame's reflection mark, run the code, and check
// whether GNU-R's `recordReflection` (or `Fir_reflective_load`/`_store`) set it again. A
// promise forced while another one in the same frame runs also counts for that one.
SEXP Fir_stats_eval_promise(Fir_PromiseFn eval, SEXP env, SEXP data) {
  Fir_PromiseGlobalData *global_data =
      (Fir_PromiseGlobalData*) STDVEC_DATAPTR(Fir_const(Fir_prom_cp(data), 0));
  Fir_PromiseLocalData *local_data = Fir_prom_local(data);

  if (!local_data->forced) {
    local_data->forced = true;
    Fir_stats.forced++;
    if (global_data->may_reflect) {
      Fir_stats.forced_may_reflect++;
    }
  }

  if (local_data->elided || !Fir_stats_can_track_mark(env) || RSH_IS_NON_REFLECTIVE(env)) {
    return eval(env, local_data->captures);
  }

  Fir_StatsForce force = {
    .eval = eval,
    .env = env,
    .global_data = global_data,
    .local_data = local_data,
    .was_marked = RSH_IS_REFLECTED(env),
  };
  RSH_UNSET_REFLECTED(env);
  SEXP cont = PROTECT(R_MakeUnwindCont());
  SEXP result = R_UnwindProtect(Fir_stats_force_body, &force, Fir_stats_force_cleanup, &force, cont);
  UNPROTECT(1);
  return result;
}
#endif

// Copy the value that each of `captures` points to into `copies`, which point to the copies
// afterwards: a SEXP into an element of `data` after its first three, which the GC traces and
// which counts the reference, any other value into a slot after `copies`.
static void Fir_copy_captures(void **captures, const char *capture_reprs, SEXP data, void **copies) {
  int num_captures = (int)strlen(capture_reprs);
  Fir_Capture *slots = (Fir_Capture *)(copies + num_captures);
  SEXP *elements = (SEXP *)STDVEC_DATAPTR(data);
  for (int i = 0, j = 3; i < num_captures; i++) {
    switch (capture_reprs[i]) {
    case 'S':
      SET_VECTOR_ELT(data, j, *(SEXP *)captures[i]);
      copies[i] = &elements[j++];
      continue;
    case 'I': slots[i].i = *(int *)captures[i]; break;
    case 'F': slots[i].f = *(double *)captures[i]; break;
    case 'C': slots[i].c = *(char **)captures[i]; break;
    case 'L': slots[i].l = *(Rboolean *)captures[i]; break;
    case 'B': slots[i].b = *(bool *)captures[i]; break;
    default: Rf_error("FIŘ internal error: unknown capture representation '%c'", capture_reprs[i]);
    }
    copies[i] = &slots[i];
  }
}

// The `PRCODE` of a compiled promise (see `Fir_mk_promise` in `runtime.h`).
static SEXP Fir_promise_code(
    Rsh_code evalFromR, SEXP cp, void **captures, const char *capture_reprs, SEXP expr,
    bool frame_tested) {
  int num_captures = (int)strlen(capture_reprs);
  int num_sexps = 0;
  for (int i = 0; i < num_captures; i++) {
    num_sexps += capture_reprs[i] == 'S';
  }
  SEXP data = PROTECT(Rf_allocVector(VECSXP, 3 + num_sexps));
  SET_VECTOR_ELT(data, 0, expr);
  SET_VECTOR_ELT(data, 1, cp);
  SEXP local_data_sexp = Rf_allocVector(
      RAWSXP, sizeof(Fir_PromiseLocalData) + num_captures * (sizeof(void *) + sizeof(Fir_Capture)));
  SET_VECTOR_ELT(data, 2, local_data_sexp);
  Fir_PromiseLocalData *local_data = (Fir_PromiseLocalData *)STDVEC_DATAPTR(local_data_sexp);
  void **copies = num_captures > 0 ? (void **)(local_data + 1) : NULL;
  *local_data = (Fir_PromiseLocalData) {.captures = copies, .escaped = false, .frame_tested = frame_tested};
  Fir_copy_captures(captures, capture_reprs, data, copies);
  SEXP ext = R_MakeExternalPtr((void *)evalFromR, Rsh_CodeTag, data);
  UNPROTECT(1); // data
  return ext;
}

static SEXP Fir_mk_promise_with(
    Rsh_code evalFromR, SEXP cp, void **captures, const char *capture_reprs, SEXP env, SEXP expr,
    bool frame_tested) {
  ASSERT(TYPEOF(env) == ENVSXP || env == R_NilValue, "Environment or elided expected for promise");
#ifdef FIR_STATS
  // Before the elided frame is replaced by its parent below.
  bool elided = Fir_stats_is_elided(env);
#endif
  // See `Fir_push_env`.
  if (env == Rsh_ElidedEnv) {
    env = ENCLOS(env);
  }

  SEXP ext = PROTECT(Fir_promise_code(evalFromR, cp, captures, capture_reprs, expr, frame_tested));
#ifdef FIR_STATS
  Fir_PromiseGlobalData *global_data = (Fir_PromiseGlobalData*) STDVEC_DATAPTR(Fir_const(cp, 0));
  Fir_prom_local(R_ExternalPtrProtected(ext))->elided = elided;
  Fir_stats.created++;
  if (global_data->may_reflect) {
    Fir_stats.created_may_reflect++;
  }
  if (elided) {
    Fir_stats.elided++;
  }
#endif

  SEXP promise = Rf_mkPROMISE(ext, env);
  UNPROTECT(1); // ext

  return promise;
}

SEXP Fir_mk_promise(
    Rsh_code evalFromR, SEXP cp, void **captures, const char *capture_reprs, SEXP env, SEXP expr) {
  return Fir_mk_promise_with(evalFromR, cp, captures, capture_reprs, env, expr, false);
}

SEXP Fir_mk_stub_promise(Rsh_code evalFromR, SEXP cp, SEXP expr) {
  SEXP ext = PROTECT(Fir_promise_site_code(evalFromR, cp, expr, false));
  SEXP promise = Rf_mkPROMISE(ext, Rsh_ElidedEnv);
  UNPROTECT(1); // ext
  return promise;
}

SEXP Fir_promise_site_code(Rsh_code evalFromR, SEXP cp, SEXP expr, bool frame_tested) {
  return Fir_promise_code(evalFromR, cp, NULL, "", expr, frame_tested);
}

SEXP Fir_mk_promise_shared(SEXP site_code, SEXP env) {
#ifdef FIR_STATS
  SEXP data = R_ExternalPtrProtected(site_code);
  return Fir_mk_promise_with(
      (Rsh_code)R_ExternalPtrAddr(site_code), Fir_prom_cp(data), NULL, "", env, Fir_prom_expr(data),
      Fir_prom_local(data)->frame_tested);
#else
  ASSERT(TYPEOF(env) == ENVSXP || env == R_NilValue, "Environment or elided expected for promise");
  // See `Fir_push_env`.
  if (env == Rsh_ElidedEnv) {
    env = ENCLOS(env);
  }
  return Rf_mkPROMISE(site_code, env);
#endif
}

SEXP Fir_mk_value_promise(SEXP value) {
  return R_mkEVPROMISE(value, value);
}

SEXP Fir_track_promise(SEXP promise, SEXP *tracked_list, PROTECT_INDEX idx) {
  PROTECT(promise);
  REPROTECT(*tracked_list = Rf_cons(promise, *tracked_list), idx);
  UNPROTECT(1);
  return promise;
}

void Fir_mark_promises_escaped(SEXP tracked_list) {
  for (SEXP cell = tracked_list; cell != R_NilValue; cell = CDR(cell)) {
    SEXP promise = CAR(cell);
    Fir_PromiseGlobalData *global_data;
    Fir_PromiseLocalData *local_data;
    if (Fir_is_compiled_promise(promise, &global_data, &local_data)) {
      local_data->escaped = true;
    }
  }
}

/// If the promise escaped its creating frame, either record the escape (as `ESCAPED` global
/// feedback) or, if it was speculated local, crash. No-op if it hasn't escaped.
static void Fir_handle_escape(
    Fir_PromiseGlobalData *global_data, Fir_PromiseLocalData *local_data, SEXP env) {
  if (!local_data->escaped
      && !(local_data->frame_tested && TYPEOF(env) == ENVSXP && (LEVELS(env) & FIR_FRAME_RETURNED))) {
    return;
  }
  switch (global_data->escaped) {
  case FIR_GLOBALLY_ESCAPED_DEFAULT:
    global_data->escaped = FIR_GLOBALLY_ESCAPED_ESCAPED;
    break;
  case FIR_GLOBALLY_ESCAPED_ESCAPED:
    break;
  case FIR_GLOBALLY_ESCAPED_LOCAL:
    Rf_error("forced a speculated-local promise after it escaped");
    break;
  }
}

SEXP Fir_eval_promise(Fir_PromiseFn eval, SEXP env, SEXP data) {
  Fir_PromiseLocalData *local_data = Fir_prom_local(data);
  local_data->evaluating++;
#ifdef FIR_STATS
  SEXP value = Fir_stats_eval_promise(eval, env, data);
#else
  SEXP value = eval(env, local_data->captures);
#endif
  // An error leaves the count up, so the captures stay for a force after it.
  if (--local_data->evaluating == 0) {
    for (R_xlen_t i = 3; i < XLENGTH(data); i++) {
      SET_VECTOR_ELT(data, i, R_NilValue);
    }
  }
  return value;
}

void Fir_check_promise_escaped(SEXP data, SEXP env) {
  Fir_PromiseGlobalData *global_data =
      (Fir_PromiseGlobalData*) STDVEC_DATAPTR(Fir_const(Fir_prom_cp(data), 0));
  Fir_handle_escape(global_data, Fir_prom_local(data), env);
}

SEXP Fir_cast(SEXP value, Fir_Type type) {
  ASSERT(Fir_value_matches(value, type), "Cast failed");
  return value;
}

SEXP Fir_dup(SEXP value) {
  FIR_STATS_ONLY(Fir_stats.fir_dups++);
  return Rf_duplicate(value);
}

SEXP Fir_load(SEXP symbol, SEXP env) {
  Fir_assert_symbol(symbol, "load");
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for load");

  if (env == Rsh_ElidedEnv) {
    env = ENCLOS(env);
  }

  SEXP value = Rf_findVar(symbol, env);

  if (value == R_UnboundValue) {
    if (symbol == R_DotsSymbol) {
      Rf_error("'...' used in an incorrect context");
    } else {
      Rf_error("object '%s' not found", CHAR(PRINTNAME(symbol)));
    }
  }

  return value;
}

SEXP Fir_load_fun(SEXP symbol, SEXP env) {
  Fir_assert_symbol(symbol, "load-fun");
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for load-fun");

  if (env == Rsh_ElidedEnv) {
    env = ENCLOS(env);
  }

  return Rf_findFun(symbol, env);
}

SEXP Fir_load_dots(int index, SEXP env) {
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for load_dots");

  if (env == Rsh_ElidedEnv) {
    env = ENCLOS(env);
  }

  // `ddfind` handles non-positive indices, missing `...`, and out-of-range
  // accesses by raising R errors, matching the behavior of `..N` lookups.
  return ddfind(index, env);
}

SEXP Fir_env_pushed_from_r = NULL;
bool Fir_env_push_suppressed = false;

void Fir_set_env_pushed_from_r(
    SEXP env, SEXP* outer_env, bool* push_suppressed, int* outer_depth, SEXP* outer_parent) {
  *outer_env = Fir_env_pushed_from_r;
  *push_suppressed = Fir_env_push_suppressed;
  *outer_depth = Rsh_ElidedDepth;
  *outer_parent = ENCLOS(Rsh_ElidedEnv);
  Fir_env_pushed_from_r = env;
  Fir_env_push_suppressed = false;
}

void Fir_unset_env_pushed_from_r(
    SEXP outer_env, bool push_suppressed, int outer_depth, SEXP outer_parent) {
  Fir_env_pushed_from_r = outer_env;
  Fir_env_push_suppressed = push_suppressed;
  Rsh_ElidedDepth = outer_depth;
  // A caught error in the call skips the pops of elided frames that it pushed.
  if (ENCLOS(Rsh_ElidedEnv) != outer_parent && outer_parent != R_NilValue) {
    SET_ENCLOS(Rsh_ElidedEnv, outer_parent);
  }
}

// ???: GNU-R expose methods to update R_GlobalContext->sysparent,
// if necessary (it may only when the env is pushed from R, `Fir_env_push_suppressed`)

// `Fir_pop_env` takes what the push returned instead of reading the globals: a non-local exit
// (`UseMethod`, a caught error) skips `Fir_unset_env_pushed_from_r`, so they can be stale at a pop.
//
// Every elided frame is the singleton `Rsh_ElidedEnv`, and its `ENCLOS` is the parent of the
// innermost one. The push saves the previous parent in `*saved` and the pop restores it, so a frame
// reads its own parent again after an elided callee returns. The pop of the outermost one
// (`Rsh_ElidedDepth`) sets `R_EmptyEnv`, so the singleton, a GC root, doesn't keep the parent
// alive. A promise, closure or real frame made in an elided frame has the parent instead: the frame
// has no bindings, and the singleton's parent changes. The push of such a real frame saves
// `Rsh_ElidedEnv`, and its pop restores it.
bool Fir_push_env(SEXP *env_ptr, Fir_MkEnvType type, SEXP *saved) {
  ASSERT(env_ptr && *env_ptr && TYPEOF(*env_ptr) == ENVSXP, "push_env requires a pointer to an environment");
  ASSERT(saved || type != FIR_MKENV_ELIDED, "elided push_env requires a slot to save the parent");
  if (saved) {
    *saved = R_NilValue;
  }

  if (Fir_env_pushed_from_r == *env_ptr && !Fir_env_push_suppressed) {
    Fir_env_push_suppressed = true;
    return false;
  }

  if (type == FIR_MKENV_ELIDED) {
    Fir_push_frame(Rsh_ElidedEnv);
    // Nested in an elided frame, the parent stays: `Rsh_ElidedEnv` marks it.
    *saved = Rsh_ElidedEnv;
    if (*env_ptr != Rsh_ElidedEnv) {
      *saved = ENCLOS(Rsh_ElidedEnv);
      // `SET_ENCLOS` walks the parent chain to reject cycles, and a recursive call often sets the
      // parent it already has, so skip that no-op.
      if (*saved != *env_ptr) {
        SET_ENCLOS(Rsh_ElidedEnv, *env_ptr);
      }
      *env_ptr = Rsh_ElidedEnv;
      Rsh_ElidedDepth++;
    }
    return true;
  }

  SEXP parent = *env_ptr;
  if (parent == Rsh_ElidedEnv) {
    ASSERT(saved, "push_env in an elided frame requires a slot to save it");
    *saved = Rsh_ElidedEnv;
    parent = ENCLOS(Rsh_ElidedEnv);
  }
  SEXP new_env = PROTECT(Rf_NewEnvironment(R_NilValue, R_NilValue, parent));
  if (type == FIR_MKENV_NON_REFLECTIVE) {
    RSH_SET_NON_REFLECTIVE(new_env);
  }
  UNPROTECT(1);
  Fir_push_frame(new_env);
  *env_ptr = new_env;
  return true;
}

extern RCNTXT *R_GlobalContext;

// Whether `env` is the frame of the innermost closure call. `eval` makes a function context whose
// `cloenv` is the environment it evaluates in, but whose `callfun` is a builtin.
static bool Fir_is_closure_frame(SEXP env) {
  RCNTXT *context = R_GlobalContext;
  while (context->nextcontext != NULL && !(context->callflag & CTXT_FUNCTION)) {
    context = context->nextcontext;
  }
  return (context->callflag & CTXT_FUNCTION) && context->cloenv == env
      && TYPEOF(context->callfun) == CLOSXP;
}

void Fir_pop_env(SEXP *env_ptr, bool pushed, SEXP saved) {
  ASSERT(env_ptr && *env_ptr && TYPEOF(*env_ptr) == ENVSXP, "pop_env requires a pointer to an environment");

  if (!pushed) {
    // The frame R made for the from-R call. It returns only if `applyClosure` made it, not if
    // `eval` runs the code in the live frame of another activation.
    if (Fir_is_closure_frame(*env_ptr)) {
      SETLEVELS(*env_ptr, LEVELS(*env_ptr) | FIR_FRAME_RETURNED);
    }
    Fir_env_push_suppressed = false;
    return;
  }

  Rsh_FrameCount--;
  if (*env_ptr == Rsh_ElidedEnv) {
    if (saved != Rsh_ElidedEnv) {
      *env_ptr = ENCLOS(Rsh_ElidedEnv);
      // Before the first push, the parent is `R_NilValue`, which `SET_ENCLOS` rejects.
      SEXP parent = --Rsh_ElidedDepth == 0 || saved == R_NilValue ? R_EmptyEnv : saved;
      if (*env_ptr != parent) {
        SET_ENCLOS(Rsh_ElidedEnv, parent);
      }
    }
    return;
  }

  SETLEVELS(*env_ptr, LEVELS(*env_ptr) | FIR_FRAME_RETURNED);
  if (saved == Rsh_ElidedEnv) {
    *env_ptr = Rsh_ElidedEnv;
    return;
  }
  SEXP parent = ENCLOS(*env_ptr);
  ASSERT(parent && parent != R_NilValue, "pop_env called on environment without parent");
  *env_ptr = parent;
}

void Fir_materialize_env(SEXP *env_ptr, SEXP closure_env) {
  if (*env_ptr != Rsh_ElidedEnv) {
    return;
  }
  *env_ptr = Rf_NewEnvironment(R_NilValue, R_NilValue, closure_env);
}

static SEXP Fir_make_names(int count, SEXP const *names) {
  ASSERT(count >= 0, "Invalid count for names");
  SEXP result = PROTECT(Rf_allocVector(STRSXP, count));
  for (int i = 0; i < count; ++i) {
    SEXP name = names[i];
    if (!name || name == R_MissingArg || name == R_NilValue) {
      SET_STRING_ELT(result, i, Rf_mkChar(""));
      continue;
    }
    if (TYPEOF(name) == SYMSXP) {
      SET_STRING_ELT(result, i, Rf_mkChar(CHAR(PRINTNAME(name))));
    } else if (TYPEOF(name) == STRSXP && XLENGTH(name) > 0) {
      SET_STRING_ELT(result, i, STRING_ELT(name, 0));
    } else {
      SEXP as_char = PROTECT(Rf_asChar(name));
      SET_STRING_ELT(result, i, as_char);
      UNPROTECT(1);
    }
  }
  UNPROTECT(1);
  return result;
}

SEXP Fir_mk_vector(Fir_Kind kind, int count, void const *values, SEXP const *names) {
  switch (kind.tag) {
  case FIR_KIND_PRIMITIVE_VECTOR:
  case FIR_KIND_PRIMITIVE_VECTOR1: {
    SEXPTYPE type
        = kind.as.primitive.primitive == FIR_PRIMITIVE_LOGICAL ? LGLSXP
        : kind.as.primitive.primitive == FIR_PRIMITIVE_INTEGER ? INTSXP
        : kind.as.primitive.primitive == FIR_PRIMITIVE_REAL ? REALSXP
        : STRSXP;
    SEXP vec = PROTECT(Rf_allocVector(type, count));
    switch (type) {
    case LGLSXP:
      memcpy(LOGICAL(vec), values, count * sizeof(Rboolean));
      break;
    case INTSXP:
      memcpy(INTEGER(vec), values, count * sizeof(int));
      break;
    case REALSXP:
      memcpy(REAL(vec), values, count * sizeof(double));
      break;
    case STRSXP: {
      for (int i = 0; i < count; ++i) {
        SEXP chr = PROTECT(Rf_mkChar(((char**)values)[i]));
        SET_STRING_ELT(vec, i, chr);
        UNPROTECT(1);
      }
      break;
    }
    default:
      Rf_error("Unsupported vector type");
    }
    if (names) {
      SEXP nm = PROTECT(Fir_make_names(count, names));
      if (nm != R_NilValue) {
        Rf_setAttrib(vec, R_NamesSymbol, nm);
      }
      UNPROTECT(1);
    }
    UNPROTECT(1);
    return vec;
  }
  case FIR_KIND_DOTS: {
    SEXP result = R_NilValue;
    int protect_count = 0;
    for (int i = count - 1; i >= 0; --i) {
      SEXP elem = ((SEXP*)values)[i];
      SEXP node = PROTECT(Rf_cons(elem, result));
      protect_count++;
      if (names) {
        SEXP name = names[i];
        if (name && name != R_MissingArg && name != R_NilValue &&
            TYPEOF(name) == SYMSXP) {
          SET_TAG(node, name);
        }
      }
      result = node;
    }
    if (protect_count > 0) {
      UNPROTECT(protect_count);
    }
    // R code that reads a `...` binding requires a `DOTSXP` (only the head is checked, as for
    // `matchArgs`' value). Empty dots stay `NULL`, which those readers also accept.
    if (result != R_NilValue) {
      SET_TYPEOF(result, DOTSXP);
    }
    return result;
  }
  default:
    Rf_error("Unsupported vector kind");
  }
}

SEXP Fir_force(SEXP promise) {
  ASSERT(TYPEOF(promise) == PROMSXP, "Cannot force a non-promise");

  if (!PROMISE_IS_EVALUATED(promise)) {
    Fir_PromiseGlobalData *global_data;
    Fir_PromiseLocalData *local_data;
    if (Fir_is_compiled_promise(promise, &global_data, &local_data)) {
      // If this promise escaped its creating frame, record the escape or crash (see the helper).
      Fir_handle_escape(global_data, local_data, PRENV(promise));
      SEXP forced = Fir_eval_promise(
          global_data->eval, PRENV(promise), R_ExternalPtrProtected(PRCODE(promise)));
      SET_PRVALUE(promise, forced);
      // Unlike R's `forcePromise`, keep the environment: it's only dropped there so the GC can
      // collect it, but FIŘ's reflective promise accesses (`Fir_reflective_load`/`_store`, i.e.
      // `p$x`) read and write that environment, and the interpreter -- which the snapshot tests
      // compare against -- keeps it too.
      // TODO: drop reflective access, because we never compile it, and this is a duct-tape
      //  solution, not fixing if the promise is forced by R
    } else {
      forcePromise(promise);
    }
  }

  ASSERT(PROMISE_IS_EVALUATED(promise) && TYPEOF(PRVALUE(promise)) != PROMSXP, "promise not fully forced?");

  return PRVALUE(promise);
}

SEXP Fir_maybe_force(SEXP valueOrPromise) {
  return TYPEOF(valueOrPromise) == PROMSXP ? Fir_force(valueOrPromise) : valueOrPromise;
}

/// Whether evaluating `code`, a promise's body, can't have an effect the program could observe.
///
/// Two shapes qualify. One is code that evaluates to itself, i.e. the promise is a constant. The
/// other is R's lazy-load thunk: until something reads it, every binding of a lazily-loaded
/// package -- `base` included, so `bitwXor` and most of the functions we speculate on -- is a
/// promise wrapping `lazyLoadDBfetch(key, datafile, compressed, envhook)`. Running that
/// deserializes the stored object and rebinds it, which is what R itself does on the next ordinary
/// lookup, so doing it early is invisible.
///
/// Deliberately not a general purity analysis of the body. One would *reject* the lazy-load thunk,
/// since `lazyLoadDBfetch` is an ordinary base closure that reads a file, and the thunk is the case
/// that matters: it is what stands between an `AssumeLoadFun` and the base function it speculated
/// on.
static bool Fir_code_is_pure_to_eval(SEXP code) {
  if (TYPEOF(code) == BCODESXP) {
    code = R_BytecodeExpr(code);
  }

  switch (TYPEOF(code)) {
    case LANGSXP: {
      // Symbols live in R's permanent symbol table, so this needs no `PROTECT`.
      static SEXP lazy_load_db_fetch = NULL;
      if (lazy_load_db_fetch == NULL) {
        lazy_load_db_fetch = Rf_install("lazyLoadDBfetch");
      }
      return CAR(code) == lazy_load_db_fetch;
    }
    case SYMSXP:
    case PROMSXP:
    case EXTPTRSXP:
      return false;
    default:
      // Evaluates to itself.
      return true;
  }
}

SEXP Fir_safe_force(SEXP valueOrPromise) {
  if (TYPEOF(valueOrPromise) != PROMSXP) {
    return valueOrPromise;
  }
  SEXP promise = valueOrPromise;

  // Extract already-evaluated
  if (PROMISE_IS_EVALUATED(promise)) {
    return PRVALUE(promise);
  }

  // Extract constant
  SEXP code = PRCODE(promise);
  SEXPTYPE t = TYPEOF(code);
  if (t != LANGSXP && t != SYMSXP && t != PROMSXP && t != BCODESXP && t != EXTPTRSXP) {
    return code;
  }

  // Run the body when running it can't be observed
  if (Fir_code_is_pure_to_eval(code)) {
    return Fir_force(promise);
  }

  // Could not force
  return valueOrPromise;
}

SEXP Fir_from_r_arg(SEXP env, SEXP symbol, bool keep_promise) {
  // `applyClosure` binds a parameter whose argument is missing to a promise of its default, and
  // marks the binding. FIŘ code expects the missing argument and computes the default itself.
  R_varloc_t loc = R_findVarLocInFrame(env, symbol);
  if (!R_VARLOC_IS_NULL(loc) && MISSING(loc.cell)) {
    return R_MissingArg;
  }
  // `R_GetVarLocValue` returns `R_UnboundValue` for a null location, like `Rf_findVarInFrame`.
  SEXP value = R_GetVarLocValue(loc);
  return keep_promise ? value : Fir_safe_force(value);
}

SEXP Fir_reflective_load(SEXP promise, SEXP symbol) {
  Fir_assert_symbol(symbol, "reflective_load symbol");
  ASSERT(TYPEOF(promise) == PROMSXP, "reflective_load requires a promise");
  // A promise R itself forced (or one whose environment was elided) has no environment left, and
  // `R_NilValue` isn't an environment: passing it on reads/writes the NULL object's fields.
  ASSERT(TYPEOF(PRENV(promise)) == ENVSXP,
         "reflective_load requires a promise with an environment");

  SEXP value = Rf_findVarInFrame(PRENV(promise), symbol);
  ASSERT(value != R_UnboundValue, "Variable not bound in promise environment");
  FIR_STATS_ONLY(Fir_stats_record_reflection(PRENV(promise)));

  return value;
}

SEXP Fir_reflective_store(SEXP promise, SEXP symbol, SEXP value) {
  Fir_assert_symbol(symbol, "reflective_store symbol");
  ASSERT(TYPEOF(promise) == PROMSXP, "reflective_store requires a promise");
  // See `Fir_reflective_load`.
  ASSERT(TYPEOF(PRENV(promise)) == ENVSXP,
         "reflective_store requires a promise with an environment");

  Rf_defineVar(symbol, value, PRENV(promise));
  FIR_STATS_ONLY(Fir_stats_record_reflection(PRENV(promise)));

  return value;
}

SEXP Fir_super_load(SEXP symbol, SEXP env) {
  Fir_assert_symbol(symbol, "super_load");
  ASSERT(TYPEOF(env) == ENVSXP, "super_load requires an environment");

  SEXP parent = ENCLOS(env);
  while (parent != R_EmptyEnv && parent != R_NilValue) {
    SEXP value = Rf_findVarInFrame(parent, symbol);

    if (value != R_UnboundValue) {
      return value;
    }

    if (parent == R_GlobalEnv) {
      break;
    }

    parent = ENCLOS(parent);
  }

  Rf_error("Unbound variable");
}

void Fir_store_parameter(SEXP symbol, SEXP value, SEXP env, SEXP parameter) {
  Rf_defineVar(symbol, value, env);
  if (parameter == R_MissingArg && value != R_MissingArg) {
    // `applyClosure` binds a default with `MISSING` 2.
    R_varloc_t loc = R_findVarLocInFrame(env, symbol);
    if (!R_VARLOC_IS_NULL(loc)) {
      SET_MISSING(loc.cell, 2);
    }
  }
}

void Fir_super_store(SEXP symbol, SEXP value, SEXP env) {
  Fir_assert_symbol(symbol, "super_store");
  ASSERT(TYPEOF(env) == ENVSXP, "super_store requires an environment");

  SEXP parent = ENCLOS(env);
  while (parent != R_EmptyEnv && parent != R_NilValue) {
    SEXP existing = Rf_findVarInFrame(parent, symbol);

    if (existing != R_UnboundValue) {
      Rf_defineVar(symbol, value, parent);
      return;
    }

    parent = ENCLOS(parent);
  }

  // If unbound, store in the global environment
  Rf_defineVar(symbol, value, R_GlobalEnv);
}

/// Splices a `...` argument as a copy of its cells, in order: the callee may modify the cells
/// (`applyClosure` with `unpromise` clears them), and the caller may pass the same `...` again.
/// `force_dots` forces each element, as `evalList` does for a builtin. `nr` says which cells are
/// built with `CONS_NR`, which doesn't count a reference to its value.
typedef enum { FIR_NR_NONE, FIR_NR_FIRST, FIR_NR_REST, FIR_NR_ALL } Fir_NrCells;
static SEXP Fir_build_arglist(int argc, SEXP const *args, SEXP const *names, bool is_builtin,
                              bool force_dots, Fir_NrCells nr, int *protect_count) {
  SEXP list = R_NilValue;
  for (int i = argc - 1; i >= 0; --i) {
    SEXP arg = args[i];
    SEXP name = names[i];

    if (name == R_DotsSymbol) {
      // Missing or `NULL` = empty dots
      if (arg == R_MissingArg || arg == R_NilValue) {
        continue;
      }
      SEXP head = R_NilValue;
      SEXP last = R_NilValue;
      for (SEXP h = arg; h != R_NilValue; h = CDR(h)) {
        SEXP elem = force_dots ? Fir_maybe_force(CAR(h)) : CAR(h);
        SEXP node = PROTECT(nr == FIR_NR_ALL || nr == FIR_NR_REST ? CONS_NR(elem, R_NilValue)
                                                                  : Rf_cons(elem, R_NilValue));
        (*protect_count)++;
        SET_TAG(node, TAG(h));
        if (last == R_NilValue) {
          head = node;
        } else {
          SETCDR(last, node);
        }
        last = node;
      }
      SETCDR(last, list);
      list = head;
    } else {
      SEXP node = PROTECT(nr == FIR_NR_ALL || nr == (i == 0 ? FIR_NR_FIRST : FIR_NR_REST)
                            ? CONS_NR(arg, list)
                            : Rf_cons(arg, list));
      (*protect_count)++;
      // Builtins have unnamed arguments, but those don't exist in FIR.
      // We use names that start with dots as a workaround,
      // because this seems to be a GNU-R convention:
      // AFAIK builtins never require names that start with dots.
      if (name != R_MissingArg && (!is_builtin || CHAR(PRINTNAME(name))[0] != '.')) {
        SET_TAG(node, name);
      }

      list = node;
    }
  }
  return list;
}

// The source `call` if the callee can use it, else `NULL` (the caller then builds a call from the
// arguments). GNU-R re-expands a `...` in the source from `env` (`promiseArgs`), so a source with
// `...` is only right if `env` binds `...`. An elided frame binds nothing.
static SEXP Fir_source_call(SEXP call, SEXP env) {
  if (call == NULL) {
    return NULL;
  }
  for (SEXP arg = CDR(call); arg != R_NilValue; arg = CDR(arg)) {
    if (CAR(arg) == R_DotsSymbol) {
      return env != Rsh_ElidedEnv && Rf_findVarInFrame(env, R_DotsSymbol) != R_UnboundValue
        ? call
        : NULL;
    }
  }
  return call;
}

// The index of `name` in `R_FunTab`, or -1.
static int Fir_funtab_index(const char *name) {
  for (int i = 0; R_FunTab[i].name != NULL; i++) {
    if (strcmp(R_FunTab[i].name, name) == 0) {
      return i;
    }
  }
  return -1;
}

// `R_Primitive(R_FunTab[blt_idx].name)`, which scans `R_FunTab` with `strcmp`. Cached: its results
// are `R_NilValue` or primitives that GNU-R caches itself, so they need no protection.
static SEXP Fir_primitive(int blt_idx) {
  static SEXP *cache = NULL;
  if (cache == NULL) {
    int size = 0;
    while (R_FunTab[size].name != NULL) {
      size++;
    }
    cache = calloc(size, sizeof(SEXP));
    if (cache == NULL) {
      Rf_error("out of memory");
    }
  }
  if (cache[blt_idx] == NULL) {
    cache[blt_idx] = R_Primitive(R_FunTab[blt_idx].name);
  }
  return cache[blt_idx];
}

// `matched`: a static call, whose arguments FIŘ matched to the parameters in `builtins.fir`
// (`Fir2CCompiler` drops the unsupplied trailing ones). A dynamic call passes the source's
// arguments as they are.
static SEXP Fir_call_primitive(int blt_idx, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names,
                               bool matched, bool nr_first) {
  FUNTAB fun = R_FunTab[blt_idx];

  // An `.Internal`-only entry has no primitive of its own: what R code calls `fun.name` -- and so
  // what the FIŘ signature in `builtins.fir` describes -- is a *base closure* wrapping
  // `.Internal(fun.name(...))`. For most of them that wrapper passes its arguments straight
  // through, so calling the internal below is equivalent. `stop` and `warning` are the exceptions:
  // they build one message out of `...`, and it shows in their parameters not lining up with the
  // internal's arity (`Fir2CCompiler` calls those via `Fir_call_base`). Send those through the
  // closure instead.
  if (fun.arity != -1 && fun.arity != argc && Fir_primitive(blt_idx) == R_NilValue) {
    SEXP closure = Rf_findFun(Rf_install(fun.name), R_BaseEnv);
    return Fir_call_dynamic(closure, call, env, argc, args, names);
  }

  // GNU-R doesn't check a primitive's table arity when it calls it; each `do_*` checks its own
  // count. E.g. `names.c` declares `tcrossprod` with arity 1, but `do_matprod` takes 1 or 2. So
  // only check matched calls, whose argument count comes from the signatures in `builtins.fir`. A
  // matched call has at most the signature's parameters, and R's `checkArity` reports too few.
  ASSERT(
    !matched || fun.arity == -1 || argc <= fun.arity ||
    // Subassign's arity in `names.c` is 3, but it has `...` and works with variadic arguments
    strcmp(fun.name, "[<-") == 0 || strcmp(fun.name, "[[<-") == 0,
    "Builtin %s called with incorrect number of arguments: expected %d, got %d",
    fun.name, fun.arity, argc
  );

  if (fun.eval) {
    // BUILTINSXP, so force arguments
    for (int i = 0; i < argc; i++) {
      args[i] = Fir_maybe_force(args[i]);
    }
  }

  SEXP op = Fir_primitive(blt_idx);
  if (op == R_NilValue) {
    // `fun` is an `.Internal`: `op` is its function object, so that `PRIMVAL(op)` (which selects
    // the operation of a shared `do_*`: `choose` is `do_math2` with code 5, `atan2` code 0),
    // `PRIMARITY(op)` and `PRIMNAME(op)` are this entry's. If the symbol's internal is another
    // entry (a duplicated name), or the count no longer matches the arity (`Fir2CCompiler` dropped
    // trailing missings), call the base closure, which supplies the defaults.
    op = INTERNAL(Rf_install(fun.name));
    if ((TYPEOF(op) != BUILTINSXP && TYPEOF(op) != SPECIALSXP) || PRIMOFFSET(op) != blt_idx ||
        (fun.arity != -1 && fun.arity != argc)) {
      SEXP closure = Rf_findFun(Rf_install(fun.name), R_BaseEnv);
      return Fir_call_dynamic(closure, call, env, argc, args, names);
    }
  }

  int visibility = (blt_idx / 100) % 10;
  R_Visible = (Rboolean)(visibility != 1);

  int protect_count = 0;
  SEXP arglist = Fir_build_arglist(argc, args, names, true, fun.eval % 10 == 1,
                                   nr_first ? FIR_NR_FIRST : FIR_NR_NONE, &protect_count);

  call = Fir_source_call(call, env);
  if (call == NULL) {
    call = PROTECT(Rf_lcons(Rf_install(fun.name), arglist));
    protect_count++;
  }

  SEXP result = fun.cfun(call, op, arglist, env);

  UNPROTECT(protect_count);

  if (visibility < 2) {
    R_Visible = (Rboolean)(visibility != 1);
  }

  return result;
}

SEXP Fir_call_builtin(int blt_idx, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names) {
  return Fir_call_primitive(blt_idx, call, env, argc, args, names, true, false);
}

// Wrap the symbol and call values (bit `i` of `values`) of a special's arguments in evaluated
// promises, and return how many it protected.
static int Fir_wrap_values(int blt_idx, int argc, SEXP *args, SEXP *names, uint64_t values) {
  int protect_count = 0;
  if (R_FunTab[blt_idx].eval % 10 == 0) {
    for (int i = 0; i < argc; i++) {
      SEXP arg = args[i];
      // A promise is forced by evaluating it, and the missing argument and `...` aren't values.
      if (i < 64 && ((values >> i) & 1) && names[i] != R_DotsSymbol &&
          ((TYPEOF(arg) == SYMSXP && arg != R_MissingArg) || TYPEOF(arg) == LANGSXP ||
           TYPEOF(arg) == BCODESXP)) {
        args[i] = PROTECT(R_mkEVPROMISE(arg, arg));
        protect_count++;
      }
    }
  }
  return protect_count;
}

// Whether a special evaluates `arg` to something other than `arg`.
static bool Fir_is_expression(SEXP arg) {
  return (TYPEOF(arg) == SYMSXP && arg != R_MissingArg) || TYPEOF(arg) == LANGSXP ||
         TYPEOF(arg) == BCODESXP;
}

SEXP Fir_mk_dots_values(int count, SEXP *elems, SEXP const *names, uint64_t values) {
  int protect_count = 0;
  for (int i = 0; i < count && i < 64; i++) {
    if (((values >> i) & 1) && Fir_is_expression(elems[i])) {
      elems[i] = PROTECT(R_mkEVPROMISE(elems[i], elems[i]));
      protect_count++;
    }
  }
  SEXP result = Fir_mk_vector(Fir_kind_dots, count, elems, names);
  UNPROTECT(protect_count);
  return result;
}

// Which of `[`, `[[`, `[<-` and `[[<-` (0 to 3) `R_FunTab[blt_idx]` is, or -1.
static ALWAYS_INLINE int Fir_subscript_kind(int blt_idx) {
  static int idx[4] = {-2, -2, -2, -2};
  if (idx[0] == -2) {
    static char const *const names[4] = {"[", "[[", "[<-", "[[<-"};
    for (int k = 0; k < 4; k++) {
      idx[k] = Fir_funtab_index(names[k]);
    }
  }
  for (int k = 0; k < 4; k++) {
    if (blt_idx == idx[k]) {
      return k;
    }
  }
  return -1;
}

// The value of a subscript operand: itself, or a forced promise's value. `NULL` if it is not known
// without an evaluation (an unforced promise, or an expression the special evaluates).
static ALWAYS_INLINE SEXP Fir_operand_value(SEXP arg, bool value) {
  if (TYPEOF(arg) == PROMSXP) {
    return PRVALUE(arg) == R_UnboundValue ? NULL : PRVALUE(arg);
  }
  return value || !Fir_is_expression(arg) ? arg : NULL;
}

// The operands after the target of a subscript call, with `...` spliced: 1 or 2 untagged (or `i`,
// `j`) indices into `idx`, and for an assignment the last operand, tagged `value`, into `*value`.
// Returns the number of indices, or 0 for any other shape. Bit `i` of `values` says that `args[i]`
// is a value.
static SEXP Fir_sym_i = NULL, Fir_sym_j = NULL, Fir_sym_value = NULL;

static int Fir_subscript_operands(int argc, SEXP const *args, SEXP const *names, uint64_t values,
                                  bool assign, SEXP idx[2], SEXP *value) {
  SEXP sym_i = Fir_sym_i, sym_j = Fir_sym_j, sym_value = Fir_sym_value;
  int nidx = 0;
  for (int k = 0; k < argc; k++) {
    if (names[k] == R_DotsSymbol) {
      if (args[k] == R_MissingArg) {
        continue;
      }
      for (SEXP h = args[k]; h != R_NilValue; h = CDR(h)) {
        SEXP v = Fir_operand_value(CAR(h), false);
        if (v == NULL || TAG(h) != R_NilValue || nidx == 2) {
          return 0;
        }
        idx[nidx++] = v;
      }
      continue;
    }
    SEXP v = Fir_operand_value(args[k], k < 64 && ((values >> k) & 1));
    if (v == NULL) {
      return 0;
    }
    if (assign && k == argc - 1 && names[k] == sym_value) {
      *value = v;
      return nidx;
    }
    if ((names[k] != R_MissingArg && names[k] != sym_i && names[k] != sym_j) || nidx == 2) {
      return 0;
    }
    idx[nidx++] = v;
  }
  return assign ? 0 : nidx;
}

// GNU-R bytecode's `bcStackIndex`: a scalar integer or real index without attributes, or -1.
static ALWAYS_INLINE R_xlen_t Fir_scalar_index(SEXP idx) {
  if ((TYPEOF(idx) != INTSXP && TYPEOF(idx) != REALSXP) || XLENGTH(idx) != 1 ||
      ATTRIB(idx) != R_NilValue) {
    return -1;
  }
  if (TYPEOF(idx) == INTSXP) {
    int i = INTEGER_ELT(idx, 0);
    return i == NA_INTEGER ? -1 : i;
  }
  double d = REAL_ELT(idx, 0);
  return !ISNAN(d) && d <= R_XLEN_T_MAX && d > 0 ? (R_xlen_t)d : -1;
}

// The 0-based element of `x` that 1 or 2 scalar indices name, or -1 if one is out of range or not
// scalar, or 2 indices and `x` isn't a matrix (as `getMatrixDim` in GNU-R's `eval.c`).
static ALWAYS_INLINE R_xlen_t Fir_subscript_element(SEXP x, int nidx, SEXP const *idx) {
  R_xlen_t i = Fir_scalar_index(idx[0]);
  if (nidx == 1) {
    return i >= 1 && i <= XLENGTH(x) ? i - 1 : -1;
  }
  SEXP attr = ATTRIB(x);
  SEXP dim = TAG(attr) == R_DimSymbol ? CAR(attr) : Rf_getAttrib(x, R_DimSymbol);
  if (TYPEOF(dim) != INTSXP || LENGTH(dim) != 2) {
    return -1;
  }
  R_xlen_t j = Fir_scalar_index(idx[1]);
  R_xlen_t nrow = INTEGER(dim)[0], ncol = INTEGER(dim)[1];
  return i >= 1 && j >= 1 && i <= nrow && j <= ncol ? i - 1 + nrow * (j - 1) : -1;
}

// GNU-R bytecode's `DO_FAST_VECELT`: element `k` of `x` (a `[` keeps no attribute but `dim`).
static ALWAYS_INLINE bool Fir_subset_element(bool subset2, SEXP x, R_xlen_t k, SEXP *result) {
  if (!subset2 && !(ATTRIB(x) == R_NilValue ||
                    (TAG(ATTRIB(x)) == R_DimSymbol && CDR(ATTRIB(x)) == R_NilValue))) {
    return false;
  }
  switch (TYPEOF(x)) {
    case REALSXP:
      *result = Rf_ScalarReal(REAL_ELT(x, k));
      return true;
    case INTSXP:
      *result = Rf_ScalarInteger(INTEGER_ELT(x, k));
      return true;
    case LGLSXP:
      *result = Rf_ScalarLogical(LOGICAL_ELT(x, k));
      return true;
    case VECSXP: {
      SEXP elt = VECTOR_ELT(x, k);
      RAISE_NAMED(elt, NAMED(x));
      if (subset2) {
        *result = elt;
      } else {
        PROTECT(elt);
        *result = Rf_allocVector(VECSXP, 1);
        SET_VECTOR_ELT(*result, 0, elt);
        UNPROTECT(1);
      }
      return true;
    }
    default:
      return false;
  }
}

// GNU-R bytecode's `DO_FAST_SETVECELT`: store `v` as element `k` of `x`, which is the setter
// protocol's value, if it is unshared and not ALTREP, and `v` is a scalar of a type that `x` holds
// without a coercion (or, for `[[<-` on a list, any value but `NULL` or a promise).
static ALWAYS_INLINE bool Fir_subassign_element(bool subassign2, SEXP x, R_xlen_t k, SEXP v) {
  if (MAYBE_SHARED(x) || ALTREP(x)) {
    return false;
  }
  SEXPTYPE vt = TYPEOF(v);
  if ((vt == REALSXP || vt == INTSXP || vt == LGLSXP) && XLENGTH(v) == 1 &&
      ATTRIB(v) == R_NilValue) {
    switch (TYPEOF(x)) {
      case REALSXP:
        if (vt == REALSXP) {
          REAL(x)[k] = REAL(v)[0];
        } else {
          int iv = vt == INTSXP ? INTEGER(v)[0] : LOGICAL(v)[0];
          REAL(x)[k] = iv == NA_INTEGER ? NA_REAL : iv;
        }
        return true;
      case INTSXP:
      case LGLSXP:
        if (vt != TYPEOF(x)) {
          break;
        }
        if (vt == INTSXP) {
          INTEGER(x)[k] = INTEGER(v)[0];
        } else {
          LOGICAL(x)[k] = LOGICAL(v)[0];
        }
        return true;
      default:
        break;
    }
  }
  if (subassign2 && TYPEOF(x) == VECSXP && v != R_NilValue && vt != PROMSXP) {
    if (MAYBE_REFERENCED(v) && VECTOR_ELT(x, k) != v) {
      v = R_FixupRHS(x, v);
    }
    SET_VECTOR_ELT(x, k, v);
    return true;
  }
  return false;
}

// The scalar paths of GNU-R bytecode for `[`, `[[` (`kind` 0, 1) and `[<-`, `[[<-` (2, 3; `x` is
// the setter protocol's value), on a target `x` that is not an object: one or two scalar indices,
// no argument list. `args[0]` is ignored. Returns whether it applied.
static bool Fir_subscript_scalar(int kind, SEXP x, int argc, SEXP const *args, SEXP const *names,
                                 uint64_t values, SEXP *result) {
  if (Fir_sym_i == NULL) {
    Fir_sym_i = Rf_install("i");
    Fir_sym_j = Rf_install("j");
    Fir_sym_value = Rf_install("value");
  }
  SEXP idx[2], value = NULL;
  int nidx = Fir_subscript_operands(argc - 1, args + 1, names + 1, values >> 1, kind >= 2, idx,
                                    &value);
  if (nidx == 0 || OBJECT(x)) {
    return false;
  }
  R_xlen_t k = Fir_subscript_element(x, nidx, idx);
  if (k < 0) {
    return false;
  }
  if (kind < 2) {
    return Fir_subset_element(kind == 1, x, k, result);
  }
  if (!Fir_subassign_element(kind == 3, x, k, value)) {
    return false;
  }
  *result = x;
  return true;
}

// What the special `[`, `[[`, `[<-` or `[[<-` does when its target is not an object
// (`R_DispatchOrEvalSP`, then the default method), without the special: force the arguments once,
// in order, and call the default method with a list of `CONS_NR` cells. `x` is the target, or
// `NULL` for `args[0]`; bit `i` of `values` says that `args[i]` is a value, not an expression.
// Returns whether it made the call. It doesn't if the target is an object, the first argument is
// `...`, or the special would evaluate an argument in `env`.
static bool Fir_call_subscript_default(int blt_idx, SEXP call, SEXP env, int argc, SEXP *args,
                                       SEXP *names, uint64_t values, SEXP x, SEXP *result) {
  static CCODE const dflts[4] = {do_subset_dflt, do_subset2_dflt, do_subassign_dflt,
                                 do_subassign2_dflt};
  int kind = Fir_subscript_kind(blt_idx);
  if (kind < 0 || argc == 0 || names[0] == R_DotsSymbol) {
    return false;
  }
  for (int i = x == NULL ? 0 : 1; i < argc; i++) {
    if (names[i] == R_DotsSymbol) {
      if (args[i] != R_MissingArg) {
        for (SEXP h = args[i]; h != R_NilValue; h = CDR(h)) {
          if (Fir_is_expression(CAR(h))) {
            return false;
          }
        }
      }
    } else if (!(i < 64 && ((values >> i) & 1)) && Fir_is_expression(args[i])) {
      return false;
    }
  }
  SEXP forced[argc];
  forced[0] = x != NULL ? x : Fir_maybe_force(args[0]);
  if (forced[0] == R_MissingArg || OBJECT(forced[0])) {
    return false;
  }

  // As `R_DispatchOrEvalSP` and `evalListKeepMissing`: each value counts as a link while the later
  // arguments are forced.
  INCREMENT_LINKS(forced[0]);
  for (int i = 1; i < argc; i++) {
    forced[i] = args[i];
    if (names[i] != R_DotsSymbol) {
      forced[i] = Fir_maybe_force(args[i]);
      INCREMENT_LINKS(forced[i]);
    } else if (args[i] != R_MissingArg) {
      for (SEXP h = args[i]; h != R_NilValue; h = CDR(h)) {
        INCREMENT_LINKS(Fir_maybe_force(CAR(h)));
      }
    }
  }
  for (int i = 0; i < argc; i++) {
    if (names[i] != R_DotsSymbol) {
      DECREMENT_LINKS(forced[i]);
    } else if (args[i] != R_MissingArg) {
      for (SEXP h = args[i]; h != R_NilValue; h = CDR(h)) {
        DECREMENT_LINKS(Fir_maybe_force(CAR(h)));
      }
    }
  }

  // The scalar paths, which assign only through the setter protocol.
  if ((kind < 2) == (x == NULL) &&
      Fir_subscript_scalar(kind, forced[0], argc, forced, names, ~0ULL, result)) {
    R_Visible = TRUE;
    return true;
  }

  // Outside the setter protocol, the special's argument list would count the target, so that
  // `do_subassign_dflt` copies one that something else references (a non-local variable, which
  // GNU-R's `EnsureLocal` copies, or a direct call's argument).
  int protect_count = 0;
  SEXP arglist = Fir_build_arglist(argc, forced, names, true, true,
                                   kind >= 2 && x == NULL ? FIR_NR_REST : FIR_NR_ALL,
                                   &protect_count);
  SEXP source = Fir_source_call(call, env);
  if (source == NULL) {
    source = PROTECT(Rf_lcons(Rf_install(R_FunTab[blt_idx].name), arglist));
    protect_count++;
  }
  *result = dflts[kind](source, Fir_primitive(blt_idx), arglist, env);
  UNPROTECT(protect_count);
  R_Visible = TRUE;
  return true;
}

// `Fir_call_builtin_values`, where `matched` is as in `Fir_call_primitive`.
static SEXP Fir_call_primitive_values(int blt_idx, SEXP call, SEXP env, int argc, SEXP *args,
                                      SEXP *names, uint64_t values, bool matched) {
  SEXP result;
  if (Fir_call_subscript_default(blt_idx, call, env, argc, args, names, values, NULL, &result)) {
    return result;
  }
  int protect_count = Fir_wrap_values(blt_idx, argc, args, names, values);
  result = Fir_call_primitive(blt_idx, call, env, argc, args, names, matched, false);
  UNPROTECT(protect_count);
  return result;
}

SEXP Fir_call_builtin_values(int blt_idx, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names,
                             uint64_t values) {
  return Fir_call_primitive_values(blt_idx, call, env, argc, args, names, values, true);
}

SEXP Fir_call_base(SEXP symbol, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names) {
  return Fir_call_dynamic(Fir_base_function(symbol), call, env, argc, args, names);
}

SEXP Fir_call_dynamic(SEXP callee, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names) {
  return Fir_call_dynamic_values(callee, call, env, argc, args, names, 0);
}

// The source expression of `promise`, or NULL if it's unknown.
static SEXP Fir_promise_source_expr(SEXP promise) {
  SEXP code = PRCODE(promise);
  if (TYPEOF(code) == EXTPTRSXP && R_ExternalPtrTag(code) == Rsh_CodeTag) {
    SEXP expr = Fir_prom_expr(R_ExternalPtrProtected(code));
    return expr == R_UnboundValue ? NULL : expr;
  }
  return R_PromiseExpr(promise);
}

SEXP Fir_call_dynamic_values(SEXP callee, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names,
                             uint64_t values) {
  switch (TYPEOF(callee)) {
    case SPECIALSXP:
      // GNU-R's `CALL` (`bcEval`) passes a special its source arguments, so pass the expression of
      // an unforced promise of this frame (`function` would make the promise its body). A
      // forwarded promise belongs to another frame, so it stays.
      for (int i = 0; i < argc; i++) {
        if ((i >= 64 || !((values >> i) & 1)) && names[i] != R_DotsSymbol &&
            TYPEOF(args[i]) == PROMSXP && PRVALUE(args[i]) == R_UnboundValue &&
            PRENV(args[i]) == env) {
          SEXP expr = Fir_promise_source_expr(args[i]);
          if (expr != NULL) {
            args[i] = expr;
          }
        }
      }
      // fallthrough
    case BUILTINSXP:
      return Fir_call_primitive_values(PRIMOFFSET(callee), call, env, argc, args, names, values,
                                       false);
    case CLOSXP: {
      // Try to fastcase compiled closures.
      Fir_FunctionData *data = NULL;
      // Currently, we don't fastcase 16+ arguments,
      // because we need some limit to implement the variadic call.
      if (Fir_is_compiled_closure(callee, &data) && argc < 16 && !data->needs_context) {
        // Currently, we don't fastcase mismatched names or dots,
        // because we'd have to re-implement GNU-R's match algorithm.
        bool trivial_match = argc == LENGTH(data->formal_names);
        if (trivial_match) {
          for (int i = 0; i < argc; ++i) {
            SEXP name = names[i];
            SEXP formal_name = ((SEXP *) STDVEC_DATAPTR(data->formal_names))[i];
            if ((name != R_MissingArg || formal_name == R_DotsSymbol) && name != formal_name) {
              trivial_match = false;
              break;
            }
          }
        }

        if (trivial_match) {
          Fir_Type any_param_types[argc];
          for (int i = 0; i < argc; ++i) {
            any_param_types[i] = Fir_type(Fir_kind_any_value, Fir_promisity_maybe(FIR_EFFECTS_REFLECT), FIR_SHARED, false);
          }
          Fir_Signature any_signature = Fir_signature(
            Fir_type(Fir_kind_any_value, Fir_promisity_value, FIR_SHARED, true),
            argc,
            any_param_types,
            FIR_EFFECTS_REFLECT
          );

          // This is an ugly way to call a variadic function with a fixed number of arguments,
          // but it's the only way to according to the C standard.
          switch (argc) {
            case 0: return data->dispatch(CLOENV(callee), any_signature);
            case 1: return data->dispatch(CLOENV(callee), any_signature, args[0]);
            case 2: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1]);
            case 3: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2]);
            case 4: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3]);
            case 5: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4]);
            case 6: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5]);
            case 7: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6]);
            case 8: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
            case 9: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8]);
            case 10: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9]);
            case 11: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10]);
            case 12: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10], args[11]);
            case 13: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10], args[11], args[12]);
            case 14: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10], args[11], args[12], args[13]);
            case 15: return data->dispatch(CLOENV(callee), any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10], args[11], args[12], args[13], args[14]);
            default: assert(false);
          }
        }
      }

      int protect_count = 0;
      SEXP arglist = Fir_build_arglist(argc, args, names, false, false, FIR_NR_NONE, &protect_count);

      call = Fir_source_call(call, env);
      if (call == NULL) {
        call = PROTECT(Rf_lcons(callee, arglist));
        protect_count++;
      }

      // `arglist` is fresh (its `...` cells too), so `unpromise` only clears this call's copy.
      SEXP result = Rf_applyClosure(call, callee, arglist, env, R_NilValue, TRUE);

      UNPROTECT(protect_count);
      return result;
    }
    default:
      Rf_error("Unsupported callee type");
  }
}

// Whether `symbol` has a plain binding in `env`'s own frame that still holds `lhs`, the value an
// `ld` read. Sets `loc` to it.
static bool Fir_assign_binding(SEXP symbol, SEXP env, SEXP lhs, R_varloc_t *loc) {
  if (TYPEOF(env) != ENVSXP || env == Rsh_ElidedEnv || env == R_BaseEnv ||
      env == R_BaseNamespace || TYPEOF(lhs) == SYMSXP) {
    return false;
  }
  *loc = R_findVarLocInFrame(env, symbol);
  SEXP cell = loc->cell;
  return cell != NULL && TYPEOF(cell) == LISTSXP && !IS_ACTIVE_BINDING(cell) &&
         !BINDING_IS_LOCKED(cell) && CAR(cell) == lhs;
}

// GNU-R's `INCLNK_stack_commit` (`delta` 1) and `DECLNK_stack` (`delta` -1) for registers.
static void Fir_link(int nlinked, SEXP *linked, int delta) {
  for (int i = 0; i < nlinked; i++) {
    if (linked[i] != NULL) {
      if (delta > 0) {
        INCREMENT_REFCNT(linked[i]);
      } else {
        DECREMENT_REFCNT(linked[i]);
      }
    }
  }
}

void Fir_setter_begin(Fir_Setter *s, SEXP symbol, SEXP env, SEXP lhs, int nlinked, SEXP *linked) {
  s->active = false;
  // Otherwise the call copies, as outside the protocol.
  R_varloc_t loc;
  if (!Fir_assign_binding(symbol, env, lhs, &loc)) {
    return;
  }
  SEXP cell = loc.cell;

  // The registers that outlive the call count as references.
  Fir_link(nlinked, linked, 1);

  // GNU-R's `STARTASSIGN`. `EnsureLocal` forces a promise, and rebinds a copy if it's shared.
  SEXP value = lhs;
  if (TYPEOF(value) == PROMSXP) {
    value = EnsureLocal(symbol, env, &loc);
    cell = loc.cell;
  }
  PROTECT(cell);
  bool maybe_in_assign = ASSIGNMENT_PENDING(cell);
  SET_ASSIGNMENT_PENDING(cell, TRUE);
  if (maybe_in_assign || MAYBE_SHARED(value)) {
    value = Rf_shallow_duplicate(value);
  }
  PROTECT(value);

  *s = (Fir_Setter) {
    .cell = cell, .value = value, .nlinked = nlinked, .linked = linked, .active = true
  };
}

void Fir_setter_begin_value(Fir_Setter *s, SEXP lhs, int nlinked, SEXP *linked) {
  s->active = false;
  SEXP value = lhs;
  if (TYPEOF(value) == PROMSXP) {
    value = PRVALUE(value);
  }
  if (value == R_UnboundValue || value == R_NilValue || TYPEOF(value) == SYMSXP) {
    return;
  }

  Fir_link(nlinked, linked, 1);
  // With the variable in a register, any counted reference is one GNU-R's binding would share.
  if (MAYBE_REFERENCED(value)) {
    value = Rf_shallow_duplicate(value);
  }
  PROTECT(value);

  *s = (Fir_Setter) {
    .cell = NULL, .value = value, .nlinked = nlinked, .linked = linked, .active = true
  };
}

SEXP Fir_assign_dup(SEXP symbol, SEXP env, SEXP lhs, SEXP value, int nlinked, SEXP *linked) {
  R_varloc_t loc;
  if (value == lhs && TYPEOF(value) != PROMSXP && !ALTREP(value) &&
      Fir_assign_binding(symbol, env, lhs, &loc) && !ASSIGNMENT_PENDING(loc.cell)) {
    Fir_link(nlinked, linked, 1);
    bool shared = MAYBE_SHARED(value);
    Fir_link(nlinked, linked, -1);
    if (!shared) {
      return value;
    }
  }
  return Fir_dup(value);
}

SEXP Fir_value_dup(SEXP value, int nlinked, SEXP *linked) {
  if (value != R_NilValue && TYPEOF(value) != SYMSXP && TYPEOF(value) != PROMSXP &&
      !ALTREP(value)) {
    Fir_link(nlinked, linked, 1);
    bool referenced = MAYBE_REFERENCED(value);
    Fir_link(nlinked, linked, -1);
    if (!referenced) {
      return value;
    }
  }
  return Fir_dup(value);
}

SEXP Fir_setter_end(Fir_Setter *s, SEXP result) {
  if (s->active) {
    if (s->cell != NULL) {
      SET_ASSIGNMENT_PENDING(s->cell, FALSE);
    }
    Fir_link(s->nlinked, s->linked, -1);
    UNPROTECT(s->cell == NULL ? 1 : 2); // (cell +) value
  }
  return result;
}

// GNU-R's `SETTER_CALL` for a primitive: the call is marked as an assignment, and the first argument
// is the protocol's value, in an argument list that doesn't count it.
static SEXP Fir_call_setter_primitive(Fir_Setter *s, int blt_idx, SEXP call, SEXP env, int argc,
                                      SEXP *args, SEXP *names, bool matched, uint64_t values) {
  MARK_ASSIGNMENT_CALL(call);
  SEXP result;
  if (Fir_call_subscript_default(blt_idx, call, env, argc, args, names, values & ~1ULL, s->value,
                                 &result)) {
    return result;
  }
  SEXP setter_args[argc];
  memcpy(setter_args, args, argc * sizeof(SEXP));
  int protect_count = Fir_wrap_values(blt_idx, argc, setter_args, names, values & ~1ULL);
  bool special = R_FunTab[blt_idx].eval % 10 == 0;
  if (special) {
    // A special evaluates its arguments, so it gets the value as an evaluated promise.
    setter_args[0] = PROTECT(R_mkEVPROMISE_NR(CADR(call), s->value));
    protect_count++;
  } else {
    setter_args[0] = s->value;
  }
  result = Fir_call_primitive(blt_idx, call, env, argc, setter_args, names, matched, !special);
  UNPROTECT(protect_count);
  return result;
}

SEXP Fir_call_setter(Fir_Setter *s, SEXP callee, SEXP call, SEXP env, int argc, SEXP *args,
                     SEXP *names, uint64_t values) {
  if (!s->active || argc == 0 || (TYPEOF(callee) != SPECIALSXP && TYPEOF(callee) != BUILTINSXP) ||
      Fir_source_call(call, env) == NULL) {
    return Fir_call_dynamic_values(callee, call, env, argc, args, names, values);
  }
  return Fir_call_setter_primitive(s, PRIMOFFSET(callee), call, env, argc, args, names, false,
                                   values);
}

SEXP Fir_call_setter_builtin(Fir_Setter *s, int blt_idx, SEXP call, SEXP env, int argc, SEXP *args,
                             SEXP *names, uint64_t values) {
  if (!s->active || argc == 0 || Fir_source_call(call, env) == NULL) {
    return Fir_call_builtin_values(blt_idx, call, env, argc, args, names, values);
  }
  int kind = Fir_subscript_kind(blt_idx);
  if (kind >= 2) {
    // The static call `x[[i]] <- value` (the signature's order) takes a short path, which keeps
    // this function small; any other shape takes the general one.
    SEXP x = s->value;
    if (argc == 3 && names[1] != R_DotsSymbol) {
      R_xlen_t i = OBJECT(x) || ((values >> 2) & 1) == 0 ? -1 : Fir_scalar_index(args[1]);
      if (i >= 1 && i <= XLENGTH(x) && Fir_subassign_element(kind == 3, x, i - 1, args[2])) {
        R_Visible = TRUE;
        return x;
      }
    } else {
      SEXP result;
      if (Fir_subscript_scalar(kind, x, argc, args, names, values, &result)) {
        R_Visible = TRUE;
        return result;
      }
    }
  }
  return Fir_call_setter_primitive(s, blt_idx, call, env, argc, args, names, true, values);
}

// First string in a bytecode baseline's `FIR_BC_BASELINE_ID` slot, which is how we recognize its
// pool.
#define FIR_BC_BASELINE_MAGIC "Fir_bc_baseline_feedback"

/// Entry points of the rcp package (the copy-and-patch JIT), or `NULL`s if it can't be loaded.
/// It can only be loaded in the RCP variant of GNU-R (`RCP=1 tools/build-gnur.sh`), whose `eval`
/// can run the JIT-compiled code it produces.
typedef struct {
  /// Copy-and-patch compile a closure (`C_rcp_cmpfun`).
  SEXP (*cmpfun)(SEXP, SEXP);
  /// Read the feedback recorded by compiled code (`C_rcp_export_recording`).
  SEXP (*export_recording)(SEXP);
} Fir_Rcp;

static Fir_Rcp const *Fir_rcp(void) {
  static bool searched = false;
  static Fir_Rcp rcp = {NULL, NULL};
  if (searched) {
    return &rcp;
  }
  searched = true;

  SEXP require = PROTECT(Rf_lang3(Rf_install("requireNamespace"), Rf_mkString("rcp"), Rf_ScalarLogical(TRUE)));
  SET_TAG(CDDR(require), Rf_install("quietly"));
  int error = 0;
  SEXP loaded = R_tryEval(require, R_BaseEnv, &error);
  UNPROTECT(1);
  if (error || loaded == NULL || Rf_asLogical(loaded) != TRUE) {
    return &rcp;
  }

  // The names are the ones rcp registers, which for `C_rcp_cmpfun` (unlike the others) already
  // has the `C_` prefix.
  *(void **)&rcp.cmpfun = (void *)R_FindSymbol("C_rcp_cmpfun", "rcp", NULL);
  *(void **)&rcp.export_recording = (void *)R_FindSymbol("rcp_export_recording", "rcp", NULL);
  return &rcp;
}

/// Set the `rcp.cmpfun.type_recording` option (rcp reads it, an R option and not an argument, when
/// compiling) and return its previous value, which the caller must protect and restore.
static SEXP Fir_set_rcp_recording(SEXP value) {
  SEXP old = PROTECT(Rf_GetOption1(Rf_install("rcp.cmpfun.type_recording")));
  SEXP call = PROTECT(Rf_lang2(Rf_install("options"), value));
  SET_TAG(CDR(call), Rf_install("rcp.cmpfun.type_recording"));
  int error = 0;
  R_tryEval(call, R_BaseEnv, &error);
  UNPROTECT(2);
  return old;
}

SEXP Fir_bc_baseline_code(SEXP pool) {
  SEXP code = Fir_const(pool, FIR_BC_BASELINE_JIT);
  if (code != R_NilValue) {
    return code;
  }

  code = Fir_const(pool, FIR_BC_BASELINE_CODE);
  SEXP (*cmpfun)(SEXP, SEXP) = Fir_rcp()->cmpfun;
  if (cmpfun != NULL) {
    // `C_rcp_cmpfun` copy-and-patches a closure whose body is already bytecode in place,
    // replacing the body with an external pointer to the JIT-compiled code
    // (which `eval` in the RCP variant of GNU-R runs in the environment it's evaluated in).
    SEXP closure = PROTECT(Rf_mkCLOSXP(Fir_const(pool, FIR_BC_BASELINE_FORMALS), code, R_GlobalEnv));
    // Compile with feedback recording, which is what `Fir_bc_baseline_recording` reads. Set and
    // restore the option instead of setting it once, so we don't change how anything else in the
    // session gets compiled.
    SEXP old_recording = PROTECT(Fir_set_rcp_recording(Rf_ScalarLogical(TRUE)));
    SEXP compiled = cmpfun(closure, R_NilValue);
    PROTECT(compiled);
    Fir_set_rcp_recording(old_recording);
    if (TYPEOF(BODY(compiled)) == EXTPTRSXP) {
      code = BODY(compiled);
    }
    UNPROTECT(3);
  }

  // `SET_VECTOR_ELT` instead of `Fir_set_const` for the write barrier: unlike init-time pool
  // writes, the pool may already be old-generation here.
  SET_VECTOR_ELT(pool, FIR_BC_BASELINE_JIT, code);
  return code;
}

// What to bind `...` to in a bytecode baseline's environment, given a FIŘ `dots` value: FIŘ code
// passes dots as a `DOTSXP` (or `NULL` when empty), but bytecode expects what `applyClosure`
// binds `...` to, a `DOTSXP` (or the missing argument when empty).
static SEXP Fir_dots_for_bytecode(SEXP dots) {
  return dots == R_NilValue ? R_MissingArg : dots;
}

SEXP Fir_bc_baseline_call(SEXP pool, SEXP env, int argc, SEXP const *args) {
  // Count the call, which becomes the version's number of recorded calls
  // (nothing else records it: the JIT only records individual instructions).
  SEXP calls = Fir_const(pool, FIR_BC_BASELINE_CALLS);
  if (TYPEOF(calls) == INTSXP && XLENGTH(calls) == 1 && INTEGER(calls)[0] != INT_MAX) {
    INTEGER(calls)[0]++;
  }

  bool pushed = Fir_push_env(&env, FIR_MKENV_REGULAR, NULL);
  PROTECT(env);

  SEXP formal = Fir_const(pool, FIR_BC_BASELINE_FORMALS);
  for (int i = 0; i < argc; ++i, formal = CDR(formal)) {
    ASSERT(formal != R_NilValue, "bytecode baseline called with more arguments than formals");
    SEXP value = args[i];
    if (TAG(formal) == R_DotsSymbol) {
      value = Fir_dots_for_bytecode(value);
    }
    if (value == R_MissingArg && CAR(formal) != R_MissingArg) {
      // Bind a missing argument that has a default as a promise of the default,
      // like GNU-R's `applyClosure`.
      value = Rf_mkPROMISE(CAR(formal), env);
    }
    PROTECT(value);
    Rf_defineVar(TAG(formal), value, env);
    UNPROTECT(1);
  }
  ASSERT(formal == R_NilValue, "bytecode baseline called with fewer arguments than formals");

  SEXP out = Rf_eval(Fir_bc_baseline_code(pool), env);

  UNPROTECT(1); // env
  Fir_pop_env(&env, pushed, NULL);
  return out;
}

/// Growable set of SEXPs, in `R_alloc` memory, which is released when the enclosing `.Call`
/// returns. The SEXPs aren't protected, so they must be reachable from something that is.
typedef struct {
  SEXP *data;
  int length;
  int capacity;
} Fir_SexpSet;

/// Add `value` unless it's already in `set`, and return whether it was added.
static bool Fir_sexp_set_add(Fir_SexpSet *set, SEXP value) {
  for (int i = 0; i < set->length; i++) {
    if (set->data[i] == value) {
      return false;
    }
  }

  if (set->length == set->capacity) {
    int capacity = set->capacity == 0 ? 16 : set->capacity * 2;
    SEXP *data = (SEXP *)R_alloc((size_t)capacity, sizeof(SEXP));
    if (set->length != 0) {
      memcpy(data, set->data, (size_t)set->length * sizeof(SEXP));
    }
    set->data = data;
    set->capacity = capacity;
  }

  set->data[set->length++] = value;
  return true;
}

/// Add every vector reachable from `sexp` through vectors (including `sexp` itself) to `visited`.
///
/// Constant pools store nested constant pools as elements, and pools of mutually-recursive
/// functions reference each other, hence the visited set.
static void Fir_visit_vectors(SEXP sexp, Fir_SexpSet *visited) {
  if (TYPEOF(sexp) != VECSXP || !Fir_sexp_set_add(visited, sexp)) {
    return;
  }

  for (R_xlen_t i = 0; i < XLENGTH(sexp); i++) {
    Fir_visit_vectors(VECTOR_ELT(sexp, i), visited);
  }
}

/// If `pool` is a bytecode baseline's constant pool, return its FIŘ function name.
static SEXP Fir_bc_baseline_name(SEXP pool) {
  if (TYPEOF(pool) != VECSXP || XLENGTH(pool) < FIR_BC_BASELINE_SIZE) {
    return NULL;
  }

  SEXP id = VECTOR_ELT(pool, FIR_BC_BASELINE_ID);
  if (TYPEOF(id) != STRSXP || XLENGTH(id) != 2
      || strcmp(CHAR(STRING_ELT(id, 0)), FIR_BC_BASELINE_MAGIC) != 0) {
    return NULL;
  }
  return STRING_ELT(id, 1);
}

static SEXP Fir_named_list(int length, char const *const *names) {
  SEXP list = PROTECT(Rf_allocVector(VECSXP, length));
  SEXP names_sexp = PROTECT(Rf_allocVector(STRSXP, length));
  for (int i = 0; i < length; i++) {
    SET_STRING_ELT(names_sexp, i, Rf_mkChar(names[i]));
  }
  Rf_setAttrib(list, R_NamesSymbol, names_sexp);
  UNPROTECT(2);
  return list;
}

SEXP Fir_bc_baseline_recording(SEXP pool, int calls) {
  SEXP (*export_recording)(SEXP) = Fir_rcp()->export_recording;
  // Without the copy-and-patch JIT, the bytecode runs in GNU-R's interpreter, which records
  // nothing. With it, the code is only compiled (with recording) once it runs.
  SEXP code = VECTOR_ELT(pool, FIR_BC_BASELINE_JIT);
  if (export_recording == NULL || TYPEOF(code) != EXTPTRSXP
      || TYPEOF(Rf_getAttrib(code, Rf_install("recording"))) != VECSXP) {
    return R_NilValue;
  }

  SEXP exported = PROTECT(export_recording(code));
  SEXP fun = VECTOR_ELT(exported, 2);
  SEXP consts = VECTOR_ELT(fun, 2);

  // `GETFUN`'s recorded function becomes the FIŘ function name of a compiled closure, or `NULL`
  // for anything else: the server can't tell what any other function is.
  SEXP callees = PROTECT(Rf_allocVector(VECSXP, XLENGTH(consts)));
  for (R_xlen_t i = 0; i < XLENGTH(consts); i++) {
    Fir_FunctionData *data = NULL;
    if (Fir_is_compiled_closure(VECTOR_ELT(consts, i), &data)) {
      SET_VECTOR_ELT(callees, i, Rf_mkString(data->name));
    }
  }

  static char const *const fun_names[] = {"bcids", "counters", "callees"};
  SEXP fun_out = PROTECT(Fir_named_list(3, fun_names));
  SET_VECTOR_ELT(fun_out, 0, VECTOR_ELT(fun, 0));
  SET_VECTOR_ELT(fun_out, 1, VECTOR_ELT(fun, 1));
  SET_VECTOR_ELT(fun_out, 2, callees);

  static char const *const names[] = {"calls", "branch", "var_call", "fun"};
  SEXP recording = PROTECT(Fir_named_list(4, names));
  SET_VECTOR_ELT(recording, 0, Rf_ScalarInteger(calls));
  SET_VECTOR_ELT(recording, 1, VECTOR_ELT(exported, 0));
  SET_VECTOR_ELT(recording, 2, VECTOR_ELT(exported, 1));
  SET_VECTOR_ELT(recording, 3, fun_out);
  UNPROTECT(4);
  return recording;
}

SEXP Fir_serialized_feedback(SEXP pool) {
  Fir_SexpSet pools = {NULL, 0, 0};
  Fir_visit_vectors(pool, &pools);

  SEXP out = PROTECT(Rf_allocVector(VECSXP, pools.length));
  int count = 0;
  for (int i = 0; i < pools.length; i++) {
    SEXP baseline_pool = pools.data[i];
    SEXP name = Fir_bc_baseline_name(baseline_pool);
    if (name == NULL) {
      continue;
    }

    SEXP calls = VECTOR_ELT(baseline_pool, FIR_BC_BASELINE_CALLS);
    SEXP recording = PROTECT(Fir_bc_baseline_recording(
        baseline_pool, TYPEOF(calls) == INTSXP && XLENGTH(calls) == 1 ? INTEGER(calls)[0] : 0));
    if (recording == R_NilValue) {
      UNPROTECT(1);
      continue;
    }

    static char const *const names[] = {"function", "calls", "branch", "var_call", "fun"};
    SEXP entry = PROTECT(Fir_named_list(5, names));
    SET_VECTOR_ELT(entry, 0, Rf_ScalarString(name));
    for (int j = 0; j < 4; j++) {
      SET_VECTOR_ELT(entry, j + 1, VECTOR_ELT(recording, j));
    }
    SET_VECTOR_ELT(out, count++, entry);
    UNPROTECT(2);
  }

  UNPROTECT(1);
  // No baseline ran, so we know nothing (as opposed to knowing that nothing was recorded).
  return count == 0 ? R_NilValue : Rf_xlengthgets(out, count);
}

R_xlen_t Fir_subscript_offset_slow(SEXP vector, int index) {
  R_xlen_t length = XLENGTH(vector);
  if (index >= 0 || index == NA_INTEGER) Rf_error("subscript out of bounds");
  // `i = index + 1 <= 0`
  if (index == -1 || length < 2) Rf_error("attempt to select less than one element in integerOneIndex");
  if (length == 2 && index > -4) return index + 3;
  Rf_error("attempt to select more than one element in integerOneIndex");
}

R_xlen_t Fir_subscript_na_offset_slow(SEXP vector, int index) {
  R_xlen_t length = XLENGTH(vector);
  if (index >= 0 || index == NA_INTEGER) return -1;
  // `i = index + 1 <= 0`: `x[0]` is empty, and `x[-k]` drops element `k` if there is one.
  if (index < -1 && length == 2 && index > -4) return index + 3;
  if (length == 1 && index + 1 < -1) return 0;
  Rf_error("FIŘ deoptimization triggered: x[%d] isn't one element (unsupported)", index + 1);
}

void Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP env) {
  (void)stack_size;
  (void)stack_values;
  (void)env;

  Rf_error("FIŘ deoptimization triggered at pc=%d (unsupported)", pc);
}

bool Fir_assume_builtin_function(SEXP value, int blt_idx) {
  if (TYPEOF(value) != BUILTINSXP && TYPEOF(value) != SPECIALSXP) {
    return false;
  }

  return PRIMOFFSET(value) == blt_idx;
}

bool Fir_assume_base_function(SEXP value, SEXP symbol) {
  return value == Fir_base_function(symbol);
}

static SEXP Fir_load_fun_for_assume(SEXP symbol, SEXP env) {
  Fir_assert_symbol(symbol, "assume_load_fun");
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for assume_load_fun");

  // `Rf_findFun`,
  // but returns `NULL` when it encounters a promise it can't force without a possible effect
  // (instead of forcing it unconditionally)
  // or on lookup fail (instead of `Rf_error`)
  if (env == Rsh_ElidedEnv) {
    env = ENCLOS(env);
  }
  while (env != R_EmptyEnv) {
    SEXP vl = R_findVarInFrame(env, symbol);
    if (vl != R_UnboundValue) {
      if (TYPEOF(vl) == PROMSXP) {
        vl = Fir_safe_force(vl);
        if (TYPEOF(vl) == PROMSXP) {
          return NULL; // fail instead of forcing
        }
      }
      if (TYPEOF(vl) == CLOSXP || TYPEOF(vl) == BUILTINSXP || TYPEOF(vl) == SPECIALSXP) {
        return vl;
      }
      // Not a function, not a promise - keep searching (R's `findFun` behavior)
    }
    env = ENCLOS(env);
  }

  // No function found for `symbol`
  return NULL;
}

bool Fir_is_bytecode_closure_of(SEXP value, SEXP origin) {
  // Numbers are compared bitwise (`num.eq = FALSE, single.NA = FALSE`), and environments too.
  const int flags = 1 | 2 | 16;
  return TYPEOF(value) == CLOSXP && TYPEOF(BODY(value)) == BCODESXP &&
         R_compute_identical(BODY(value), VECTOR_ELT(origin, 1), flags) &&
         R_compute_identical(FORMALS(value), VECTOR_ELT(origin, 0), flags);
}

bool Fir_assume_load_fun(SEXP symbol, SEXP env, Fir_DispatchFn dispatch, SEXP origin,
                         SEXP* found_ref) {
  SEXP found = Fir_load_fun_for_assume(symbol, env);
  if (found == NULL || !Fir_assume_function(found, dispatch, origin)) {
    return false;
  }

  if (found_ref != NULL) {
    *found_ref = found;
  }
  return true;
}

bool Fir_assume_load_builtin_fun(SEXP symbol, SEXP env, int blt_idx, SEXP* found_ref) {
  SEXP found = Fir_load_fun_for_assume(symbol, env);
  if (found == NULL || PRIMOFFSET(found) != blt_idx) {
    return false;
  }

  if (found_ref != NULL) {
    *found_ref = found;
  }
  return true;
}

bool Fir_assume_load_base_fun(SEXP symbol, SEXP env, SEXP base_symbol, SEXP* found_ref) {
  SEXP found = Fir_load_fun_for_assume(symbol, env);
  if (found == NULL || found != Fir_base_function(base_symbol)) {
    return false;
  }

  if (found_ref != NULL) {
    *found_ref = found;
  }
  return true;
}

bool Fir_assume_load_var(SEXP symbol, SEXP env, SEXP constant) {
  Fir_assert_symbol(symbol, "assume_load_global_var");
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for assume_load_global_var");

  while (env != R_EmptyEnv) {
    SEXP found = R_findVarInFrame(env, symbol);
    if (found != R_UnboundValue) {
      return found == constant;
    }
    env = ENCLOS(env);
  }

  return false;
}


void Fir_dbg_comment(const char* comment) {
  fprintf(stderr, "%s\n", comment);
}

void Fir_dbg_sexp(const char* name, SEXP value) {
  fprintf(stderr, "* - %s = ", name);
  Fir_print_sexp(value);
  fprintf(stderr, "\n");
}

void Fir_dbg_logical(const char* name, Rboolean value) {
  const char* value_str = value == TRUE ? "TRUE" : value == FALSE ? "FALSE" : "NA_LOGICAL";
  fprintf(stderr, "* - %s = %s\n", name, value_str);
}

void Fir_dbg_int(const char* name, int value) {
  if (value == NA_INTEGER) {
    fprintf(stderr, "* - %s = NA_INTEGER\n", name);
  } else {
    fprintf(stderr, "* - %s = %d\n", name, value);
  }
}

void Fir_dbg_float(const char* name, double value) {
  if (ISNAN(value)) {
    fprintf(stderr, "* - %s = NA_REAL\n", name);
  } else {
    fprintf(stderr, "* - %s = %g\n", name, value);
  }
}

void Fir_dbg_string(const char* name, char* value) {
  if (value == NULL) {
    fprintf(stderr, "* - %s = NA_STRING\n", name);
  } else {
    fprintf(stderr, "* - %s = \"%s\"\n", name, value);
  }
}

void Fir_dbg_boolean(const char* name, bool value) {
  const char* value_str = value ? "true" : "false";
  fprintf(stderr, "* - %s = %s\n", name, value_str);
}

void Fir_print_signature(Fir_Signature signature) {
  // Print parameter types separated by ", "
  for (int i = 0; i < signature.param_count; ++i) {
    if (i > 0) {
      fprintf(stderr, ", ");
    }
    Fir_print_type(signature.param_types[i]);
  }

  if (signature.param_count > 0) {
    fprintf(stderr, " ");
  }

  fprintf(stderr, "-");
  Fir_print_effects(signature.effects);
  fprintf(stderr, "> ");
  Fir_print_type(signature.return_type);
}

void Fir_print_type(Fir_Type type) {
  // Print promisity wrapper open
  switch (type.promisity.tag) {
  case FIR_PROMISITY_VALUE:
    break;
  case FIR_PROMISITY_MAYBE:
    fprintf(stderr, "p?(");
    break;
  case FIR_PROMISITY_PROMISE:
    fprintf(stderr, "p(");
    break;
  default:
    assert(false && "Malformed promisity");
    break;
  }

  Fir_print_kind(type.kind);
  if (type.ownership != FIR_SHARED) {
    Fir_print_ownership(type.ownership);
  }
  // For the `ANY - concreteness` (any value + maybe promisity + shared),
  // concreteness is implicit iff `MAYBE`.
  // For other types, concreteness is implicit iff `DEFINITELY`.
  bool is_any_without_concreteness = (type.kind.tag == FIR_KIND_ANY_VALUE
              && type.promisity.tag == FIR_PROMISITY_MAYBE
              && type.ownership == FIR_SHARED);
  if (is_any_without_concreteness == type.definite) {
    Fir_print_concreteness(type.definite);
  }

  // Print promisity wrapper close
  switch (type.promisity.tag) {
  case FIR_PROMISITY_VALUE:
    break;
  case FIR_PROMISITY_MAYBE:
  case FIR_PROMISITY_PROMISE:
    fprintf(stderr, " ");
    Fir_print_effects(type.promisity.effects);
    fprintf(stderr, ")");
    break;
  default:
    assert(false && "Malformed promisity");
    break;
  }
}

void Fir_print_kind(Fir_Kind kind) {
  switch (kind.tag) {
  case FIR_KIND_ANY_VALUE:
    fprintf(stderr, "V");
    break;
  case FIR_KIND_PRIMITIVE_VECTOR:
    fprintf(stderr, "v(");
    Fir_print_primitive_kind(kind.as.primitive.primitive);
    fprintf(stderr, ")");
    break;
  case FIR_KIND_PRIMITIVE_VECTOR1:
    fprintf(stderr, "v1(");
    Fir_print_primitive_kind(kind.as.primitive.primitive);
    fprintf(stderr, ")");
    break;
  case FIR_KIND_CLOSURE:
    fprintf(stderr, "cls");
    break;
  case FIR_KIND_DOTS:
    fprintf(stderr, "dots");
    break;
  case FIR_KIND_MISSING:
    fprintf(stderr, "miss");
    break;
  case FIR_KIND_PRIMITIVE_SCALAR:
    Fir_print_primitive_kind(kind.as.primitive.primitive);
    break;
  case FIR_KIND_BOOLEAN:
    fprintf(stderr, "B");
    break;
  default:
    assert(false && "Malformed kind");
    break;
  }
}

void Fir_print_promisity(Fir_Promisity promisity) {
  switch (promisity.tag) {
  case FIR_PROMISITY_VALUE:
    fprintf(stderr, "val");
    break;
  case FIR_PROMISITY_MAYBE:
    fprintf(stderr, "p?(_ ");
    Fir_print_effects(promisity.effects);
    fprintf(stderr, ")");
    break;
  case FIR_PROMISITY_PROMISE:
    fprintf(stderr, "p(_ ");
    Fir_print_effects(promisity.effects);
    fprintf(stderr, ")");
    break;
  default:
    assert(false && "Malformed promisity");
    break;
  }
}

void Fir_print_primitive_kind(Fir_PrimitiveKind primitive) {
  switch (primitive) {
  case FIR_PRIMITIVE_LOGICAL:
    fprintf(stderr, "L");
    break;
  case FIR_PRIMITIVE_INTEGER:
    fprintf(stderr, "I");
    break;
  case FIR_PRIMITIVE_REAL:
    fprintf(stderr, "R");
    break;
  case FIR_PRIMITIVE_STRING:
    fprintf(stderr, "S");
    break;
  default:
    assert(false && "Malformed primitive kind");
  }
}

void Fir_print_ownership(Fir_Ownership ownership) {
  switch (ownership) {
  case FIR_FRESH:
    fprintf(stderr, "f");
    break;
  case FIR_OWNED:
    fprintf(stderr, "o");
    break;
  case FIR_BORROWED:
    fprintf(stderr, "b");
    break;
  case FIR_SHARED:
    fprintf(stderr, "s");
    break;
  default:
    assert(false && "Malformed ownership");
  }
}

void Fir_print_concreteness(bool definite) {
  if (definite) {
    fprintf(stderr, "!");
  } else {
    fprintf(stderr, "?");
  }
}

void Fir_print_effects(Fir_Effects effects) {
  switch (effects) {
  case FIR_EFFECTS_NONE:
    fprintf(stderr, "-");
    break;
  case FIR_EFFECTS_IMPURE:
    fprintf(stderr, "~");
    break;
  case FIR_EFFECTS_REFLECT:
    fprintf(stderr, "+");
    break;
  default:
    assert(false && "Malformed effects");
  }
}

bool Fir_effects_impure(Fir_Effects effects) {
  return effects >= FIR_EFFECTS_IMPURE;
}

bool Fir_effects_reflect(Fir_Effects effects) {
  return effects == FIR_EFFECTS_REFLECT;
}

bool Fir_is_subeffects(Fir_Effects a, Fir_Effects b) {
  return a <= b;
}

Fir_Effects Fir_effects_union(Fir_Effects a, Fir_Effects b) {
  return a >= b ? a : b;
}

Fir_Effects Fir_effects_intersect(Fir_Effects a, Fir_Effects b) {
  return a <= b ? a : b;
}

void Fir_dbg_signature(Fir_Signature signature) {
  fprintf(stderr, "* - Signature: ");
  Fir_print_signature(signature);
  fprintf(stderr, "\n");
}

// === : ===
/// GNU-R's `a:b` of two numbers (`do_colon` and `seq_colon`, `seq.c`).
static SEXP Fir_colon(double n1, double n2) {
  if (ISNAN(n1) || ISNAN(n2)) Rf_error("NA/NaN argument");
  double r = fabs(n2 - n1);
  if (r >= R_XLEN_T_MAX) Rf_error("result would be too long a vector");
  if (n1 == (R_xlen_t) n1 && n2 == (R_xlen_t) n2)
    return R_compact_intrange((R_xlen_t) n1, (R_xlen_t) n2);

  R_xlen_t n = (R_xlen_t)(r + 1 + FLT_EPSILON);
  bool use_int = n1 <= INT_MAX && n1 > INT_MIN && n1 == (int) n1;
  if (use_int) {
    // The effective `b`
    double dn = (double) n;
    r = n1 + (n1 <= n2 ? dn - 1 : -(dn - 1));
    use_int = r > INT_MIN && r <= INT_MAX;
  }
  if (use_int)
    return R_compact_intrange((R_xlen_t) n1, (R_xlen_t)(n1 <= n2 ? n1 + n - 1 : n1 - n + 1));
  SEXP ans = allocVector(REALSXP, n);
  for (R_xlen_t i = 0; i < n; i++) REAL(ans)[i] = n1 <= n2 ? n1 + (double)i : n1 - (double)i;
  return ans;
}

/// `Fir_colon` of a version that returns `v(I)`: one whose result isn't an integer vector deopts.
static SEXP Fir_colon_int(double n1, double n2) {
  SEXP ans = Fir_colon(n1, n2);
  if (TYPEOF(ans) != INTSXP)
    Rf_error("FIŘ deoptimization triggered: %.15g:%.15g isn't an integer vector (unsupported)", n1, n2);
  return ans;
}

// I:I→v(I)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_int_fx_none_ret_vec_int, int a, int b) {
  return Fir_colon_int(Fir_i2r(a), Fir_i2r(b));
}
// I:R→v(I)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_real_fx_none_ret_vec_int, int a, double b) {
  return Fir_colon_int(Fir_i2r(a), b);
}
// R:R→V (may return int or real range)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_real_scalar_real_fx_none_ret_value, double a, double b) {
  return Fir_colon(a, b);
}

/// Write `value` at (1-based) `i` in `x` and return the result. `in_place` is for the versions
/// that own `x` (nothing else holds it, so it can be mutated); the ones that borrow it copy first.

static SEXP Fir_shallow_dup(SEXP x) {
#ifdef FIR_STATS
  Fir_stats.fir_dups++;
  Fir_stats.fir_dups_shallow++;
#endif
  return Rf_shallow_duplicate(x);
}

static SEXP Fir_subassign_logical(SEXP x, int i, Rboolean value, bool in_place) {
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP res = in_place ? x : PROTECT(Fir_shallow_dup(x));
  LOGICAL(res)[i - 1] = value;
  if (!in_place) UNPROTECT(1);
  return res;
}
static SEXP Fir_subassign_int(SEXP x, int i, int value, bool in_place) {
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP res = in_place ? x : PROTECT(Fir_shallow_dup(x));
  INTEGER(res)[i - 1] = value;
  if (!in_place) UNPROTECT(1);
  return res;
}
static SEXP Fir_subassign_real(SEXP x, int i, double value, bool in_place) {
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP res = in_place ? x : PROTECT(Fir_shallow_dup(x));
  REAL(res)[i - 1] = value;
  if (!in_place) UNPROTECT(1);
  return res;
}
static SEXP Fir_subassign_string(SEXP x, int i, char* value, bool in_place) {
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP res = in_place ? x : PROTECT(Fir_shallow_dup(x));
  SET_STRING_ELT(res, i - 1, value == NULL ? NA_STRING : Rf_mkChar(value));
  if (!in_place) UNPROTECT(1);
  return res;
}

// === [<- (scalar index write, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_borrowed_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_logical(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_owned_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_logical(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_borrowed_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_int(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_owned_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_int(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_borrowed_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_real(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_owned_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_real(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_borrowed_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_string(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_owned_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_string(x, i, value, true);
}

// === [[<- (scalar index write, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value, SEXP ddd) {
  return Fir_subassign_logical(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value, SEXP ddd) {
  return Fir_subassign_logical(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value, SEXP ddd) {
  return Fir_subassign_int(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value, SEXP ddd) {
  return Fir_subassign_int(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value, SEXP ddd) {
  return Fir_subassign_real(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value, SEXP ddd) {
  return Fir_subassign_real(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value, SEXP ddd) {
  return Fir_subassign_string(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value, SEXP ddd) {
  return Fir_subassign_string(x, i, value, true);
}

/// The `k`-th subscript in `indices`, which is an integer or (coerced here) a real vector.
static int Fir_index_elt(SEXP indices, R_xlen_t k) {
  return TYPEOF(indices) == REALSXP ? Fir_index_from_real(REAL(indices)[k]) : INTEGER(indices)[k];
}

/// [<-/[[<- with a vector of (1-based) indices: write `value[k]` at `i[k]` for every `k`. Like
/// `Fir_subassign_<type>`, `in_place` is for the versions that own `x`.
/// The index and value must have the same length; neither is recycled.

static SEXP Fir_subassign_vector_logical(SEXP x, SEXP i, SEXP value, bool in_place) {
  R_xlen_t count = XLENGTH(i);
  ASSERT(XLENGTH(value) == count, "value must have as many elements as the index");
  SEXP res = in_place ? x : PROTECT(Fir_shallow_dup(x));
  for (R_xlen_t k = 0; k < count; k++) {
    int idx = Fir_index_elt(i, k);
    ASSERT(idx >= 1 && (R_xlen_t)idx <= XLENGTH(res), "subscript out of bounds");
    LOGICAL(res)[idx - 1] = LOGICAL(value)[k];
  }
  if (!in_place) UNPROTECT(1);
  return res;
}
static SEXP Fir_subassign_vector_int(SEXP x, SEXP i, SEXP value, bool in_place) {
  R_xlen_t count = XLENGTH(i);
  ASSERT(XLENGTH(value) == count, "value must have as many elements as the index");
  SEXP res = in_place ? x : PROTECT(Fir_shallow_dup(x));
  for (R_xlen_t k = 0; k < count; k++) {
    int idx = Fir_index_elt(i, k);
    ASSERT(idx >= 1 && (R_xlen_t)idx <= XLENGTH(res), "subscript out of bounds");
    INTEGER(res)[idx - 1] = INTEGER(value)[k];
  }
  if (!in_place) UNPROTECT(1);
  return res;
}
static SEXP Fir_subassign_vector_real(SEXP x, SEXP i, SEXP value, bool in_place) {
  R_xlen_t count = XLENGTH(i);
  ASSERT(XLENGTH(value) == count, "value must have as many elements as the index");
  SEXP res = in_place ? x : PROTECT(Fir_shallow_dup(x));
  for (R_xlen_t k = 0; k < count; k++) {
    int idx = Fir_index_elt(i, k);
    ASSERT(idx >= 1 && (R_xlen_t)idx <= XLENGTH(res), "subscript out of bounds");
    REAL(res)[idx - 1] = REAL(value)[k];
  }
  if (!in_place) UNPROTECT(1);
  return res;
}
static SEXP Fir_subassign_vector_string(SEXP x, SEXP i, SEXP value, bool in_place) {
  R_xlen_t count = XLENGTH(i);
  ASSERT(XLENGTH(value) == count, "value must have as many elements as the index");
  SEXP res = in_place ? x : PROTECT(Fir_shallow_dup(x));
  for (R_xlen_t k = 0; k < count; k++) {
    int idx = Fir_index_elt(i, k);
    ASSERT(idx >= 1 && (R_xlen_t)idx <= XLENGTH(res), "subscript out of bounds");
    SET_STRING_ELT(res, idx - 1, STRING_ELT(value, k));
  }
  if (!in_place) UNPROTECT(1);
  return res;
}

// === [<- (vector index write, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_borrowed_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_vector_logical(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_owned_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_vector_logical(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_borrowed_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_vector_int(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_owned_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_vector_int(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_borrowed_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_vector_real(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_owned_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_vector_real(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_borrowed_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_vector_string(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_owned_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  (void)ddd;
  return Fir_subassign_vector_string(x, i, value, true);
}

// === [[<- (vector index write, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_subassign_vector_logical(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_subassign_vector_logical(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_subassign_vector_int(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_subassign_vector_int(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_subassign_vector_real(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_subassign_vector_real(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_subassign_vector_string(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_subassign_vector_string(x, i, value, true);
}

DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_borrowed_scalar_real_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_logical_borrowed_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_borrowed_vec_real_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_logical_borrowed_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_owned_scalar_real_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_logical_owned_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_owned_vec_real_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_logical_owned_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_borrowed_scalar_real_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_int_borrowed_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_borrowed_vec_real_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_int_borrowed_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_owned_scalar_real_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_int_owned_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_owned_vec_real_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_int_owned_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_borrowed_scalar_real_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_real_borrowed_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_borrowed_vec_real_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_real_borrowed_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_owned_scalar_real_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_real_owned_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_owned_vec_real_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_real_owned_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_borrowed_scalar_real_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_string_borrowed_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_borrowed_vec_real_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_string_borrowed_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_owned_scalar_real_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_string_owned_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_owned_vec_real_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u3c_u2d_vec_string_owned_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_scalar_real_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_logical_borrowed_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_vec_real_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_logical_borrowed_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_scalar_real_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_logical_owned_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_vec_real_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_logical_owned_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_scalar_real_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_int_borrowed_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_vec_real_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_int_borrowed_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_scalar_real_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_int_owned_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_vec_real_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_int_owned_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_scalar_real_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_real_borrowed_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_vec_real_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_real_borrowed_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_scalar_real_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_real_owned_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_vec_real_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_real_owned_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_scalar_real_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_string_borrowed_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_vec_real_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_string_borrowed_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh(env, x, i, value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_scalar_real_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_string_owned_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh(env, x, Fir_index_from_real(i), value, ddd);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_vec_real_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_string_owned_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh(env, x, i, value, ddd);
}

DEFINE_OVERRIDDEN_BUILTIN(SEXP, as_u2einteger, vec1_real_missing_fx_none_ret_vec1_int, SEXP x, SEXP ddd) {
  (void)ddd;
  if (Fir_real_out_of_int_range(REAL(x)[0])) Rf_warning("NAs introduced by coercion to integer range");
  return Rf_ScalarInteger(Fir_index_from_real(REAL(x)[0]));
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, as_u2einteger, vec_real_missing_fx_none_ret_vec_int, SEXP x, SEXP ddd) {
  (void)ddd;
  R_xlen_t count = XLENGTH(x);
  SEXP res = PROTECT(Rf_allocVector(INTSXP, count));
  bool warn = false;
  for (R_xlen_t k = 0; k < count; k++) {
    warn |= Fir_real_out_of_int_range(REAL(x)[k]);
    INTEGER(res)[k] = Fir_index_from_real(REAL(x)[k]);
  }
  if (warn) Rf_warning("NAs introduced by coercion to integer range");
  UNPROTECT(1);
  return res;
}

// === rep(x, times) ===
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_logical_scalar_int_fx_none_ret_vec_logical, Rboolean x, int times) {
  ASSERT(times >= 0 && times != NA_INTEGER, "invalid 'times' argument");
  SEXP res = PROTECT(Rf_allocVector(LGLSXP, times));
  for (int k = 0; k < times; k++) LOGICAL(res)[k] = x;
  UNPROTECT(1);
  return res;
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_int_scalar_int_fx_none_ret_vec_int, int x, int times) {
  ASSERT(times >= 0 && times != NA_INTEGER, "invalid 'times' argument");
  SEXP res = PROTECT(Rf_allocVector(INTSXP, times));
  for (int k = 0; k < times; k++) INTEGER(res)[k] = x;
  UNPROTECT(1);
  return res;
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_real_scalar_int_fx_none_ret_vec_real, double x, int times) {
  ASSERT(times >= 0 && times != NA_INTEGER, "invalid 'times' argument");
  SEXP res = PROTECT(Rf_allocVector(REALSXP, times));
  for (int k = 0; k < times; k++) REAL(res)[k] = x;
  UNPROTECT(1);
  return res;
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_string_scalar_int_fx_none_ret_vec_string, char* x, int times) {
  ASSERT(times >= 0 && times != NA_INTEGER, "invalid 'times' argument");
  SEXP res = PROTECT(Rf_allocVector(STRSXP, times));
  SEXP chr = x == NULL ? NA_STRING : Rf_mkChar(x);
  for (int k = 0; k < times; k++) SET_STRING_ELT(res, k, chr);
  UNPROTECT(1);
  return res;
}

// === sum(x, na.rm=miss) ===
/// GNU-R's `isum`: a sum out of the integer range is a double, where a version that returns `I`
/// deopts. (`NA_LOGICAL == NA_INTEGER`, so this also sums logicals.)
static int Fir_isum(const int* x, R_xlen_t len) {
  int64_t acc = 0;
  for (R_xlen_t k = 0; k < len; k++) {
    if (x[k] == NA_INTEGER) return NA_INTEGER;
    acc += x[k];
  }
  if (acc > INT_MAX || acc < -INT_MAX)
    Rf_error("FIŘ deoptimization triggered: the sum %lld isn't an integer (unsupported)", (long long) acc);
  return (int) acc;
}
// v(L)→I
DEFINE_OVERRIDDEN_BUILTIN(int, sum, vec_logical_missing_fx_none_ret_scalar_int, SEXP x, SEXP naRm) {
  return Fir_isum(LOGICAL(x), XLENGTH(x));
}
// v(I)→I
DEFINE_OVERRIDDEN_BUILTIN(int, sum, vec_int_missing_fx_none_ret_scalar_int, SEXP x, SEXP naRm) {
  return Fir_isum(INTEGER(x), XLENGTH(x));
}
// v(R)→R: GNU-R's `rsum`, which sums in a `long double`
DEFINE_OVERRIDDEN_BUILTIN(double, sum, vec_real_missing_fx_none_ret_scalar_real, SEXP x, SEXP naRm) {
  long double acc = 0.0;
  R_xlen_t len = XLENGTH(x);
  for (R_xlen_t k = 0; k < len; k++) acc += REAL(x)[k];
  return acc > DBL_MAX ? R_PosInf : acc < -DBL_MAX ? R_NegInf : (double) acc;
}
