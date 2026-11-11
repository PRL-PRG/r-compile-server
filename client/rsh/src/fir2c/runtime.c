#include "runtime.h"
#include "print_sexp.h"

#include <assert.h>
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

#define ASSERT(x, msg, ...) \
  if (!(x)) Rf_error("FIŘ internal assertion failed:\n  `" #x "`\n  " msg, ##__VA_ARGS__)

Fir_Kind Fir_kind_any_value = {.tag = FIR_KIND_ANY_VALUE};
Fir_Kind Fir_kind_closure = {.tag = FIR_KIND_CLOSURE};
Fir_Kind Fir_kind_dots = {.tag = FIR_KIND_DOTS};
Fir_Kind Fir_kind_missing = {.tag = FIR_KIND_MISSING};
Fir_Kind Fir_kind_boolean = {.tag = FIR_KIND_BOOLEAN};

static Fir_Kind const PRIMITIVE_SCALAR_KINDS[4] = {
  {.tag = FIR_KIND_PRIMITIVE_SCALAR, .as.primitive = {.primitive = FIR_PRIMITIVE_LOGICAL}},
  {.tag = FIR_KIND_PRIMITIVE_SCALAR, .as.primitive = {.primitive = FIR_PRIMITIVE_INTEGER}},
  {.tag = FIR_KIND_PRIMITIVE_SCALAR, .as.primitive = {.primitive = FIR_PRIMITIVE_REAL}},
  {.tag = FIR_KIND_PRIMITIVE_SCALAR, .as.primitive = {.primitive = FIR_PRIMITIVE_STRING}},
};

static Fir_Kind const PRIMITIVE_VECTOR_KINDS[4] = {
  {.tag = FIR_KIND_PRIMITIVE_VECTOR, .as.primitive = {.primitive = FIR_PRIMITIVE_LOGICAL}},
  {.tag = FIR_KIND_PRIMITIVE_VECTOR, .as.primitive = {.primitive = FIR_PRIMITIVE_INTEGER}},
  {.tag = FIR_KIND_PRIMITIVE_VECTOR, .as.primitive = {.primitive = FIR_PRIMITIVE_REAL}},
  {.tag = FIR_KIND_PRIMITIVE_VECTOR, .as.primitive = {.primitive = FIR_PRIMITIVE_STRING}},
};

static Fir_Kind const PRIMITIVE_VECTOR1_KINDS[4] = {
  {.tag = FIR_KIND_PRIMITIVE_VECTOR1, .as.primitive = {.primitive = FIR_PRIMITIVE_LOGICAL}},
  {.tag = FIR_KIND_PRIMITIVE_VECTOR1, .as.primitive = {.primitive = FIR_PRIMITIVE_INTEGER}},
  {.tag = FIR_KIND_PRIMITIVE_VECTOR1, .as.primitive = {.primitive = FIR_PRIMITIVE_REAL}},
  {.tag = FIR_KIND_PRIMITIVE_VECTOR1, .as.primitive = {.primitive = FIR_PRIMITIVE_STRING}},
};

Fir_Kind Fir_kind_primitive_scalar(Fir_PrimitiveKind primitive_kind) {
  return PRIMITIVE_SCALAR_KINDS[primitive_kind];
}

Fir_Kind Fir_kind_primitive_vector(Fir_PrimitiveKind primitive_kind) {
  return PRIMITIVE_VECTOR_KINDS[primitive_kind];
}

Fir_Kind Fir_kind_primitive_vector1(Fir_PrimitiveKind primitive_kind) {
  return PRIMITIVE_VECTOR1_KINDS[primitive_kind];
}

Fir_Promisity Fir_promisity_value = {.tag = FIR_PROMISITY_VALUE, .effects = FIR_EFFECTS_NONE};

Fir_Promisity Fir_promisity_maybe(Fir_Effects effects) {
  return (Fir_Promisity) {.tag = FIR_PROMISITY_MAYBE, .effects = effects};
}

Fir_Promisity Fir_promisity_promise(Fir_Effects effects) {
  return (Fir_Promisity) {.tag = FIR_PROMISITY_PROMISE, .effects = effects};
}

Fir_Type Fir_type(Fir_Kind kind, Fir_Promisity promisity, Fir_Ownership ownership, bool definite) {
  return (Fir_Type) {.kind = kind, .promisity = promisity, .ownership = ownership, .definite = definite};
}

Fir_Signature Fir_signature(Fir_Type return_type, int param_count, Fir_Type const *param_types, Fir_Effects effects) {
  return (Fir_Signature) {.return_type = return_type, .param_count = param_count, .param_types = param_types, .effects = effects};
}

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

bool Fir_is_compiled_closure(SEXP value, Fir_FunctionData **data) {
  if (TYPEOF(value) != CLOSXP) {
    return false;
  }
  SEXP body = BODY(value);
  if (TYPEOF(body) != EXTPTRSXP || !IS_RSH_CODE(body)) {
    return false;
  }
  SEXP cp = R_ExternalPtrProtected(body);
  ASSERT(Fir_const(cp, 0) != R_NilValue, "Closure data not set");
  *data = (Fir_FunctionData*) STDVEC_DATAPTR(Fir_const(cp, 0));
  return true;
}

bool Fir_is_compiled_promise(SEXP value, Fir_PromiseGlobalData **global_data, Fir_PromiseLocalData **local_data) {
  if (TYPEOF(value) != PROMSXP) {
    return false;
  }
  SEXP body = PRCODE(value);
  if (TYPEOF(body) != EXTPTRSXP || !IS_RSH_CODE(body)) {
    return false;
  }
  SEXP data = R_ExternalPtrProtected(body);
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

static bool Fir_value_kind_matches(SEXP value, Fir_Kind kind) {
  switch (kind.tag) {
  case FIR_KIND_ANY_VALUE:
    return true;
  case FIR_KIND_PRIMITIVE_SCALAR: {
      // Unboxed scalars are represented as length-1 SEXP vectors at the C level (for now)
      SEXPTYPE expected
          = kind.as.primitive.primitive == FIR_PRIMITIVE_LOGICAL ? LGLSXP
          : kind.as.primitive.primitive == FIR_PRIMITIVE_INTEGER ? INTSXP
          : kind.as.primitive.primitive == FIR_PRIMITIVE_REAL ? REALSXP
          : STRSXP;
      if (TYPEOF(value) != expected) {
        return false;
      }
      return Rf_length(value) == 1;
  }
  case FIR_KIND_PRIMITIVE_VECTOR: {
      SEXPTYPE expected
          = kind.as.primitive.primitive == FIR_PRIMITIVE_LOGICAL ? LGLSXP
          : kind.as.primitive.primitive == FIR_PRIMITIVE_INTEGER ? INTSXP
          : kind.as.primitive.primitive == FIR_PRIMITIVE_REAL ? REALSXP
          : STRSXP;
      return TYPEOF(value) == expected;
  }
  case FIR_KIND_PRIMITIVE_VECTOR1: {
      SEXPTYPE expected
          = kind.as.primitive.primitive == FIR_PRIMITIVE_LOGICAL ? LGLSXP
          : kind.as.primitive.primitive == FIR_PRIMITIVE_INTEGER ? INTSXP
          : kind.as.primitive.primitive == FIR_PRIMITIVE_REAL ? REALSXP
          : STRSXP;
      return TYPEOF(value) == expected && Rf_length(value) == 1;
  }
  case FIR_KIND_BOOLEAN:
    // A boolean is a logical scalar that is not NA
    return TYPEOF(value) == LGLSXP && Rf_length(value) == 1
        && LOGICAL(value)[0] != NA_LOGICAL;
  case FIR_KIND_CLOSURE:
    return TYPEOF(value) == CLOSXP || TYPEOF(value) == BUILTINSXP ||
           TYPEOF(value) == SPECIALSXP;
  case FIR_KIND_DOTS:
    // `NULL` is the empty dots list, and it's what the server's `Type.of` calls `dots` (so a
    // speculation from interpreter feedback on a `NULL` value is `?: dots`).
    return TYPEOF(value) == DOTSXP || value == R_MissingArg || value == R_NilValue;
  case FIR_KIND_MISSING:
    return value == R_MissingArg;
  }
  return false;
}

static bool Fir_promise_value_matches(SEXP promise, Fir_Type type) {
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

bool Fir_value_matches(SEXP value, Fir_Type type) {
  switch (type.promisity.tag) {
  case FIR_PROMISITY_VALUE:
    if (TYPEOF(value) == PROMSXP) return false;
    return Fir_value_kind_matches(value, type.kind);
  case FIR_PROMISITY_MAYBE:
    if (TYPEOF(value) != PROMSXP) {
      return Fir_value_kind_matches(value, type.kind);
    }
    return Fir_promise_value_matches(value, type);
  case FIR_PROMISITY_PROMISE:
    if (TYPEOF(value) != PROMSXP) return false;
    return Fir_promise_value_matches(value, type);
  }
  return false;
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
  return env == Rsh_ElidedEnv || TYPEOF(env) != ENVSXP
      || Rf_findVarInFrame(env, Rsh_ReflectivelyAccessed) == R_LogicalNAValue;
}

// Whether the stats can remove and restore `env`'s reflection marker: `R_removeVarFromFrame` and
// `Rf_defineVar` raise errors in locked and base environments.
static bool Fir_stats_can_track_marker(SEXP env) {
  return TYPEOF(env) == ENVSXP && env != Rsh_ElidedEnv && env != R_BaseEnv
      && env != R_BaseNamespace && !R_EnvironmentIsLocked(env);
}

// Mark `env` reflectively accessed, like GNU-R's `recordReflection`, if the stats can track it.
static void Fir_stats_record_reflection(SEXP env) {
  if (Fir_stats_can_track_marker(env)
      && Rf_findVarInFrame(env, Rsh_ReflectivelyAccessed) != R_LogicalNAValue) {
    Rf_defineVar(Rsh_ReflectivelyAccessed, R_TrueValue, env);
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
// function), so the marker is restored before R continues the jump.
static void Fir_stats_force_cleanup(void *data, Rboolean jump) {
  (void)jump;
  Fir_StatsForce *force = data;
  bool is_marked = R_existsVarInFrame(force->env, Rsh_ReflectivelyAccessed);
  if (is_marked && !force->local_data->reflected) {
    force->local_data->reflected = true;
    Fir_stats.reflected++;
    if (force->global_data->may_reflect) {
      Fir_stats.reflected_may_reflect++;
    }
  }
  if (force->was_marked && !is_marked) {
    Rf_defineVar(Rsh_ReflectivelyAccessed, R_TrueValue, force->env);
  }
}

// To see whether the code reflects, remove the frame's reflection marker, run the code, and check
// whether GNU-R's `recordReflection` (or `Fir_reflective_load`/`_store`) bound it again. A
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

  if (local_data->elided || !Fir_stats_can_track_marker(env)
      || Rf_findVarInFrame(env, Rsh_ReflectivelyAccessed) == R_LogicalNAValue) {
    return eval(env, local_data->captures);
  }

  Fir_StatsForce force = {
    .eval = eval,
    .env = env,
    .global_data = global_data,
    .local_data = local_data,
    .was_marked = R_existsVarInFrame(env, Rsh_ReflectivelyAccessed),
  };
  if (force.was_marked) {
    R_removeVarFromFrame(Rsh_ReflectivelyAccessed, env);
  }
  SEXP cont = PROTECT(R_MakeUnwindCont());
  SEXP result = R_UnwindProtect(Fir_stats_force_body, &force, Fir_stats_force_cleanup, &force, cont);
  UNPROTECT(1);
  return result;
}
#endif

SEXP Fir_mk_promise(Rsh_code evalFromR, SEXP cp, void **captures, SEXP env, SEXP expr) {
  ASSERT(TYPEOF(env) == ENVSXP || env == R_NilValue, "Environment or elided expected for promise");
#ifdef FIR_STATS
  // Before the elided frame is replaced by its parent below.
  bool elided = Fir_stats_is_elided(env);
#endif
  // See `Fir_push_env`.
  if (env == Rsh_ElidedEnv) {
    env = ENCLOS(env);
  }

  SEXP data = PROTECT(Rf_allocVector(VECSXP, 3));
  SET_VECTOR_ELT(data, 0, expr);
  SET_VECTOR_ELT(data, 1, cp);
  SEXP local_data_sexp = Rf_allocVector(RAWSXP, sizeof(Fir_PromiseLocalData));
  SET_VECTOR_ELT(data, 2, local_data_sexp);
  *(Fir_PromiseLocalData *)STDVEC_DATAPTR(local_data_sexp) =
      (Fir_PromiseLocalData) {.captures = captures, .escaped = false};
#ifdef FIR_STATS
  Fir_PromiseGlobalData *global_data = (Fir_PromiseGlobalData*) STDVEC_DATAPTR(Fir_const(cp, 0));
  ((Fir_PromiseLocalData *)STDVEC_DATAPTR(local_data_sexp))->elided = elided;
  Fir_stats.created++;
  if (global_data->may_reflect) {
    Fir_stats.created_may_reflect++;
  }
  if (elided) {
    Fir_stats.elided++;
  }
#endif

  SEXP ext = PROTECT(R_MakeExternalPtr((void *)evalFromR, Rsh_CodeTag, data));
  SEXP promise = Rf_mkPROMISE(ext, env);
  UNPROTECT(2); // data + ext

  return promise;
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
static void Fir_handle_escape(Fir_PromiseGlobalData *global_data, Fir_PromiseLocalData *local_data) {
  if (!local_data->escaped) {
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

void Fir_check_promise_escaped(SEXP data) {
  Fir_PromiseGlobalData *global_data =
      (Fir_PromiseGlobalData*) STDVEC_DATAPTR(Fir_const(Fir_prom_cp(data), 0));
  Fir_handle_escape(global_data, Fir_prom_local(data));
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

static SEXP Fir_env_pushed_from_r = NULL;
static bool Fir_env_push_suppressed = false;

void Fir_set_env_pushed_from_r(SEXP env, SEXP* outer_env, bool* push_suppressed) {
  *outer_env = Fir_env_pushed_from_r;
  *push_suppressed = Fir_env_push_suppressed;
  Fir_env_pushed_from_r = env;
  Fir_env_push_suppressed = false;
}

void Fir_unset_env_pushed_from_r(SEXP outer_env, bool push_suppressed) {
  Fir_env_pushed_from_r = outer_env;
  Fir_env_push_suppressed = push_suppressed;
}

// ???: GNU-R expose methods to update R_GlobalContext->sysparent,
// if necessary (it may only when the env is pushed from R, `Fir_env_push_suppressed`)

// `Fir_pop_env` takes what the push returned instead of reading the globals: a non-local exit
// (`UseMethod`, a caught error) skips `Fir_unset_env_pushed_from_r`, so they can be stale at a pop.
//
// Every elided frame is the singleton `Rsh_ElidedEnv`, and its `ENCLOS` is the parent of the
// innermost one. The push saves the previous parent in `*saved` and the pop restores it, so a frame
// reads its own parent again after an elided callee returns. A promise, closure or real frame made
// in an elided frame has the parent instead: the frame has no bindings, and the singleton's parent
// changes. The push of such a real frame saves `Rsh_ElidedEnv`, and its pop restores it.
bool Fir_push_env(SEXP *env_ptr, Fir_MkEnvType type, SEXP *saved) {
  ASSERT(env_ptr && *env_ptr && TYPEOF(*env_ptr) == ENVSXP, "push_env requires a pointer to an environment");
  ASSERT(saved || type != FIR_MKENV_ELIDED, "elided push_env requires a slot to save the parent");
  if (saved) {
    *saved = NULL;
  }

  if (Fir_env_pushed_from_r == *env_ptr && !Fir_env_push_suppressed) {
    Fir_env_push_suppressed = true;
    return false;
  }

  if (type == FIR_MKENV_ELIDED) {
    // Nested in an elided frame, the parent stays: `Rsh_ElidedEnv` marks it.
    *saved = Rsh_ElidedEnv;
    if (*env_ptr != Rsh_ElidedEnv) {
      *saved = ENCLOS(Rsh_ElidedEnv);
      SET_ENCLOS(Rsh_ElidedEnv, *env_ptr);
      *env_ptr = Rsh_ElidedEnv;
    }
    PROTECT(*saved);
    return true;
  }

  SEXP parent = *env_ptr;
  if (parent == Rsh_ElidedEnv) {
    ASSERT(saved, "push_env in an elided frame requires a slot to save it");
    *saved = Rsh_ElidedEnv;
    parent = ENCLOS(Rsh_ElidedEnv);
  }
  SEXP new_env = Rf_NewEnvironment(R_NilValue, R_NilValue, parent);
  if (type == FIR_MKENV_NON_REFLECTIVE) {
    Rf_defineVar(Rsh_ReflectivelyAccessed, R_LogicalNAValue, new_env);
  }
  *env_ptr = new_env;
  PROTECT(*env_ptr);
  return true;
}

void Fir_pop_env(SEXP *env_ptr, bool pushed, SEXP saved) {
  ASSERT(env_ptr && *env_ptr && TYPEOF(*env_ptr) == ENVSXP, "pop_env requires a pointer to an environment");

  if (!pushed) {
    Fir_env_push_suppressed = false;
    return;
  }

  if (*env_ptr == Rsh_ElidedEnv) {
    UNPROTECT(1);
    if (saved != Rsh_ElidedEnv) {
      *env_ptr = ENCLOS(Rsh_ElidedEnv);
      // Before the first push, the parent is `R_NilValue`, which `SET_ENCLOS` rejects.
      SET_ENCLOS(Rsh_ElidedEnv, saved == R_NilValue ? R_EmptyEnv : saved);
    }
    return;
  }

  UNPROTECT(1);
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
  PROTECT(*env_ptr);
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
      Fir_handle_escape(global_data, local_data);
#ifdef FIR_STATS
      SEXP forced = Fir_stats_eval_promise(
          global_data->eval, PRENV(promise), R_ExternalPtrProtected(PRCODE(promise)));
#else
      SEXP forced = global_data->eval(PRENV(promise), local_data->captures);
#endif
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

SEXP Fir_from_r_arg(SEXP env, SEXP symbol) {
  // `applyClosure` binds a parameter whose argument is missing to a promise of its default, and
  // marks the binding. FIŘ code expects the missing argument and computes the default itself.
  R_varloc_t loc = R_findVarLocInFrame(env, symbol);
  if (!R_VARLOC_IS_NULL(loc) && MISSING(loc.cell)) {
    return R_MissingArg;
  }
  return Fir_safe_force(Rf_findVarInFrame(env, symbol));
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

/// R's error for an out-of-range `[[`.
///
/// A negative R subscript still differs: GNU-R reports "invalid negative subscript in get1index".
static void Fir_subscript_assert_in_bounds(SEXP vector, int index) {
  if (index < 0 || (R_xlen_t)index >= XLENGTH(vector)) {
    Rf_error("subscript out of bounds");
  }
}

int Fir_subscript_read_int(SEXP vector, int index) {
  Fir_subscript_assert_in_bounds(vector, index);
  return INTEGER(vector)[index];
}

double Fir_subscript_read_real(SEXP vector, int index) {
  Fir_subscript_assert_in_bounds(vector, index);
  return REAL(vector)[index];
}

Rboolean Fir_subscript_read_logical(SEXP vector, int index) {
  Fir_subscript_assert_in_bounds(vector, index);
  return (Rboolean)LOGICAL(vector)[index];
}

char* Fir_subscript_read_string(SEXP vector, int index) {
  Fir_subscript_assert_in_bounds(vector, index);
  return (char*)CHAR(STRING_ELT(vector, index));
}

int Fir_subscript_read_na_int(SEXP vector, int index) {
  return index >= 0 && (R_xlen_t)index < XLENGTH(vector) ? INTEGER(vector)[index] : NA_INTEGER;
}

double Fir_subscript_read_na_real(SEXP vector, int index) {
  return index >= 0 && (R_xlen_t)index < XLENGTH(vector) ? REAL(vector)[index] : NA_REAL;
}

Rboolean Fir_subscript_read_na_logical(SEXP vector, int index) {
  return index >= 0 && (R_xlen_t)index < XLENGTH(vector) ? (Rboolean)LOGICAL(vector)[index]
                                                         : (Rboolean)NA_LOGICAL;
}

/// `NULL` is how the generated code spells `NA_STRING` (see `Fir_subscript_read_string`).
char* Fir_subscript_read_na_string(SEXP vector, int index) {
  if (index < 0 || (R_xlen_t)index >= XLENGTH(vector)) return NULL;
  SEXP elt = STRING_ELT(vector, index);
  return elt == NA_STRING ? NULL : (char*)CHAR(elt);
}

SEXP Fir_subscript_write_int(SEXP vector, int index, int value) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  INTEGER(vector)[index] = value;
  return vector;
}

SEXP Fir_subscript_write_real(SEXP vector, int index, double value) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  REAL(vector)[index] = value;
  return vector;
}

SEXP Fir_subscript_write_logical(SEXP vector, int index, Rboolean value) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  LOGICAL(vector)[index] = value;
  return vector;
}

SEXP Fir_subscript_write_string(SEXP vector, int index, char* value) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  SET_STRING_ELT(vector, index, Rf_mkChar(value));
  return vector;
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
/// `force_dots` forces each element, as `evalList` does for a builtin. `nr_first` builds the first
/// cell with `CONS_NR`, which doesn't count a reference to its value.
static SEXP Fir_build_arglist(int argc, SEXP const *args, SEXP const *names, bool is_builtin,
                              bool force_dots, bool nr_first, int *protect_count) {
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
        SEXP node = PROTECT(Rf_cons(elem, R_NilValue));
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
      SEXP node = PROTECT(i == 0 && nr_first ? CONS_NR(arg, list) : Rf_cons(arg, list));
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
  SEXP arglist = Fir_build_arglist(argc, args, names, true, fun.eval % 10 == 1, nr_first, &protect_count);

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

SEXP Fir_call_builtin_values(int blt_idx, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names,
                             uint64_t values) {
  int protect_count = Fir_wrap_values(blt_idx, argc, args, names, values);
  SEXP result = Fir_call_primitive(blt_idx, call, env, argc, args, names, true, false);
  UNPROTECT(protect_count);
  return result;
}

SEXP Fir_call_base(SEXP symbol, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names) {
  return Fir_call_dynamic(Fir_base_function(symbol), call, env, argc, args, names);
}

SEXP Fir_call_dynamic(SEXP callee, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names) {
  switch (TYPEOF(callee)) {
    case BUILTINSXP:
    case SPECIALSXP:
      return Fir_call_primitive(PRIMOFFSET(callee), call, env, argc, args, names, false, false);
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
      SEXP arglist = Fir_build_arglist(argc, args, names, false, false, false, &protect_count);

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
  SEXP result =
    Fir_call_primitive(blt_idx, call, env, argc, setter_args, names, matched, !special);
  UNPROTECT(protect_count);
  return result;
}

SEXP Fir_call_setter(Fir_Setter *s, SEXP callee, SEXP call, SEXP env, int argc, SEXP *args,
                     SEXP *names) {
  if (!s->active || argc == 0 || (TYPEOF(callee) != SPECIALSXP && TYPEOF(callee) != BUILTINSXP) ||
      Fir_source_call(call, env) == NULL) {
    return Fir_call_dynamic(callee, call, env, argc, args, names);
  }
  return Fir_call_setter_primitive(s, PRIMOFFSET(callee), call, env, argc, args, names, false, 0);
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

// GNU-R bytecode's `DO_VECSUBASSIGN` fast path (`setElementFromScalar`) for `vec[[i]] <- v` and
// `vec[i] <- v`, where `vec` is the protocol's (unshared) value, an atomic vector without a class,
// and `i` and `v` are scalars without attributes. Returns whether it stored `v`. A special
// evaluates such an `i` and `v` (constant or not) to themselves; a promise falls through.
static bool Fir_subassign_scalar(SEXP vec, SEXP idx, SEXP v) {
  SEXPTYPE vt = TYPEOF(v);
  if ((TYPEOF(idx) != INTSXP && TYPEOF(idx) != REALSXP) ||
      (vt != INTSXP && vt != REALSXP && vt != LGLSXP) || OBJECT(vec) || ALTREP(vec) ||
      MAYBE_SHARED(vec) || ATTRIB(idx) != R_NilValue || XLENGTH(idx) != 1 ||
      ATTRIB(v) != R_NilValue || XLENGTH(v) != 1) {
    return false;
  }
  R_xlen_t i;
  if (TYPEOF(idx) == INTSXP && INTEGER(idx)[0] != NA_INTEGER) {
    i = INTEGER(idx)[0];
  } else if (TYPEOF(idx) == REALSXP && REAL(idx)[0] >= 1 && REAL(idx)[0] < R_XLEN_T_MAX) {
    i = (R_xlen_t)REAL(idx)[0];
  } else {
    return false;
  }
  if (i < 1 || i > XLENGTH(vec)) {
    return false;
  }
  i--;
  switch (TYPEOF(vec)) {
    case REALSXP:
      switch (TYPEOF(v)) {
        case REALSXP:
          REAL(vec)[i] = REAL(v)[0];
          return true;
        case INTSXP:
        case LGLSXP: {
          int iv = TYPEOF(v) == INTSXP ? INTEGER(v)[0] : LOGICAL(v)[0];
          REAL(vec)[i] = iv == NA_INTEGER ? NA_REAL : iv;
          return true;
        }
        default:
          return false;
      }
    case INTSXP:
      if (TYPEOF(v) != INTSXP) {
        return false;
      }
      INTEGER(vec)[i] = INTEGER(v)[0];
      return true;
    case LGLSXP:
      if (TYPEOF(v) != LGLSXP) {
        return false;
      }
      LOGICAL(vec)[i] = LOGICAL(v)[0];
      return true;
    default:
      return false;
  }
}

SEXP Fir_call_setter_builtin(Fir_Setter *s, int blt_idx, SEXP call, SEXP env, int argc, SEXP *args,
                             SEXP *names, uint64_t values) {
  static int subassign_idx = -2, subassign2_idx = -2;
  if (subassign_idx == -2) {
    subassign_idx = Fir_funtab_index("[<-");
    subassign2_idx = Fir_funtab_index("[[<-");
  }
  if (!s->active || argc == 0 || Fir_source_call(call, env) == NULL) {
    return Fir_call_builtin_values(blt_idx, call, env, argc, args, names, values);
  }
  // A static call has the arguments of the signature `(x, i, value, ...)`.
  if (argc == 3 && (blt_idx == subassign_idx || blt_idx == subassign2_idx) &&
      Fir_subassign_scalar(s->value, args[1], args[2])) {
    R_Visible = TRUE;
    return s->value;
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

void Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP env) {
  (void)stack_size;
  (void)stack_values;
  (void)env;

  Rf_error("FIŘ deoptimization triggered at pc=%d (unsupported)", pc);
}

bool Fir_assume_function(SEXP value, Fir_DispatchFn dispatch) {
  Fir_FunctionData *data = NULL;
  if (!Fir_is_compiled_closure(value, &data)) {
    return false;
  }

  return data->dispatch == dispatch;
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

bool Fir_assume_load_fun(SEXP symbol, SEXP env, Fir_DispatchFn dispatch, SEXP* found_ref) {
  SEXP found = Fir_load_fun_for_assume(symbol, env);
  Fir_FunctionData *data = NULL;
  if (found == NULL || !Fir_is_compiled_closure(found, &data) || data->dispatch != dispatch) {
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

bool Fir_assume_type(SEXP value, Fir_Type type) {
  return Fir_value_matches(value, type);
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

DEFINE_INTRINSIC(SEXP, checkFun, value_fx_impure_ret_value, SEXP value) {
  if (TYPEOF(value) != CLOSXP && TYPEOF(value) != BUILTINSXP &&
      TYPEOF(value) != SPECIALSXP) {
    Rf_error("attempt to apply non-function");
  }

  return R_NilValue;
}

DEFINE_INTRINSIC(SEXP, checkMissing, any_fx_impure_ret_value, SEXP value) {
  if (value == R_MissingArg) {
    Rf_error("argument is missing, with no default");
  }

  return R_NilValue;
}

DEFINE_INTRINSIC(SEXP, missing, any_fx_none_ret_vec1_logical, SEXP value) {
  return value == R_MissingArg ? R_TrueValue : R_FalseValue;
}

DEFINE_INTRINSIC(bool, missing, any_fx_none_ret_bool, SEXP value) {
  return value == R_MissingArg;
}

DEFINE_INTRINSIC(SEXP, toForSeq, value_fx_none_ret_value, SEXP value) {
  // TODO: idk what this should do. If the following works, this intrinsic should be removed.
  return value;
}

DEFINE_INTRINSIC(SEXP, toForSeq, vec_logical_fx_none_ret_vec_logical, SEXP value) {
  return value;
}

DEFINE_INTRINSIC(SEXP, toForSeq, vec_int_fx_none_ret_vec_int, SEXP value) {
  return value;
}

DEFINE_INTRINSIC(SEXP, toForSeq, vec_real_fx_none_ret_vec_real, SEXP value) {
  return value;
}

DEFINE_INTRINSIC(SEXP, toForSeq, vec_string_fx_none_ret_vec_string, SEXP value) {
  return value;
}

DEFINE_INTRINSIC(SEXP, setInvisible, fx_none_ret_value) {
  R_Visible = FALSE;
  return R_NilValue;
}

DEFINE_INTRINSIC(SEXP, setVisible, fx_none_ret_value) {
  R_Visible = TRUE;
  return R_NilValue;
}

DEFINE_INTRINSIC(bool, naToFalse, vec1_logical_fx_none_ret_bool, SEXP value) {
  // Compare the element, not the pointer: a `v1(L)` doesn't have to be one of R's
  // `R_TrueValue`/`R_FalseValue`/`R_LogicalNAValue` singletons (e.g. a generic builtin call
  // allocates a fresh `logical(1)`).
  return LOGICAL(value)[0] == TRUE;
}

DEFINE_INTRINSIC(bool, naToFalse, scalar_logical_fx_none_ret_bool, Rboolean value) {
  return value == TRUE;
}

// `&&` short-circuits on `FALSE` only, so its guard sends `NA` the other way.
DEFINE_INTRINSIC(bool, naToTrue, vec1_logical_fx_none_ret_bool, SEXP value) {
  // Compare the element, not the pointer, for the same reason as `naToFalse`.
  return LOGICAL(value)[0] != FALSE;
}

DEFINE_INTRINSIC(bool, naToTrue, scalar_logical_fx_none_ret_bool, Rboolean value) {
  return value != FALSE;
}

// === box ===
DEFINE_INTRINSIC(SEXP, box, scalar_logical_fx_none_ret_vec1_logical, Rboolean value) {
  return Rf_ScalarLogical(value);
}

DEFINE_INTRINSIC(SEXP, box, scalar_int_fx_none_ret_vec1_int, int value) {
  return Rf_ScalarInteger(value);
}

DEFINE_INTRINSIC(SEXP, box, scalar_real_fx_none_ret_vec1_real, double value) {
  return Rf_ScalarReal(value);
}

DEFINE_INTRINSIC(SEXP, box, scalar_string_fx_none_ret_vec1_string, char* value) {
  return value == NULL ? NA_STRING : Rf_ScalarString(Rf_mkChar(value));
}

// === unbox ===
DEFINE_INTRINSIC(Rboolean, unbox, vec1_logical_borrowed_fx_none_ret_scalar_logical, SEXP value) {
  return LOGICAL(value)[0];
}

DEFINE_INTRINSIC(int, unbox, vec1_int_borrowed_fx_none_ret_scalar_int, SEXP value) {
  return INTEGER(value)[0];
}

DEFINE_INTRINSIC(double, unbox, vec1_real_borrowed_fx_none_ret_scalar_real, SEXP value) {
  return REAL(value)[0];
}

DEFINE_INTRINSIC(char*, unbox, vec1_string_borrowed_fx_none_ret_scalar_string, SEXP value) {
  return STRING_ELT(value, 0) == NA_STRING ? NULL : (char*)CHAR(STRING_ELT(value, 0));
}

// === Vector operation helpers ===

// The scalar helpers follow GNU-R's `NA` rules (`arithmetic.c`, `relop.c`): an integer `NA` is
// `NA_INTEGER`, and integer overflow gives `NA` with a warning.

static double Fir_i2r(int a) {
  return a == NA_INTEGER ? NA_REAL : (double)a;
}

static int Fir_int_result(int64_t result) {
  if (result > INT_MAX || result <= INT_MIN) {
    Rf_warning("NAs produced by integer overflow");
    return NA_INTEGER;
  }
  return (int)result;
}

static int Fir_int_arith(int a, int b, char op) {
  if (a == NA_INTEGER || b == NA_INTEGER) return NA_INTEGER;
  int64_t x = a, y = b;
  return Fir_int_result(op == '+' ? x + y : op == '-' ? x - y : x * y);
}

#define FIR_CMP_INT(a, op, b) \
  ((a) == NA_INTEGER || (b) == NA_INTEGER ? NA_LOGICAL : (Rboolean)((a) op (b)))
#define FIR_CMP_REAL(a, op, b) \
  (ISNAN(a) || ISNAN(b) ? NA_LOGICAL : (Rboolean)((a) op (b)))
#define FIR_CMP_LGL(a, op, b) \
  ((a) == NA_LOGICAL || (b) == NA_LOGICAL ? NA_LOGICAL : (Rboolean)((a) op (b)))
// `NULL` is how the generated code spells `NA_STRING`. Compare contents, not pointers: the
// generated code passes string literals, which aren't the `CHARSXP` cache's strings.
#define FIR_CMP_STR(a, op, b) \
  ((a) == NULL || (b) == NULL ? NA_LOGICAL : (Rboolean)(strcmp((a), (b)) op 0))
#define FIR_STR_EQ(a, b) ((a) == (b) || ((a) != NULL && (b) != NULL && strcmp((a), (b)) == 0))

// === + ===
// I+I→I
DEFINE_OVERRIDDEN_BUILTIN(int, _u2b, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return Fir_int_arith(a, b, '+');
}
// R+R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a + b;
}
// I+R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return Fir_i2r(a) + b;
}
// R+I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a + Fir_i2r(b);
}
// +I→I (unary; `b` is the missing second argument)
DEFINE_OVERRIDDEN_BUILTIN(int, _u2b, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b) {
  return a;
}
// +R→R (unary)
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b) {
  return a;
}

// === - ===
// I-I→I
DEFINE_OVERRIDDEN_BUILTIN(int, _u2d, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return Fir_int_arith(a, b, '-');
}
// R-R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a - b;
}
// I-R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return Fir_i2r(a) - b;
}
// R-I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a - Fir_i2r(b);
}
// -I→I (unary; `b` is the missing second argument)
DEFINE_OVERRIDDEN_BUILTIN(int, _u2d, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b) {
  return a == NA_INTEGER ? NA_INTEGER : -a;
}
// -R→R (unary)
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b) {
  return -a;
}

// === * ===
// I*I→I
DEFINE_OVERRIDDEN_BUILTIN(int, _u2a, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return Fir_int_arith(a, b, '*');
}
// R*R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a * b;
}
// I*R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return Fir_i2r(a) * b;
}
// R*I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a * Fir_i2r(b);
}

// === / ===
// I/I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b) {
  return Fir_i2r(a) / Fir_i2r(b);
}
// R/R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a / b;
}
// I/R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return Fir_i2r(a) / b;
}
// R/I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a / Fir_i2r(b);
}

