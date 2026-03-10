#include "runtime.h"
#include "print_sexp.h"

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

Fir_Kind Fir_kind_primitive_scalar(Fir_PrimitiveKind primitive_kind) {
  return PRIMITIVE_SCALAR_KINDS[primitive_kind];
}

Fir_Kind Fir_kind_primitive_vector(Fir_PrimitiveKind primitive_kind) {
  return PRIMITIVE_VECTOR_KINDS[primitive_kind];
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
  ASSERT(Rsh_const(cp, 0) != R_NilValue, "Closure data not set");
  *data = (Fir_FunctionData*) STDVEC_DATAPTR(Rsh_const(cp, 0));
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
  ASSERT(Rsh_const(cp, 0) != R_NilValue, "Promise data not set");
  *global_data = (Fir_PromiseGlobalData*) STDVEC_DATAPTR(Rsh_const(cp, 0));
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
    // PrimitiveScalar is NOT a subtype of PrimitiveVector (different repr)
    return this_kind.tag == FIR_KIND_PRIMITIVE_VECTOR
        && this_kind.as.primitive.primitive == other_primitive;
  }
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

SEXP Fir_mk_promise(Rsh_code evalFromR, SEXP cp, SEXP **captures, SEXP env) {
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

SEXP Fir_load_dots(int ddIndex, SEXP env) {
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for load");
  return Rf_ddfind(ddIndex, env);
}

SEXP Fir_load_fun(Fir_LoadFun env_selector, SEXP symbol, SEXP env) {
  Fir_assert_symbol(symbol, "load_fun");
  switch (env_selector) {
  case FIR_LOADFUN_LOCAL:
    return Rf_findFun(symbol, env);
  case FIR_LOADFUN_GLOBAL:
    return Rf_findFun(symbol, R_GlobalEnv);
  case FIR_LOADFUN_BASE:
    return Rf_findFun(symbol, R_BaseEnv);
  default:
    Rf_error("Invalid environment selector for load_fun");
  }
}

void Fir_store(SEXP symbol, SEXP value, SEXP env) {
  Fir_assert_symbol(symbol, "store");
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for store");
  Rf_defineVar(symbol, value, env);
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

SEXP Fir_mk_vector(Fir_Kind kind, int count, SEXP const *values, SEXP const *names) {
  switch (kind.tag) {
  case FIR_KIND_PRIMITIVE_VECTOR: {
    SEXPTYPE type
        = kind.as.primitive.primitive == FIR_PRIMITIVE_LOGICAL ? LGLSXP
        : kind.as.primitive.primitive == FIR_PRIMITIVE_INTEGER ? INTSXP
        : kind.as.primitive.primitive == FIR_PRIMITIVE_REAL ? REALSXP
        : STRSXP;
    SEXP vec = PROTECT(Rf_allocVector(type, count));
    for (int i = 0; i < count; ++i) {
      SEXP element = values ? values[i] : R_NilValue;
      switch (type) {
      case LGLSXP:
        LOGICAL(vec)[i] = Rf_asLogical(element);
        break;
      case INTSXP:
        INTEGER(vec)[i] = Rf_asInteger(element);
        break;
      case REALSXP:
        REAL(vec)[i] = Rf_asReal(element);
        break;
      case STRSXP: {
        SEXP chr = PROTECT(Rf_asChar(element));
        SET_STRING_ELT(vec, i, chr);
        UNPROTECT(1);
        break;
      }
      default:
        Rf_error("Unsupported vector type");
      }
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
      SEXP elem = values ? values[i] : R_NilValue;
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

SEXP Fir_subscript_read(SEXP vector, SEXP index) {
  int idx = Rf_asInteger(index);
  ASSERT(idx != NA_INTEGER, "Subscript index cannot be NA");
  ASSERT(idx >= 0 && (R_xlen_t)idx < XLENGTH(vector), "Subscript index out of bounds");

  switch (TYPEOF(vector)) {
  case LGLSXP:
    return Rf_ScalarLogical(LOGICAL(vector)[idx]);
  case INTSXP:
    return Rf_ScalarInteger(INTEGER(vector)[idx]);
  case REALSXP:
    return Rf_ScalarReal(REAL(vector)[idx]);
  case STRSXP:
    return Rf_ScalarString(STRING_ELT(vector, idx));
  case VECSXP:
    return VECTOR_ELT(vector, idx);
  default:
    Rf_error("Unsupported vector type for subscript_read");
  }
}

SEXP Fir_subscript_write(SEXP vector, SEXP index, SEXP value) {
  int idx = Rf_asInteger(index);
  ASSERT(idx != NA_INTEGER, "Subscript index cannot be NA");
  ASSERT(idx >= 0 && (R_xlen_t)idx < XLENGTH(vector), "Subscript index out of bounds");

  switch (TYPEOF(vector)) {
  case LGLSXP:
    LOGICAL(vector)[idx] = Rf_asLogical(value);
    break;
  case INTSXP:
    INTEGER(vector)[idx] = Rf_asInteger(value);
    break;
  case REALSXP:
    REAL(vector)[idx] = Rf_asReal(value);
    break;
  case STRSXP: {
    SEXP chr = PROTECT(Rf_asChar(value));
    SET_STRING_ELT(vector, idx, chr);
    UNPROTECT(1);
    break;
  }
  case VECSXP:
    SET_VECTOR_ELT(vector, idx, value);
    break;
  default:
    Rf_error("Unsupported vector type for subscript_write");
  }
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

bool Fir_is_true(SEXP value) {
  int logical = Rf_asLogical(value);
  ASSERT(logical != NA_LOGICAL, "Condition evaluated to NA");

  return logical != 0;
}

void Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP env) {
  (void)stack_size;
  (void)stack_values;
  (void)env;

  Rf_error("FIŘ deoptimization triggered at pc=%d (unsupported)", pc);
}

bool Fir_assume_constant(SEXP value, SEXP constant) {
  return (bool)R_compute_identical(value, constant, 0);
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
  if (!Fir_is_compiled_closure(found, &data)) {
    return false;
  }
  return data->dispatch == dispatch;
}

bool Fir_assume_load_builtin_fun(SEXP symbol, SEXP env, int bltIdx) {
  SEXP found = Fir_load_fun_for_assume(symbol, env);
  if (found == NULL) {
    return false;
  }

  return PRIMOFFSET(found) == bltIdx;
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

DEFINE_INTRINSIC(checkFun, 0, SEXP value) {
  if (TYPEOF(value) != CLOSXP && TYPEOF(value) != BUILTINSXP &&
      TYPEOF(value) != SPECIALSXP) {
    Rf_error("attempt to apply non-function");
  }

  return R_NilValue;
}

DEFINE_INTRINSIC(checkMissing, 0, SEXP value) {
  if (value == R_MissingArg) {
    Rf_error("argument is missing, with no default");
  }

  return R_NilValue;
}

DEFINE_INTRINSIC(toForSeq, 0, SEXP value) {
  // TODO: idk what this should do. If the following works, this intrinsic should be removed.
  return value;
}

DEFINE_INTRINSIC(setInvisible, 0) {
  R_Visible = FALSE;
  return R_NilValue;
}

DEFINE_INTRINSIC(setVisible, 0) {
  R_Visible = TRUE;
  return R_NilValue;
}

DEFINE_INTRINSIC(naToFalse, 0, SEXP value) {
  return Rf_ScalarLogical(value == R_TrueValue);
}

// === Vector operation helpers ===

// Binary vector op: int OP int → int (with recycling)
static SEXP Fir_vec_binop_ii_i(SEXP a, SEXP b, int (*op)(int, int)) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(INTSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    INTEGER(res)[i] = op(INTEGER(a)[i % na], INTEGER(b)[i % nb]);
  UNPROTECT(1);
  return res;
}

// Binary vector op: real OP real → real (with recycling)
static SEXP Fir_vec_binop_rr_r(SEXP a, SEXP b, double (*op)(double, double)) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(REALSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    REAL(res)[i] = op(REAL(a)[i % na], REAL(b)[i % nb]);
  UNPROTECT(1);
  return res;
}

// Binary vector op: int OP real → real (with recycling)
static SEXP Fir_vec_binop_ir_r(SEXP a, SEXP b, double (*op)(double, double)) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(REALSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    REAL(res)[i] = op((double)INTEGER(a)[i % na], REAL(b)[i % nb]);
  UNPROTECT(1);
  return res;
}

// Binary vector op: real OP int → real (with recycling)
static SEXP Fir_vec_binop_ri_r(SEXP a, SEXP b, double (*op)(double, double)) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(REALSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    REAL(res)[i] = op(REAL(a)[i % na], (double)INTEGER(b)[i % nb]);
  UNPROTECT(1);
  return res;
}

// Binary vector comparison: int CMP int → logical (with recycling)
static SEXP Fir_vec_cmpop_ii_l(SEXP a, SEXP b, int (*op)(int, int)) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(LGLSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    LOGICAL(res)[i] = op(INTEGER(a)[i % na], INTEGER(b)[i % nb]);
  UNPROTECT(1);
  return res;
}

// Binary vector comparison: real CMP real → logical (with recycling)
static SEXP Fir_vec_cmpop_rr_l(SEXP a, SEXP b, int (*op)(double, double)) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(LGLSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    LOGICAL(res)[i] = op(REAL(a)[i % na], REAL(b)[i % nb]);
  UNPROTECT(1);
  return res;
}

// Binary vector comparison: int CMP real → logical (with recycling)
static SEXP Fir_vec_cmpop_ir_l(SEXP a, SEXP b, int (*op)(double, double)) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(LGLSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    LOGICAL(res)[i] = op((double)INTEGER(a)[i % na], REAL(b)[i % nb]);
  UNPROTECT(1);
  return res;
}

// Binary vector comparison: real CMP int → logical (with recycling)
static SEXP Fir_vec_cmpop_ri_l(SEXP a, SEXP b, int (*op)(double, double)) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(LGLSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    LOGICAL(res)[i] = op(REAL(a)[i % na], (double)INTEGER(b)[i % nb]);
  UNPROTECT(1);
  return res;
}

// Unary vector op: int → real
static SEXP Fir_vec_unaryop_i_r(SEXP v, double (*op)(double)) {
  R_xlen_t n = XLENGTH(v);
  SEXP res = PROTECT(Rf_allocVector(REALSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    REAL(res)[i] = op((double)INTEGER(v)[i]);
  UNPROTECT(1);
  return res;
}

// Unary vector op: real → real
static SEXP Fir_vec_unaryop_r_r(SEXP v, double (*op)(double)) {
  R_xlen_t n = XLENGTH(v);
  SEXP res = PROTECT(Rf_allocVector(REALSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    REAL(res)[i] = op(REAL(v)[i]);
  UNPROTECT(1);
  return res;
}

// Arithmetic operation wrappers for function pointers
static int Fir_add_i(int a, int b) { return a + b; }
static int Fir_sub_i(int a, int b) { return a - b; }
static int Fir_mul_i(int a, int b) { return a * b; }
static double Fir_add_r(double a, double b) { return a + b; }
static double Fir_sub_r(double a, double b) { return a - b; }
static double Fir_mul_r(double a, double b) { return a * b; }
static double Fir_div_r(double a, double b) { return a / b; }

// Comparison operation wrappers
static int Fir_lt_i(int a, int b) { return a < b; }
static int Fir_le_i(int a, int b) { return a <= b; }
static int Fir_eq_i(int a, int b) { return a == b; }
static int Fir_lt_r(double a, double b) { return a < b; }
static int Fir_le_r(double a, double b) { return a <= b; }
static int Fir_eq_r(double a, double b) { return a == b; }

// === + ===
// v1: I+I→I
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 1, SEXP a, SEXP b) {
  return Rf_ScalarInteger(Rf_asInteger(a) + Rf_asInteger(b));
}
// v2: R+R→R
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 2, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asReal(a) + Rf_asReal(b));
}
// v3: I+R→R
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 3, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asInteger(a) + Rf_asReal(b));
}
// v4: R+I→R
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 4, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asReal(a) + Rf_asInteger(b));
}
// v5: v(I)+v(I)→v(I)
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 5, SEXP a, SEXP b) {
  return Fir_vec_binop_ii_i(a, b, Fir_add_i);
}
// v6: v(R)+v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 6, SEXP a, SEXP b) {
  return Fir_vec_binop_rr_r(a, b, Fir_add_r);
}
// v7: v(I)+v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 7, SEXP a, SEXP b) {
  return Fir_vec_binop_ir_r(a, b, Fir_add_r);
}
// v8: v(R)+v(I)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 8, SEXP a, SEXP b) {
  return Fir_vec_binop_ri_r(a, b, Fir_add_r);
}

