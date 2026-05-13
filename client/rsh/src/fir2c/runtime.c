#include "runtime.h"
#include "print_sexp.h"

#include <assert.h>
#include <R_ext/Boolean.h>
#include <R_ext/Error.h>

#define ASSERT(x, msg, ...) if (!(x)) Rf_error("FIŘ internal assertion failed:\n  `" #x "`\n  " msg, ##__VA_ARGS__)

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

static void Fir_assert_symbol(SEXP sym, const char *what) {
  ASSERT(
    TYPEOF(sym) == SYMSXP,
    "Expected a symbol for %s",
    what
  );
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
  SEXP body = PREXPR(value);
  if (TYPEOF(body) != EXTPTRSXP || !IS_RSH_CODE(body)) {
    return false;
  }
  SEXP data = R_ExternalPtrProtected(body);
  SEXP cp = CAR0(data);
  ASSERT(Fir_const(cp, 0) != R_NilValue, "Promise data not set");
  *global_data = (Fir_PromiseGlobalData*) STDVEC_DATAPTR(Fir_const(cp, 0));
  *local_data = (Fir_PromiseLocalData*) STDVEC_DATAPTR(CDR(data));
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
    return TYPEOF(value) == DOTSXP || value == R_MissingArg;
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

  SEXP ext = PROTECT(R_MakeExternalPtr((void *)dispatchFromR, Rsh_CodeTag, cp));
  SEXP closure = PROTECT(Rf_mkCLOSXP(formals, ext, env));
  UNPROTECT(2); // body + closure

  return closure;
}

SEXP Fir_mk_promise(Rsh_code evalFromR, SEXP cp, void **captures, SEXP env) {
  ASSERT(TYPEOF(env) == ENVSXP || env == R_NilValue, "Environment or elided expected for promise");

  SEXP local_data_sexp = PROTECT(Rf_allocVector(RAWSXP, sizeof(Fir_PromiseLocalData)));
  Fir_PromiseLocalData *local_data = STDVEC_DATAPTR(local_data_sexp);
  *local_data = (Fir_PromiseLocalData) {.captures = captures};

  SEXP data = PROTECT(Rf_cons(cp, local_data_sexp));

  SEXP ext = PROTECT(R_MakeExternalPtr((void *)evalFromR, Rsh_CodeTag, data));
  SEXP promise = PROTECT(Rf_mkPROMISE(ext, env));
  UNPROTECT(4); // local_data_sexp + data + ext + promise

  return promise;
}

SEXP Fir_cast(SEXP value, Fir_Type type) {
  ASSERT(Fir_value_matches(value, type), "Cast failed");
  return value;
}

SEXP Fir_dup(SEXP value) { return Rf_duplicate(value); }

SEXP Fir_load(SEXP symbol, SEXP env) {
  Fir_assert_symbol(symbol, "load");
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for load");
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

SEXP Fir_load_dots(int index, SEXP env) {
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for load_dots");
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

void Fir_push_env(SEXP *env_ptr) {
  ASSERT(env_ptr && *env_ptr && TYPEOF(*env_ptr) == ENVSXP, "push_env requires a pointer to an environment");

  if (Fir_env_pushed_from_r == *env_ptr && !Fir_env_push_suppressed) {
    Fir_env_push_suppressed = true;
    return;
  }

  SEXP new_env = Rf_NewEnvironment(R_NilValue, R_NilValue, *env_ptr);
  *env_ptr = new_env;
  PROTECT(*env_ptr);
}

void Fir_pop_env(SEXP *env_ptr) {
  ASSERT(env_ptr && *env_ptr && TYPEOF(*env_ptr) == ENVSXP, "pop_env requires a pointer to an environment");

  if (Fir_env_pushed_from_r == *env_ptr && Fir_env_push_suppressed) {
    Fir_env_push_suppressed = false;
    return;
  }

  UNPROTECT(1);
  SEXP parent = ENCLOS(*env_ptr);
  ASSERT(parent && parent != R_NilValue, "pop_env called on environment without parent");
  *env_ptr = parent;
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
      SEXP forced = global_data->eval(PRENV(promise), local_data->captures);
      SET_PRVALUE(promise, forced);
      SET_PRENV(promise, R_NilValue);
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

  // Could not force
  return valueOrPromise;
}

SEXP Fir_reflective_load(SEXP promise, SEXP symbol) {
  Fir_assert_symbol(symbol, "reflective_load symbol");
  ASSERT(TYPEOF(promise) == PROMSXP, "reflective_load requires a promise");

  SEXP value = Rf_findVarInFrame(PRENV(promise), symbol);
  ASSERT(value != R_UnboundValue, "Variable not bound in promise environment");

  return value;
}

SEXP Fir_reflective_store(SEXP promise, SEXP symbol, SEXP value) {
  Fir_assert_symbol(symbol, "reflective_store symbol");
  ASSERT(TYPEOF(promise) == PROMSXP, "reflective_store requires a promise");

  Rf_defineVar(symbol, value, PRENV(promise));

  return value;
}

int Fir_subscript_read_int(SEXP vector, int index) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  return INTEGER(vector)[index];
}

double Fir_subscript_read_real(SEXP vector, int index) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  return REAL(vector)[index];
}