// === : ===
// I:I→v(I)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_int_fx_none_ret_vec_int, int a, int b) {
  return R_compact_intrange((R_xlen_t) a, (R_xlen_t) b);
}
// I:R→v(I)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_real_fx_none_ret_vec_int, int a, double b) {
  return R_compact_intrange((R_xlen_t) a, (R_xlen_t) b);
}
// R:R→V (may return int or real range)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_real_scalar_real_fx_none_ret_value, double a, double b) {
  double n1 = a;
  double n2 = b;
  if (n1 == (R_xlen_t) n1) {
      return R_compact_intrange((R_xlen_t) n1, (R_xlen_t) n2);
  }

  // Copied from GNU-R
  double r = fabs(n2 - n1);
  if (r >= R_XLEN_T_MAX) Rf_error("result would be too long a vector");
  R_xlen_t n = (R_xlen_t)(r + 1 + FLT_EPSILON);
  SEXP ans = allocVector(REALSXP, n);
  if (n1 <= n2) {
    for (R_xlen_t i = 0; i < n; i++)
      REAL(ans)[i] = n1 + (double)i;
  } else {
    for (R_xlen_t i = 0; i < n; i++)
      REAL(ans)[i] = n1 - (double)i;
  }
  return ans;
}

// === < ===
// I<I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, <, b);
}
// R<R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, <, b);
}
// I<R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return FIR_CMP_REAL(Fir_i2r(a), <, b);
}
// R<I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return FIR_CMP_REAL(a, <, Fir_i2r(b));
}