// === - ===
// v1: I-I→I
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 1, SEXP a, SEXP b) {
  return Rf_ScalarInteger(Rf_asInteger(a) - Rf_asInteger(b));
}
// v2: R-R→R
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 2, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asReal(a) - Rf_asReal(b));
}
// v3: I-R→R
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 3, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asInteger(a) - Rf_asReal(b));
}
// v4: R-I→R
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 4, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asReal(a) - Rf_asInteger(b));
}
// v5: v(I)-v(I)→v(I)
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 5, SEXP a, SEXP b) {
  return Fir_vec_binop_ii_i(a, b, Fir_sub_i);
}
// v6: v(R)-v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 6, SEXP a, SEXP b) {
  return Fir_vec_binop_rr_r(a, b, Fir_sub_r);
}
// v7: v(I)-v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 7, SEXP a, SEXP b) {
  return Fir_vec_binop_ir_r(a, b, Fir_sub_r);
}
// v8: v(R)-v(I)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 8, SEXP a, SEXP b) {
  return Fir_vec_binop_ri_r(a, b, Fir_sub_r);
}

// === * ===
// v1: I*I→I
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 1, SEXP a, SEXP b) {
  return Rf_ScalarInteger(Rf_asInteger(a) * Rf_asInteger(b));
}
// v2: R*R→R
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 2, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asReal(a) * Rf_asReal(b));
}
// v3: I*R→R
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 3, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asInteger(a) * Rf_asReal(b));
}
// v4: R*I→R
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 4, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asReal(a) * Rf_asInteger(b));
}
// v5: v(I)*v(I)→v(I)
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 5, SEXP a, SEXP b) {
  return Fir_vec_binop_ii_i(a, b, Fir_mul_i);
}
// v6: v(R)*v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 6, SEXP a, SEXP b) {
  return Fir_vec_binop_rr_r(a, b, Fir_mul_r);
}
// v7: v(I)*v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 7, SEXP a, SEXP b) {
  return Fir_vec_binop_ir_r(a, b, Fir_mul_r);
}
// v8: v(R)*v(I)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 8, SEXP a, SEXP b) {
  return Fir_vec_binop_ri_r(a, b, Fir_mul_r);
}