Rboolean Fir_subscript_read_logical(SEXP vector, int index) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  return (Rboolean)LOGICAL(vector)[index];
}

char* Fir_subscript_read_string(SEXP vector, int index) {
  ASSERT(index >= 0 && (R_xlen_t)index < XLENGTH(vector), "Subscript index out of bounds");
  return (char*)CHAR(STRING_ELT(vector, index));
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

    if (existing != R_UnboundValue || parent == R_GlobalEnv) {
      Rf_defineVar(symbol, value, parent);
      return;
    }

    parent = ENCLOS(parent);
  }

  ASSERT(false, "super_store could not locate variable in parents, and skipped global env");
}

static SEXP Fir_build_arglist(int argc, SEXP const *args, SEXP const *names, bool is_builtin,
                              int *protect_count) {
  SEXP list = R_NilValue;
  for (int i = argc - 1; i >= 0; --i) {
    SEXP arg = args[i];
    SEXP name = names[i];

    if (name == R_DotsSymbol) {
      // Splice dots argument (missing value = empty dots)
      if (arg != R_MissingArg) {
        list = Rf_listAppend(list, arg);
      }
    } else {
      SEXP node = PROTECT(Rf_cons(arg, list));
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

SEXP Fir_call_builtin(int bltIdx, SEXP env, int argc, SEXP *args, SEXP *names) {
  FUNTAB fun = R_FunTab[bltIdx];

  ASSERT(
    fun.arity == -1 || fun.arity == argc ||
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

    for (int i = 0; i < argc; i++) {
      if (args[i] != R_MissingArg) {
        continue;
      }

      // If all remaining arguments are missing, ignore them.
      // FIR requires all arguments of a static call to be present and matched.
      // This means we must append explicitly missing arguments where R would not.
      // Although we may get this code from R code with explicitly missing trailing arguments,
      // since the expected behavior calls `Rf_Error`,
      // it's an edge-case we probably don't need to handle.
      bool missing_tail = true;
      for (int j = i + 1; j < argc; j++) {
        if (args[j] != R_MissingArg) {
          missing_tail = false;
          break;
        }
      }
      if (missing_tail) {
        argc = i;
        break;
      }

      Rf_error("argument %d is missing", i + 1);
    }
  }

  int visibility = (bltIdx / 100) % 10;
  R_Visible = (Rboolean)(visibility != 1);

  int protect_count = 0;
  SEXP arglist = Fir_build_arglist(argc, args, names, true, &protect_count);

  SEXP op = R_Primitive(fun.name);
  if (op == R_NilValue) {
    // `fun` is an `.Internal`.
    // Idk what this should be, since `R_Primitive` returns `R_NilValue`,
    // but for some internals `op` must be a builtin or special with "correct" arity,
    // because arity is checked for some reason.
    // `if` is the first primitive and has arbitrary arity, so hopefully it's OK.
    op = R_Primitive("if");
  }

  SEXP call = PROTECT(Rf_lcons(op, arglist));
  protect_count++;

  SEXP result = fun.cfun(call, op, arglist, env);

  UNPROTECT(protect_count);

  if (visibility < 2) {
    R_Visible = (Rboolean)(visibility != 1);
  }

  return result;
}

SEXP Fir_call_dynamic(SEXP callee, SEXP env, int argc, SEXP *args, SEXP *names) {
  switch (TYPEOF(callee)) {
    case BUILTINSXP:
    case SPECIALSXP:
      return Fir_call_builtin(PRIMOFFSET(callee), env, argc, args, names);
    case CLOSXP: {
      // Try to fastcase compiled closures.
      Fir_FunctionData *data = NULL;
      // Currently, we don't fastcase 16+ arguments,
      // because we need some limit to implement the variadic call.
      if (Fir_is_compiled_closure(callee, &data) && argc < 16) {
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
            case 0: return data->dispatch(env, any_signature);
            case 1: return data->dispatch(env, any_signature, args[0]);
            case 2: return data->dispatch(env, any_signature, args[0], args[1]);
            case 3: return data->dispatch(env, any_signature, args[0], args[1], args[2]);
            case 4: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3]);
            case 5: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4]);
            case 6: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5]);
            case 7: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6]);
            case 8: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7]);
            case 9: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8]);
            case 10: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9]);
            case 11: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10]);
            case 12: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10], args[11]);
            case 13: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10], args[11], args[12]);
            case 14: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10], args[11], args[12], args[13]);
            case 15: return data->dispatch(env, any_signature, args[0], args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10], args[11], args[12], args[13], args[14]);
            default: assert(false);
          }
        }
      }

      int protect_count = 0;
      SEXP arglist = Fir_build_arglist(argc, args, names, false, &protect_count);

      SEXP call = PROTECT(Rf_lcons(callee, arglist));
      protect_count++;

      SEXP result = Rf_applyClosure(call, callee, arglist, env, R_NilValue, TRUE);

      UNPROTECT(protect_count);
      return result;
    }
    default:
      Rf_error("Unsupported callee type");
  }
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