// I<I→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_int_scalar_int_fx_none_ret_bool, int a, int b) {
  return a < b;
}
// R<R→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_real_scalar_real_fx_none_ret_bool, double a, double b) {
  return a < b;
}
// I<R→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_int_scalar_real_fx_none_ret_bool, int a, double b) {
  return (double)a < b;
}
// R<I→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_real_scalar_int_fx_none_ret_bool, double a, int b) {
  return a < (double)b;
}

// === <= ===
// I<=I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, <=, b);
}
// R<=R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, <=, b);
}
// I<=R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return FIR_CMP_REAL(Fir_i2r(a), <=, b);
}
// R<=I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return FIR_CMP_REAL(a, <=, Fir_i2r(b));
}

// I<=I→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b) {
  return a <= b;
}
// R<=R→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b) {
  return a <= b;
}
// I<=R→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_bool, int a, double b) {
  return (double)a <= b;
}
// R<=I→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_bool, double a, int b) {
  return a <= (double)b;
}

// === == ===
// *,*→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, any_any_fx_none_ret_scalar_logical, SEXP a, SEXP b) {
  return a == b;
}
// L,L→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b) {
  return FIR_CMP_LGL(a, ==, b);
}
// I,I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, ==, b);
}
// R,R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, ==, b);
}
// S,S→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b) {
  return FIR_CMP_STR(a, ==, b);
}
// *,*→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, any_any_fx_none_ret_bool, SEXP a, SEXP b) {
  return a == b;
}
// L,L→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_logical_scalar_logical_fx_none_ret_bool, Rboolean a, Rboolean b) {
  return a == b;
}
// I,I→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b) {
  return a == b;
}
// R,R→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b) {
  return a == b;
}
// S,S→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_bool, char* a, char* b) {
  return FIR_STR_EQ(a, b);
}