// === / ===
// v1: I/I→R
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 1, SEXP a, SEXP b) {
  return Rf_ScalarReal((double)Rf_asInteger(a) / (double)Rf_asInteger(b));
}
// v2: R/R→R
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 2, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asReal(a) / Rf_asReal(b));
}
// v3: I/R→R
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 3, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asInteger(a) / Rf_asReal(b));
}
// v4: R/I→R
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 4, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asReal(a) / Rf_asInteger(b));
}
// v5: v(I)/v(I)→v(R) — always returns real for division
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 5, SEXP a, SEXP b) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(REALSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    REAL(res)[i] = (double)INTEGER(a)[i % na] / (double)INTEGER(b)[i % nb];
  UNPROTECT(1);
  return res;
}
// v6: v(R)/v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 6, SEXP a, SEXP b) {
  return Fir_vec_binop_rr_r(a, b, Fir_div_r);
}
// v7: v(I)/v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 7, SEXP a, SEXP b) {
  return Fir_vec_binop_ir_r(a, b, Fir_div_r);
}
// v8: v(R)/v(I)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 8, SEXP a, SEXP b) {
  return Fir_vec_binop_ri_r(a, b, Fir_div_r);
}

// === : ===
// v1: I:I→v(I)
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 1, SEXP a, SEXP b) {
  return R_compact_intrange((R_xlen_t) Rf_asInteger(a), (R_xlen_t) Rf_asInteger(b));
}
// v2: I:R→v(I)
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 2, SEXP a, SEXP b) {
  return R_compact_intrange((R_xlen_t) Rf_asInteger(a), (R_xlen_t) Rf_asReal(b));
}
// v3: R:R→V (may return int or real range)
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 3, SEXP a, SEXP b) {
  double n1 = Rf_asReal(a);
  double n2 = Rf_asReal(b);
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
// v4: v(I):v(I)→v(I) — uses first elements (scalar semantics on vectors)
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 4, SEXP a, SEXP b) {
  return R_compact_intrange((R_xlen_t) INTEGER(a)[0], (R_xlen_t) INTEGER(b)[0]);
}
// v5: v(I):v(R)→v(I)
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 5, SEXP a, SEXP b) {
  return R_compact_intrange((R_xlen_t) INTEGER(a)[0], (R_xlen_t) REAL(b)[0]);
}
// v6: v(R):v(R)→V
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 6, SEXP a, SEXP b) {
  double n1 = REAL(a)[0];
  double n2 = REAL(b)[0];
  if (n1 == (R_xlen_t) n1) {
      return R_compact_intrange((R_xlen_t) n1, (R_xlen_t) n2);
  }
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
// v1: I<I→L
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 1, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asInteger(a) < Rf_asInteger(b));
}
// v2: R<R→L
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 2, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asReal(a) < Rf_asReal(b));
}
// v3: I<R→L
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 3, SEXP a, SEXP b) {
  return Rf_ScalarLogical((double)Rf_asInteger(a) < Rf_asReal(b));
}
// v4: R<I→L
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 4, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asReal(a) < (double)Rf_asInteger(b));
}
// v5: v(I)<v(I)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 5, SEXP a, SEXP b) {
  return Fir_vec_cmpop_ii_l(a, b, Fir_lt_i);
}
// v6: v(R)<v(R)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 6, SEXP a, SEXP b) {
  return Fir_vec_cmpop_rr_l(a, b, Fir_lt_r);
}
// v7: v(I)<v(R)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 7, SEXP a, SEXP b) {
  return Fir_vec_cmpop_ir_l(a, b, Fir_lt_r);
}
// v8: v(R)<v(I)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 8, SEXP a, SEXP b) {
  return Fir_vec_cmpop_ri_l(a, b, Fir_lt_r);
}