bool Fir_assume_builtin_function(SEXP value, int bltIdx) {
  if (TYPEOF(value) != BUILTINSXP && TYPEOF(value) != SPECIALSXP) {
    return false;
  }

  return PRIMOFFSET(value) == bltIdx;
}

static SEXP Fir_load_fun_for_assume(SEXP symbol, SEXP env) {
  Fir_assert_symbol(symbol, "assume_load_fun");
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for assume_load_fun");

  // `Rf_findFun`,
  // but returns `NULL` when it encounters a promise (instead of forcing
  // or on lookup fail (instead of `Rf_error`)
  while (env != R_EmptyEnv) {
    SEXP vl = R_findVarInFrame(env, symbol);
    if (vl != R_UnboundValue) {
      if (TYPEOF(vl) == PROMSXP) {
        if (PROMISE_IS_EVALUATED(vl))
          vl = PRVALUE(vl);
        else
          return NULL; // fail instead of forcing
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

bool Fir_assume_load_fun(SEXP symbol, SEXP env, Fir_DispatchFn dispatch) {
  SEXP found = Fir_load_fun_for_assume(symbol, env);
  if (found == NULL) {
    return false;
  }

  Fir_FunctionData *data = NULL;
  return Fir_is_compiled_closure(found, &data)
    && data->dispatch == dispatch;
}

bool Fir_assume_load_builtin_fun(SEXP symbol, SEXP env, int bltIdx) {
  SEXP found = Fir_load_fun_for_assume(symbol, env);
  if (found == NULL) {
    return false;
  }

  return PRIMOFFSET(found) == bltIdx;
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

DEFINE_INTRINSIC(SEXP, checkMissing, value_fx_impure_ret_value, SEXP value) {
  if (value == R_MissingArg) {
    Rf_error("argument is missing, with no default");
  }

  return R_NilValue;
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
  return value == R_TrueValue;
}

DEFINE_INTRINSIC(bool, naToFalse, scalar_logical_fx_none_ret_bool, Rboolean value) {
  return value == TRUE;
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
  return value == NA_STRING ? NULL : (char*)CHAR(STRING_ELT(value, 0));
}

// === Vector operation helpers ===

// === + ===
// I+I→I
DEFINE_OVERRIDDEN_BUILTIN(int, _u2b, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return a + b;
}
// R+R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a + b;
}
// I+R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return a + b;
}
// R+I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a + b;
}

// === - ===
// I-I→I
DEFINE_OVERRIDDEN_BUILTIN(int, _u2d, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return a - b;
}
// R-R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a - b;
}
// I-R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return a - b;
}
// R-I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a - b;
}

// === * ===
// I*I→I
DEFINE_OVERRIDDEN_BUILTIN(int, _u2a, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b) {
  return a * b;
}
// R*R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a * b;
}
// I*R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return a * b;
}
// R*I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a * b;
}

// === / ===
// I/I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b) {
  return (double)a / (double)b;
}
// R/R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return a / b;
}
// I/R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return a / b;
}
// R/I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return a / b;
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
  return a < b;
}
// R<R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return a < b;
}
// I<R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return (double)a < b;
}
// R<I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return a < (double)b;
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
  return a <= b;
}
// R<=R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return a <= b;
}
// I<=R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return (double)a <= b;
}
// R<=I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return a <= (double)b;
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
  return a == b;
}
// I,I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return a == b;
}
// R,R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return a == b;
}
// S,S→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b) {
  return a == b;
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
  return a == b;
}

// === log ===
// I,R→R
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_int_scalar_real_fx_none_ret_scalar_real, int value, double base) {
  return R_logbase((double)value, base);
}
// R,R→R
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_real_scalar_real_fx_none_ret_scalar_real, double value, double base) {
  return R_logbase(value, base);
}

// === abs ===
// I→I
DEFINE_OVERRIDDEN_BUILTIN(int, abs, scalar_int_fx_none_ret_scalar_int, int value) {
  return value < 0 ? -value : value;
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
    return func((double)value);\
  }\
  \
  DEFINE_OVERRIDDEN_BUILTIN(double, name, scalar_real_fx_none_ret_scalar_real, double value) {\
    return func(value);\
  }