// === log ===
// I,R→R
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_int_scalar_real_fx_none_ret_scalar_real, int value, double base) {
  return R_logbase(Fir_i2r(value), base);
}
// R,R→R
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_real_scalar_real_fx_none_ret_scalar_real, double value, double base) {
  return R_logbase(value, base);
}
// I,miss→R
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_int_missing_fx_none_ret_scalar_real, int value, SEXP base) {
  return R_log(Fir_i2r(value));
}
// R,miss→R
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_real_missing_fx_none_ret_scalar_real, double value, SEXP base) {
  return R_log(value);
}

// === abs ===
// I→I
DEFINE_OVERRIDDEN_BUILTIN(int, abs, scalar_int_fx_none_ret_scalar_int, int value) {
  return value == NA_INTEGER ? NA_INTEGER : value < 0 ? -value : value;
}
// R→R
DEFINE_OVERRIDDEN_BUILTIN(double, abs, scalar_real_fx_none_ret_scalar_real, double value) {
  return fabs(value);
}

static double Fir_sign(double value) {
  if (value > 0) {
    return 1.0;
  } else if (value < 0) {
    return -1.0;
  } else {
    return 0.0;
  }
}

// math1: v1=I→R, v2=R→R
#define V(name, func) \
  DEFINE_OVERRIDDEN_BUILTIN(double, name, scalar_int_fx_none_ret_scalar_real, int value) {\
    return func(Fir_i2r(value));\
  }\
  \
  DEFINE_OVERRIDDEN_BUILTIN(double, name, scalar_real_fx_none_ret_scalar_real, double value) {\
    return func(value);\
  }