// === <= ===
// v1: I<=I→L
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 1, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asInteger(a) <= Rf_asInteger(b));
}
// v2: R<=R→L
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 2, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asReal(a) <= Rf_asReal(b));
}
// v3: I<=R→L
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 3, SEXP a, SEXP b) {
  return Rf_ScalarLogical((double)Rf_asInteger(a) <= Rf_asReal(b));
}
// v4: R<=I→L
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 4, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asReal(a) <= (double)Rf_asInteger(b));
}
// v5: v(I)<=v(I)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 5, SEXP a, SEXP b) {
  return Fir_vec_cmpop_ii_l(a, b, Fir_le_i);
}
// v6: v(R)<=v(R)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 6, SEXP a, SEXP b) {
  return Fir_vec_cmpop_rr_l(a, b, Fir_le_r);
}
// v7: v(I)<=v(R)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 7, SEXP a, SEXP b) {
  return Fir_vec_cmpop_ir_l(a, b, Fir_le_r);
}
// v8: v(R)<=v(I)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 8, SEXP a, SEXP b) {
  return Fir_vec_cmpop_ri_l(a, b, Fir_le_r);
}

// === == ===
// v1: L==L→L
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 1, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asLogical(a) == Rf_asLogical(b));
}
// v2: I==I→L
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 2, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asInteger(a) == Rf_asInteger(b));
}
// v3: R==R→L
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 3, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asReal(a) == Rf_asReal(b));
}
// v4: S==S→L
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 4, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asChar(STRING_ELT(a, 0)) == Rf_asChar(STRING_ELT(b, 0)));
}
// v5: v(L)==v(L)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 5, SEXP a, SEXP b) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(LGLSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    LOGICAL(res)[i] = LOGICAL(a)[i % na] == LOGICAL(b)[i % nb];
  UNPROTECT(1);
  return res;
}
// v6: v(I)==v(I)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 6, SEXP a, SEXP b) {
  return Fir_vec_cmpop_ii_l(a, b, Fir_eq_i);
}
// v7: v(R)==v(R)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 7, SEXP a, SEXP b) {
  return Fir_vec_cmpop_rr_l(a, b, Fir_eq_r);
}
// v8: v(S)==v(S)→v(L)
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 8, SEXP a, SEXP b) {
  R_xlen_t na = XLENGTH(a), nb = XLENGTH(b);
  R_xlen_t n = na > nb ? na : nb;
  SEXP res = PROTECT(Rf_allocVector(LGLSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    LOGICAL(res)[i] = Rf_asChar(STRING_ELT(a, i % na)) == Rf_asChar(STRING_ELT(b, i % nb));
  UNPROTECT(1);
  return res;
}
// v9: cls==cls→L
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 9, SEXP a, SEXP b) {
  return Rf_ScalarLogical(a == b);
}

// === log ===
// v1: I,R→R
DEFINE_OVERRIDDEN_BUILTIN(log, 1, SEXP value, SEXP base) {
  return Rf_ScalarReal(R_logbase(Rf_asInteger(value), Rf_asReal(base)));
}
// v2: R,R→R
DEFINE_OVERRIDDEN_BUILTIN(log, 2, SEXP value, SEXP base) {
  return Rf_ScalarReal(R_logbase(Rf_asReal(value), Rf_asReal(base)));
}
// v3: v(I),v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(log, 3, SEXP value, SEXP base) {
  R_xlen_t nv = XLENGTH(value), nb = XLENGTH(base);
  R_xlen_t n = nv > nb ? nv : nb;
  SEXP res = PROTECT(Rf_allocVector(REALSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    REAL(res)[i] = R_logbase((double)INTEGER(value)[i % nv], REAL(base)[i % nb]);
  UNPROTECT(1);
  return res;
}
// v4: v(R),v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(log, 4, SEXP value, SEXP base) {
  R_xlen_t nv = XLENGTH(value), nb = XLENGTH(base);
  R_xlen_t n = nv > nb ? nv : nb;
  SEXP res = PROTECT(Rf_allocVector(REALSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    REAL(res)[i] = R_logbase(REAL(value)[i % nv], REAL(base)[i % nb]);
  UNPROTECT(1);
  return res;
}

// === abs ===
// v1: I→I
DEFINE_OVERRIDDEN_BUILTIN(abs, 1, SEXP value) {
  return Rf_ScalarInteger(abs(Rf_asInteger(value)));
}
// v2: R→R
DEFINE_OVERRIDDEN_BUILTIN(abs, 2, SEXP value) {
  return Rf_ScalarReal(fabs(Rf_asReal(value)));
}
// v3: v(I)→v(I)
DEFINE_OVERRIDDEN_BUILTIN(abs, 3, SEXP value) {
  R_xlen_t n = XLENGTH(value);
  SEXP res = PROTECT(Rf_allocVector(INTSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    INTEGER(res)[i] = abs(INTEGER(value)[i]);
  UNPROTECT(1);
  return res;
}
// v4: v(R)→v(R)
DEFINE_OVERRIDDEN_BUILTIN(abs, 4, SEXP value) {
  R_xlen_t n = XLENGTH(value);
  SEXP res = PROTECT(Rf_allocVector(REALSXP, n));
  for (R_xlen_t i = 0; i < n; i++)
    REAL(res)[i] = fabs(REAL(value)[i]);
  UNPROTECT(1);
  return res;
}

static double Fir_sign(double x) {
  return x == 0 ? 0 : x > 0 ? 1 : -1;
}

// math1: v1=I→R, v2=R→R, v3=v(I)→v(R), v4=v(R)→v(R)
#define V(name, func) \
  DEFINE_OVERRIDDEN_BUILTIN(name, 1, SEXP value) {\
    return Rf_ScalarReal(func(Rf_asInteger(value)));\
  }\
  \
  DEFINE_OVERRIDDEN_BUILTIN(name, 2, SEXP value) {\
    return Rf_ScalarReal(func(Rf_asReal(value)));\
  }\
  \
  DEFINE_OVERRIDDEN_BUILTIN(name, 3, SEXP value) {\
    return Fir_vec_unaryop_i_r(value, func);\
  }\
  \
  DEFINE_OVERRIDDEN_BUILTIN(name, 4, SEXP value) {\
    return Fir_vec_unaryop_r_r(value, func);\
  }
DEFINE_MATH1_BUILTINS(V)
#undef V

DEFINE_OVERRIDDEN_BUILTIN(length, 1, SEXP value) {
  return Rf_ScalarInteger(LENGTH(value));
}

// as.integer
DEFINE_OVERRIDDEN_BUILTIN(as_u2einteger, 1, SEXP value) {
  return Rf_ScalarInteger(Rf_asInteger(value));
}

// as.logical
DEFINE_OVERRIDDEN_BUILTIN(as_u2elogical, 1, SEXP value) {
  return Rf_ScalarLogical(Rf_asLogical(value));
}

// as.character
DEFINE_OVERRIDDEN_BUILTIN(as_u2echaracter, 1, SEXP value) {
  return Rf_ScalarString(Rf_asChar(value));
}