DEFINE_MATH1_BUILTINS(V)
#undef V

DEFINE_OVERRIDDEN_BUILTIN(int, length, value_fx_none_ret_scalar_int, SEXP value) {
  return LENGTH(value);
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
DEFINE_OVERRIDDEN_BUILTIN(bool, as_u2elogical, value_missing_fx_none_ret_bool, SEXP value, SEXP missing) {
  // TODO: error on NA
  return Rf_asLogical(value);
}
// L,miss→B
DEFINE_OVERRIDDEN_BUILTIN(bool, as_u2elogical, scalar_logical_missing_fx_none_ret_bool, Rboolean value, SEXP missing) {
  // TODO: error on NA
  return (bool) value;
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
  return R_pow((double)a, (double)b);
}
// R^R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b) {
  return R_pow(a, b);
}
// I^R→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b) {
  return R_pow((double)a, b);
}
// R^I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b) {
  return R_pow(a, (double)b);
}

// === > ===
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return a > b;
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return a > b;
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return (double)a > b;
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return a > (double)b;
}

// === >= ===
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return a >= b;
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return a >= b;
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b) {
  return (double)a >= b;
}
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b) {
  return a >= (double)b;
}

// === != ===
// *,*→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, any_any_fx_none_ret_scalar_logical, SEXP a, SEXP b) {
  return a != b;
}
// L,L→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b) {
  return a != b;
}
// I,I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b) {
  return a != b;
}
// R,R→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b) {
  return a != b;
}
// S,S→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b) {
  return a != b;
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
  return a != b;
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

// === [ (scalar index read, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b, vec_logical_scalar_int_missing_missing_fx_none_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return LOGICAL(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b, vec_int_scalar_int_missing_missing_fx_none_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return INTEGER(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b, vec_real_scalar_int_missing_missing_fx_none_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return REAL(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b, vec_string_scalar_int_missing_missing_fx_none_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP drop) {
  (void)ddd; (void)drop;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP elt = STRING_ELT(x, i - 1);
  return elt == NA_STRING ? NULL : (char*)CHAR(elt);
}

// === [[ (scalar index read, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b_u5b, vec_logical_scalar_int_missing_missing_fx_none_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return LOGICAL(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b_u5b, vec_int_scalar_int_missing_missing_fx_none_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return INTEGER(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b_u5b, vec_real_scalar_int_missing_missing_fx_none_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  return REAL(x)[i - 1];
}
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b_u5b, vec_string_scalar_int_missing_missing_fx_none_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP exact) {
  (void)ddd; (void)exact;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP elt = STRING_ELT(x, i - 1);
  return elt == NA_STRING ? NULL : (char*)CHAR(elt);
}

// === [<- (scalar index write, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_scalar_int_scalar_logical_missing_fx_none_ret_vec_logical, SEXP x, int i, Rboolean value, SEXP ddd) {
  (void)ddd;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  LOGICAL(x)[i - 1] = value;
  return x;
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_scalar_int_scalar_int_missing_fx_none_ret_vec_int, SEXP x, int i, int value, SEXP ddd) {
  (void)ddd;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  INTEGER(x)[i - 1] = value;
  return x;
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_scalar_int_scalar_real_missing_fx_none_ret_vec_real, SEXP x, int i, double value, SEXP ddd) {
  (void)ddd;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  REAL(x)[i - 1] = value;
  return x;
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_scalar_int_scalar_string_missing_fx_none_ret_vec_string, SEXP x, int i, char* value, SEXP ddd) {
  (void)ddd;
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP chr = value == NULL ? NA_STRING : Rf_mkChar(value);
  SET_STRING_ELT(x, i - 1, chr);
  return x;
}

// === [[<- (scalar index write, 1-based) ===
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_scalar_int_scalar_logical_fx_none_ret_vec_logical, SEXP x, int i, Rboolean value) {
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  LOGICAL(x)[i - 1] = value;
  return x;
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_scalar_int_scalar_int_fx_none_ret_vec_int, SEXP x, int i, int value) {
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  INTEGER(x)[i - 1] = value;
  return x;
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_scalar_int_scalar_real_fx_none_ret_vec_real, SEXP x, int i, double value) {
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  REAL(x)[i - 1] = value;
  return x;
}
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_scalar_int_scalar_string_fx_none_ret_vec_string, SEXP x, int i, char* value) {
  ASSERT(i >= 1 && (R_xlen_t)i <= XLENGTH(x), "subscript out of bounds");
  SEXP chr = value == NULL ? NA_STRING : Rf_mkChar(value);
  SET_STRING_ELT(x, i - 1, chr);
  return x;
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