DEFINE_MATH1_BUILTINS(V)
#undef V

DEFINE_OVERRIDDEN_BUILTIN(int, length, value_fx_none_ret_scalar_int, SEXP value) {
  // `Rf_length`, unlike `LENGTH`, handles environments, pairlists, and closures.
  return Rf_length(value);
}

// as.integer
DEFINE_OVERRIDDEN_BUILTIN(int, as_u2einteger, value_missing_fx_none_ret_scalar_int, SEXP value, SEXP missing) {
  return Rf_asInteger(value);
}

// as.logical
// V,miss→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, as_u2elogical, value_missing_fx_none_ret_scalar_logical, SEXP value, SEXP missing) {
  return Rf_asLogical(value);
}
// V,miss→B
// The condition of `if` and `while`: GNU-R's `asLogicalNoNA` (`eval.c`).
DEFINE_OVERRIDDEN_BUILTIN(bool, as_u2elogical, value_missing_fx_none_ret_bool, SEXP value, SEXP missing) {
  R_xlen_t length = Rf_xlength(value);
  if (length > 1) Rf_error("the condition has length > 1");
  int cond = NA_LOGICAL;
  if (length > 0) {
    switch (TYPEOF(value)) {
    case LGLSXP: cond = LOGICAL(value)[0]; break;
    case INTSXP: cond = INTEGER(value)[0]; break;
    default: cond = Rf_asLogical(value);
    }
  }
  if (cond == NA_LOGICAL) {
    Rf_error(length == 0 ? "argument is of length zero"
             : Rf_isLogical(value) ? "missing value where TRUE/FALSE needed"
             : "argument is not interpretable as logical");
  }
  return cond;
}
// L,miss→B
DEFINE_OVERRIDDEN_BUILTIN(bool, as_u2elogical, scalar_logical_missing_fx_none_ret_bool, Rboolean value, SEXP missing) {
  if (value == NA_LOGICAL) Rf_error("missing value where TRUE/FALSE needed");
  return value;
}

// as.character
DEFINE_OVERRIDDEN_BUILTIN(char*, as_u2echaracter, value_missing_fx_none_ret_scalar_string, SEXP value, SEXP missing) {
  return (char*)CHAR(Rf_asChar(value));
}

// inherits(x, what, which): V,S,B→B
// The scalar-bool return is only used when `which` is FALSE, so the result is
// simply whether `x` inherits from the single class named by `what`.
DEFINE_OVERRIDDEN_BUILTIN(bool, inherits, value_scalar_string_bool_fx_none_ret_bool, SEXP value, char* what, bool which) {
  (void)which;
  return (bool)Rf_inherits(value, what);
}

// === ^ ===
// I^I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b) {
  return R_pow(Fir_i2r(a), Fir_i2r(b));
}
// R^R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return R_pow(a, b);
}
// I^R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return R_pow(Fir_i2r(a), b);
}
// R^I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return R_pow(a, Fir_i2r(b));
}

// === > ===
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, >, b);
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, >, b);
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return FIR_CMP_REAL(Fir_i2r(a), >, b);
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return FIR_CMP_REAL(a, >, Fir_i2r(b));
}

// === >= ===
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, >=, b);
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, >=, b);
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return FIR_CMP_REAL(Fir_i2r(a), >=, b);
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return FIR_CMP_REAL(a, >=, Fir_i2r(b));
}

// === != ===
// *,*→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, any_any_fx_none_ret_scalar_logical, SEXP a, SEXP b) {
  return a != b;
}
// L,L→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b) {
  return FIR_CMP_LGL(a, !=, b);
}
// I,I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return FIR_CMP_INT(a, !=, b);
}
// R,R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return FIR_CMP_REAL(a, !=, b);
}
// S,S→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b) {
  return FIR_CMP_STR(a, !=, b);
}
// *,*→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, any_any_fx_none_ret_bool, SEXP a, SEXP b) {
  return a != b;
}
// L,L→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_logical_scalar_logical_fx_none_ret_bool, Rboolean a, Rboolean b) {
  return a != b;
}
// I,I→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b) {
  return a != b;
}
// R,R→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b) {
  return a != b;
}
// S,S→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_string_scalar_string_fx_none_ret_bool, char* a, char* b) {
  return !FIR_STR_EQ(a, b);
}

// === & === (bit-and on booleans)
DEFINE_OVERRIDDEN_BUILTIN(bool, _u26, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a && b;
}
// === && ===
DEFINE_OVERRIDDEN_BUILTIN(bool, _u26_u26, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a && b;
}
// === | ===
DEFINE_OVERRIDDEN_BUILTIN(bool, _u7c, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a || b;
}
// === || ===
DEFINE_OVERRIDDEN_BUILTIN(bool, _u7c_u7c, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a || b;
}
// === xor ===
DEFINE_OVERRIDDEN_BUILTIN(bool, xor, bool_bool_fx_none_ret_bool, bool a, bool b) {
  return a != b;
}

// === ! ===
// B→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21, bool_fx_none_ret_bool, bool a) {
  return !a;
}
// I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21, scalar_int_fx_none_ret_scalar_logical, int a) {
  if (a == NA_INTEGER) return NA_LOGICAL;
  return a == 0;
}
// R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21, scalar_real_fx_none_ret_scalar_logical, double a) {
  if (ISNAN(a)) return NA_LOGICAL;
  return a == 0.0;
}

// === bitwNot, bitwAnd, bitwOr, bitwXor, bitwShiftL, bitwShiftR ===
DEFINE_OVERRIDDEN_BUILTIN(int, bitwNot, scalar_int_fx_none_ret_scalar_int, int a) {
  return a == NA_INTEGER ? NA_INTEGER : ~a;
}
DEFINE_OVERRIDDEN_BUILTIN(int, bitwAnd, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return a == NA_INTEGER || b == NA_INTEGER ? NA_INTEGER : a & b;
}
DEFINE_OVERRIDDEN_BUILTIN(int, bitwOr, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return a == NA_INTEGER || b == NA_INTEGER ? NA_INTEGER : a | b;
}
DEFINE_OVERRIDDEN_BUILTIN(int, bitwXor, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return a == NA_INTEGER || b == NA_INTEGER ? NA_INTEGER : a ^ b;
}
// Shifts treat the value as unsigned; an out-of-range shift count yields NA.
DEFINE_OVERRIDDEN_BUILTIN(int, bitwShiftL, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int n) {
  return a == NA_INTEGER || n == NA_INTEGER || n < 0 || n > 31
      ? NA_INTEGER
      : (int)((unsigned int)a << n);
}
DEFINE_OVERRIDDEN_BUILTIN(int, bitwShiftR, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int n) {
  return a == NA_INTEGER || n == NA_INTEGER || n < 0 || n > 31
      ? NA_INTEGER
      : (int)((unsigned int)a >> n);
}

// === [ (scalar index read, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b, vec_logical_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return LOGICAL(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b, vec_int_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return INTEGER(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b, vec_real_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return REAL(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b, vec_string_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP elt = STRING_ELT(x, i - 1);
  return elt == NA_STRING ? NULL : (char*)CHAR(elt);
}

// === [[ (scalar index read, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b_u5b, vec_logical_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return LOGICAL(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b_u5b, vec_int_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return INTEGER(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b_u5b, vec_real_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return REAL(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b_u5b, vec_string_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP elt = STRING_ELT(x, i - 1);
  return elt == NA_STRING ? NULL : (char*)CHAR(elt);
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
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_scalar_int_scalar_logical_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value) {
  return Fir_subassign_logical(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_scalar_int_scalar_logical_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value) {
  return Fir_subassign_logical(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_scalar_int_scalar_int_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value) {
  return Fir_subassign_int(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_scalar_int_scalar_int_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value) {
  return Fir_subassign_int(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_scalar_int_scalar_real_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value) {
  return Fir_subassign_real(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_scalar_int_scalar_real_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value) {
  return Fir_subassign_real(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_scalar_int_scalar_string_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value) {
  return Fir_subassign_string(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_scalar_int_scalar_string_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value) {
  return Fir_subassign_string(x, i, value, true);
}

/// GNU-R's real-to-integer subscript coercion: truncate toward zero, and anything that doesn't fit
/// (including `NA`/`NaN`) becomes `NA`, which then reads as `NA` or fails like any out-of-range one.
static int Fir_index_from_real(double index) {
  return ISNAN(index) || index <= (double)INT_MIN || index > (double)INT_MAX
      ? NA_INTEGER
      : (int)index;
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
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_vec_int_vec_logical_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_subassign_vector_logical(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_vec_int_vec_logical_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_subassign_vector_logical(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_vec_int_vec_int_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_subassign_vector_int(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_vec_int_vec_int_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_subassign_vector_int(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_vec_int_vec_real_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_subassign_vector_real(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_vec_int_vec_real_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_subassign_vector_real(x, i, value, true);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_vec_int_vec_string_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_subassign_vector_string(x, i, value, false);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_vec_int_vec_string_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_subassign_vector_string(x, i, value, true);
}

// === real subscripts (coerce and forward) ===
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b, vec_logical_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_logical, SEXP x, double i, SEXP ddd, SEXP drop) {
  return Fir_ver_call__u5b_vec_logical_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_logical(env, x, Fir_index_from_real(i), ddd, drop);
}
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b, vec_int_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_int, SEXP x, double i, SEXP ddd, SEXP drop) {
  return Fir_ver_call__u5b_vec_int_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_int(env, x, Fir_index_from_real(i), ddd, drop);
}
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b, vec_real_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_real, SEXP x, double i, SEXP ddd, SEXP drop) {
  return Fir_ver_call__u5b_vec_real_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_real(env, x, Fir_index_from_real(i), ddd, drop);
}
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b, vec_string_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_string, SEXP x, double i, SEXP ddd, SEXP drop) {
  return Fir_ver_call__u5b_vec_string_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_string(env, x, Fir_index_from_real(i), ddd, drop);
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b_u5b, vec_logical_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_logical, SEXP x, double i, SEXP ddd, SEXP exact) {
  return Fir_ver_call__u5b_u5b_vec_logical_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_logical(env, x, Fir_index_from_real(i), ddd, exact);
}
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b_u5b, vec_int_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_int, SEXP x, double i, SEXP ddd, SEXP exact) {
  return Fir_ver_call__u5b_u5b_vec_int_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_int(env, x, Fir_index_from_real(i), ddd, exact);
}
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b_u5b, vec_real_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_real, SEXP x, double i, SEXP ddd, SEXP exact) {
  return Fir_ver_call__u5b_u5b_vec_real_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_real(env, x, Fir_index_from_real(i), ddd, exact);
}
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b_u5b, vec_string_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_string, SEXP x, double i, SEXP ddd, SEXP exact) {
  return Fir_ver_call__u5b_u5b_vec_string_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_string(env, x, Fir_index_from_real(i), ddd, exact);
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
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_scalar_real_scalar_logical_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_logical_borrowed_scalar_int_scalar_logical_fx_impure_ret_vec_logical_fresh(env, x, Fir_index_from_real(i), value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_vec_real_vec_logical_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_logical_borrowed_vec_int_vec_logical_fx_impure_ret_vec_logical_fresh(env, x, i, value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_scalar_real_scalar_logical_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_logical_owned_scalar_int_scalar_logical_fx_impure_ret_vec_logical_fresh(env, x, Fir_index_from_real(i), value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_vec_real_vec_logical_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_logical_owned_vec_int_vec_logical_fx_impure_ret_vec_logical_fresh(env, x, i, value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_scalar_real_scalar_int_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_int_borrowed_scalar_int_scalar_int_fx_impure_ret_vec_int_fresh(env, x, Fir_index_from_real(i), value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_vec_real_vec_int_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_int_borrowed_vec_int_vec_int_fx_impure_ret_vec_int_fresh(env, x, i, value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_scalar_real_scalar_int_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_int_owned_scalar_int_scalar_int_fx_impure_ret_vec_int_fresh(env, x, Fir_index_from_real(i), value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_vec_real_vec_int_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_int_owned_vec_int_vec_int_fx_impure_ret_vec_int_fresh(env, x, i, value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_scalar_real_scalar_real_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_real_borrowed_scalar_int_scalar_real_fx_impure_ret_vec_real_fresh(env, x, Fir_index_from_real(i), value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_vec_real_vec_real_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_real_borrowed_vec_int_vec_real_fx_impure_ret_vec_real_fresh(env, x, i, value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_scalar_real_scalar_real_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_real_owned_scalar_int_scalar_real_fx_impure_ret_vec_real_fresh(env, x, Fir_index_from_real(i), value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_vec_real_vec_real_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_real_owned_vec_int_vec_real_fx_impure_ret_vec_real_fresh(env, x, i, value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_scalar_real_scalar_string_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_string_borrowed_scalar_int_scalar_string_fx_impure_ret_vec_string_fresh(env, x, Fir_index_from_real(i), value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_vec_real_vec_string_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_string_borrowed_vec_int_vec_string_fx_impure_ret_vec_string_fresh(env, x, i, value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_scalar_real_scalar_string_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_string_owned_scalar_int_scalar_string_fx_impure_ret_vec_string_fresh(env, x, Fir_index_from_real(i), value);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_vec_real_vec_string_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value) {
  return Fir_ver_call__u5b_u5b_u3c_u2d_vec_string_owned_vec_int_vec_string_fx_impure_ret_vec_string_fresh(env, x, i, value);
}

// === as.integer(x) (real overloads) ===
DEFINE_OVERRIDDEN_BUILTIN(int, as_u2einteger, scalar_real_missing_fx_none_ret_scalar_int, double x, SEXP ddd) {
  (void)ddd;
  return Fir_index_from_real(x);
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, as_u2einteger, vec1_real_missing_fx_none_ret_vec1_int, SEXP x, SEXP ddd) {
  (void)ddd;
  return Rf_ScalarInteger(Fir_index_from_real(REAL(x)[0]));
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, as_u2einteger, vec_real_missing_fx_none_ret_vec_int, SEXP x, SEXP ddd) {
  (void)ddd;
  R_xlen_t count = XLENGTH(x);
  SEXP res = PROTECT(Rf_allocVector(INTSXP, count));
  for (R_xlen_t k = 0; k < count; k++) INTEGER(res)[k] = Fir_index_from_real(REAL(x)[k]);
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
// v(L)→I: treat logicals as 0/1 (NA_LOGICAL == NA_INTEGER)
DEFINE_OVERRIDDEN_BUILTIN(int, sum, vec_logical_missing_fx_none_ret_scalar_int, SEXP x, SEXP naRm) {
  (void)naRm;
  int acc = 0;
  R_xlen_t len = XLENGTH(x);
  for (R_xlen_t k = 0; k < len; k++) {
    int v = LOGICAL(x)[k];
    if (v == NA_LOGICAL) return NA_INTEGER;
    acc += v;
  }
  return acc;
}
// v(I)→I
DEFINE_OVERRIDDEN_BUILTIN(int, sum, vec_int_missing_fx_none_ret_scalar_int, SEXP x, SEXP naRm) {
  (void)naRm;
  int acc = 0;
  R_xlen_t len = XLENGTH(x);
  for (R_xlen_t k = 0; k < len; k++) {
    int v = INTEGER(x)[k];
    if (v == NA_INTEGER) return NA_INTEGER;
    acc += v;
  }
  return acc;
}
// v(R)→R
DEFINE_OVERRIDDEN_BUILTIN(double, sum, vec_real_missing_fx_none_ret_scalar_real, SEXP x, SEXP naRm) {
  (void)naRm;
  double acc = 0.0;
  R_xlen_t len = XLENGTH(x);
  for (R_xlen_t k = 0; k < len; k++) acc += REAL(x)[k];
  return acc;
}

// === is.X(x): V→B ===
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2enumeric, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == REALSXP
      || (TYPEOF(value) == INTSXP && !Rf_inherits(value, "factor"));
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2einteger, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == INTSXP && !Rf_inherits(value, "factor");
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2edouble, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == REALSXP;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2elogical, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == LGLSXP;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2enull, value_fx_none_ret_bool, SEXP value) {
  return value == R_NilValue;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2ecomplex, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == CPLXSXP;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2eraw, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == RAWSXP;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2efunction, value_fx_none_ret_bool, SEXP value) {
  SEXPTYPE t = TYPEOF(value);
  return t == CLOSXP || t == BUILTINSXP || t == SPECIALSXP;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2eenvironment, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == ENVSXP;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2elist, value_fx_none_ret_bool, SEXP value) {
  SEXPTYPE t = TYPEOF(value);
  return t == VECSXP || t == LISTSXP;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2echaracter, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == STRSXP;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2eobject, value_fx_none_ret_bool, SEXP value) {
  return OBJECT(value) != 0;
}
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2esymbol, value_fx_none_ret_bool, SEXP value) {
  return TYPEOF(value) == SYMSXP;
}
