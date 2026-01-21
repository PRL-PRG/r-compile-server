#include "runtime.h"
#include "print_sexp.h"

#include <R_ext/Boolean.h>
#include <R_ext/Error.h>

#define ASSERT(x, msg, ...) if (!(x)) Rf_error("FIŘ internal assertion failed:\n  `" #x "`\n  " msg, ##__VA_ARGS__)

Fir_Kind Fir_kind_any = {.tag = FIR_KIND_ANY};
Fir_Kind Fir_kind_anyValue = {.tag = FIR_KIND_ANY_VALUE};
Fir_Kind Fir_kind_closure = {.tag = FIR_KIND_CLOSURE};
Fir_Kind Fir_kind_dots = {.tag = FIR_KIND_DOTS};

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

Fir_Kind Fir_kind_primitiveScalar(int primitive_kind) {
  ASSERT(
    primitive_kind >= 0 && primitive_kind < 4,
    "Invalid primitive scalar kind index %d",
    primitive_kind
  );

  return PRIMITIVE_SCALAR_KINDS[primitive_kind];
}

Fir_Kind Fir_kind_primitiveVector(int primitive_kind) {
  ASSERT(
    primitive_kind >= 0 && primitive_kind < 4,
    "Invalid primitive vector kind index %d",
    primitive_kind
  );

  return PRIMITIVE_VECTOR_KINDS[primitive_kind];
}

Fir_Kind Fir_kind_promise(Fir_Type const* value_type, bool reflect) {
  return (Fir_Kind) {.tag = FIR_KIND_PROMISE, .as.promise.value_type = value_type, .as.promise.reflect = reflect};
}

Fir_Type Fir_type(Fir_Kind kind, Fir_Ownership ownership, bool definite) {
  return (Fir_Type) {.kind = kind, .ownership = ownership, .definite = definite};
}

Fir_Signature Fir_signature(Fir_Type return_type, int param_count, Fir_Type const *param_types, bool effects) {
  return (Fir_Signature) {.return_type = return_type, .param_count = param_count, .param_types = param_types, .effects = effects};
}

static void Fir_assert_symbol(SEXP sym, const char *what) {
  ASSERT(
    TYPEOF(sym) == SYMSXP,
    "Expected a symbol for %s",
    what
  );
}

static bool Fir_is_compiled_closure(SEXP value, Fir_FunctionData **data) {
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

static bool Fir_is_compiled_promise(SEXP value, Fir_PromiseGlobalData **global_data, Fir_PromiseLocalData **local_data) {
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
  case FIR_KIND_ANY:
    return true;
  case FIR_KIND_ANY_VALUE:
    return this_kind.tag != FIR_KIND_ANY && this_kind.tag != FIR_KIND_PROMISE;
  case FIR_KIND_PRIMITIVE_VECTOR: {
    int other_primitive = other_kind.as.primitive.primitive;
    switch (this_kind.tag) {
    case FIR_KIND_PRIMITIVE_SCALAR:
    case FIR_KIND_PRIMITIVE_VECTOR:
      return this_kind.as.primitive.primitive == other_primitive;
    default:
      return false;
    }
  }
  case FIR_KIND_PRIMITIVE_SCALAR:
  case FIR_KIND_CLOSURE:
  case FIR_KIND_DOTS:
    // For these kinds, only exact match is a subtype
    if (this_kind.tag != other_kind.tag) {
      return false;
    }
    if (this_kind.tag == FIR_KIND_PRIMITIVE_SCALAR) {
      return this_kind.as.primitive.primitive == other_kind.as.primitive.primitive;
    }
    return true;
  case FIR_KIND_PROMISE:
    if (this_kind.tag != FIR_KIND_PROMISE) {
      return false;
    }
    // Check value type is subtype and effects is subset
    // Note: In Java, effects.isSubsetOf is checked, but in C we only have 'reflect' bool
    // The Java Effects type has ANY and NONE, where reflect corresponds to whether effects can occur
    return Fir_is_subtype(*this_kind.as.promise.value_type, *other_kind.as.promise.value_type)
        && (!this_kind.as.promise.reflect || other_kind.as.promise.reflect);
  }
  return false;
}

bool Fir_is_subtype(Fir_Type this_type, Fir_Type other_type) {
  return Fir_kind_is_subtype(this_type.kind, other_type.kind)
      && this_type.ownership == other_type.ownership
      && (this_type.definite || !other_type.definite);
}

bool Fir_value_matches(SEXP value, Fir_Type type) {
  switch (type.kind.tag)
  {
  case FIR_KIND_ANY:
  case FIR_KIND_ANY_VALUE:
    return true;
  case FIR_KIND_PRIMITIVE_SCALAR: {
      SEXPTYPE expected
          = type.kind.as.primitive.primitive == FIR_PRIMITIVE_LOGICAL ? LGLSXP
          : type.kind.as.primitive.primitive == FIR_PRIMITIVE_INTEGER ? INTSXP
          : type.kind.as.primitive.primitive == FIR_PRIMITIVE_REAL ? REALSXP
          : STRSXP;
      if (TYPEOF(value) != expected) {
        return false;
      }
      return Rf_length(value) == 1;
  }
  case FIR_KIND_PRIMITIVE_VECTOR: {
      SEXPTYPE expected
          = type.kind.as.primitive.primitive == FIR_PRIMITIVE_LOGICAL ? LGLSXP
          : type.kind.as.primitive.primitive == FIR_PRIMITIVE_INTEGER ? INTSXP
          : type.kind.as.primitive.primitive == FIR_PRIMITIVE_REAL ? REALSXP
          : STRSXP;
      return TYPEOF(value) == expected;
  }
  case FIR_KIND_CLOSURE:
    return TYPEOF(value) == CLOSXP || TYPEOF(value) == BUILTINSXP ||
           TYPEOF(value) == SPECIALSXP;
  case FIR_KIND_DOTS:
    return TYPEOF(value) == DOTSXP;
  case FIR_KIND_PROMISE: {
    Fir_PromiseGlobalData *global_data;
    Fir_PromiseLocalData *local_data;
    if (Fir_is_compiled_promise(value, &global_data, &local_data)) {
      return Fir_is_subtype(global_data->value_type, type);
    }
    if (TYPEOF(value) == PROMSXP) {
      // GNU-R promise. We have no information on the inner type,
      // besides that it's never another promise.
      return type.kind.as.promise.value_type->kind.tag == FIR_KIND_ANY_VALUE;
    }
  }
  }
  return false;
}

SEXP Fir_mk_closure(Rsh_code dispatchFromR, SEXP formals, SEXP cp, SEXP env) {
  SEXP ext = PROTECT(R_MakeExternalPtr((void *)dispatchFromR, Rsh_CodeTag, cp));
  SEXP closure = PROTECT(Rf_mkCLOSXP(formals, ext, env));
  UNPROTECT(2); // body + closure

  return closure;
}

SEXP Fir_mk_promise(Rsh_code evalFromR, SEXP cp, SEXP const **captures, SEXP env) {
  SEXP local_data_sexp = PROTECT(Rf_allocVector(RAWSXP, sizeof(Fir_PromiseLocalData)));
  Fir_PromiseLocalData *local_data = STDVEC_DATAPTR(local_data_sexp);
  *local_data = (Fir_PromiseLocalData) {.captures = captures};

  SEXP data = PROTECT(Rf_cons(cp, local_data_sexp));

  SEXP ext = PROTECT(R_MakeExternalPtr((void *)evalFromR, Rsh_CodeTag, data));
  SEXP promise = PROTECT(Rf_mkPROMISE(ext, env));
  UNPROTECT(3); // local_data_sexp + data + ext + promise

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
  ASSERT(value != R_UnboundValue, "Unbound variable");
  return value;
}

SEXP Fir_load_dots(int ddIndex, SEXP env) {
  ASSERT(TYPEOF(env) == ENVSXP, "Environment expected for load");
  return Rf_ddfind(ddIndex, env);
}

SEXP Fir_load_fun(int env_selector, SEXP symbol, SEXP env) {
  Fir_assert_symbol(symbol, "load_fun");
  switch (env_selector) {
  case Fir_LoadFun_Local:
    return Rf_findFun(symbol, env);
  case Fir_LoadFun_Global:
    return Rf_findFun(symbol, R_GlobalEnv);
  case Fir_LoadFun_Base:
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

void Fir_push_env(SEXP *env_ptr) {
  ASSERT(env_ptr && *env_ptr && TYPEOF(*env_ptr) == ENVSXP, "push_env requires a pointer to an environment");
  SEXP new_env = Rf_NewEnvironment(R_NilValue, R_NilValue, *env_ptr);
  *env_ptr = new_env;
}

void Fir_pop_env(SEXP *env_ptr) {
  ASSERT(env_ptr && *env_ptr && TYPEOF(*env_ptr) == ENVSXP, "pop_env requires a pointer to an environment");
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

static SEXP Fir_build_arglist(int argc, SEXP const *args, SEXP const *names,
                              int *protect_count) {
  SEXP list = R_NilValue;
  for (int i = argc - 1; i >= 0; --i) {
    SEXP arg = args[i];
    SEXP name = names[i];

    if (name == R_DotsSymbol) {
      // Splice dots argument
      list = Rf_listAppend(list, arg);
    } else {
      SEXP node = PROTECT(Rf_cons(arg, list));
      (*protect_count)++;
      if (name != R_MissingArg) {
        SET_TAG(node, name);
      }

      list = node;
    }
  }
  return list;
}

SEXP Fir_call_builtin(int bltIdx, SEXP env, int argc, SEXP *args, SEXP const *names) {
  FUNTAB fun = R_FunTab[bltIdx];

  ASSERT(
    fun.arity == -1 || fun.arity == argc,
    "Builtin %s called with incorrect number of arguments: expected %d, got %d",
    fun.name, fun.arity, argc
  );

  if (fun.eval) {
    // BUILTINSXP, so force arguments
    for (int i = 0; i < argc; ++i) {
      args[i] = Fir_maybe_force(args[i]);
      if (args[i] == R_MissingArg) {
        Rf_error("argument %d is missing", i + 1);
      }
    }
  }

  SEXP op = R_Primitive(fun.name);

  int visibility = (bltIdx / 100) % 10;
  R_Visible = (Rboolean)(visibility != 1);

  int protect_count = 0;
  SEXP arglist = Fir_build_arglist(argc, args, names, &protect_count);

  SEXP call = PROTECT(Rf_lcons(op, arglist));
  protect_count++;

  SEXP result = fun.cfun(call, op, arglist, env);

  UNPROTECT(protect_count);

  if (visibility < 2) {
    R_Visible = (Rboolean)(visibility != 1);
  }

  return result;
}

SEXP Fir_call_dynamic(SEXP callee, SEXP env, int argc, SEXP *args, SEXP const *names) {
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
            any_param_types[i] = Fir_type(Fir_kind_any, FIR_SHARED, false);
          }
          Fir_Signature any_signature = Fir_signature(
            Fir_type(Fir_kind_anyValue, FIR_SHARED, true),
            argc,
            any_param_types,
            true  // effects = true (ANY)
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
      SEXP arglist = Fir_build_arglist(argc, args, names, &protect_count);

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

bool Fir_assume_type(SEXP value, Fir_Type type) {
  return Fir_value_matches(value, type);
}

void Fir_dbg_comment(const char* comment) {
  fprintf(stderr, "%s\n", comment);
}

void Fir_dbg_sexp(const char* name, SEXP value) {
  fprintf(stderr, "* - %s = ", name);
  Fir_printSexp(value);
  fprintf(stderr, "\n");
}

static void Fir_printPrimitiveKind(Fir_PrimitiveKind primitive) {
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
  }
}

static void Fir_printOwnership(Fir_Ownership ownership) {
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
  }
}

static void Fir_printConcreteness(bool definite) {
  if (definite) {
    fprintf(stderr, "!");
  } else {
    fprintf(stderr, "?");
  }
}

static void Fir_printEffects(bool reflect) {
  if (reflect) {
    fprintf(stderr, "+");
  } else {
    fprintf(stderr, "-");
  }
}

static void Fir_printKind(Fir_Kind kind);

static void Fir_printType(Fir_Type type) {
  Fir_printKind(type.kind);
  if (type.ownership != FIR_SHARED) {
    Fir_printOwnership(type.ownership);
  }
  // For `Kind.Any`, concreteness is implicit iff `MAYBE`.
  // For other kinds, concreteness is implicit iff `DEFINITELY`.
  if ((type.kind.tag == FIR_KIND_ANY) == type.definite) {
    Fir_printConcreteness(type.definite);
  }
}

static void Fir_printKind(Fir_Kind kind) {
  switch (kind.tag) {
  case FIR_KIND_ANY:
    fprintf(stderr, "*");
    break;
  case FIR_KIND_ANY_VALUE:
    fprintf(stderr, "V");
    break;
  case FIR_KIND_PRIMITIVE_SCALAR:
    Fir_printPrimitiveKind(kind.as.primitive.primitive);
    break;
  case FIR_KIND_PRIMITIVE_VECTOR:
    fprintf(stderr, "v(");
    Fir_printPrimitiveKind(kind.as.primitive.primitive);
    fprintf(stderr, ")");
    break;
  case FIR_KIND_CLOSURE:
    fprintf(stderr, "cls");
    break;
  case FIR_KIND_DOTS:
    fprintf(stderr, "dots");
    break;
  case FIR_KIND_PROMISE:
    fprintf(stderr, "p(");
    Fir_printType(*kind.as.promise.value_type);
    fprintf(stderr, " ");
    Fir_printEffects(kind.as.promise.reflect);
    fprintf(stderr, ")");
    break;
  }
}

static void Fir_printSignature(Fir_Signature signature) {
  // Print parameter types separated by ", "
  for (int i = 0; i < signature.param_count; ++i) {
    if (i > 0) {
      fprintf(stderr, ", ");
    }
    Fir_printType(signature.param_types[i]);
  }

  if (signature.param_count > 0) {
    fprintf(stderr, " ");
  }

  fprintf(stderr, "-");
  Fir_printEffects(signature.effects);
  fprintf(stderr, "> ");
  Fir_printType(signature.return_type);
}

void Fir_dbg_signature(Fir_Signature signature) {
  fprintf(stderr, "* - Signature: ");
  Fir_printSignature(signature);
  fprintf(stderr, "\n");
}

#define DEFINE_DISPATCH_INTRINSIC_BODY(X, ...)\
  DEFINE_DISPATCH_INTRINSIC(X) {\
    va_list args;\
    va_start(args, signature);\
    SEXP result = Fir_ver_call_ ## X ## _v0(env, ##__VA_ARGS__);\
    va_end(args);\
    return result;\
  }

DEFINE_DISPATCH_INTRINSIC_BODY(checkFun, va_arg(args, SEXP))
DEFINE_DISPATCH_INTRINSIC_BODY(checkMissing, va_arg(args, SEXP))
DEFINE_DISPATCH_INTRINSIC_BODY(toForSeq, va_arg(args, SEXP))
DEFINE_DISPATCH_INTRINSIC_BODY(setInvisible)
DEFINE_DISPATCH_INTRINSIC_BODY(setVisible)

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

// +
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 1, SEXP a, SEXP b) {
  return Rf_ScalarInteger(Rf_asInteger(a) + Rf_asInteger(b));
}

// +
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 2, SEXP a, SEXP b) {
  return Rf_ScalarReal(Rf_asReal(a) + Rf_asReal(b));
}

// <
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 1, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asInteger(a) < Rf_asInteger(b));
}

// <=
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 1, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asInteger(a) <= Rf_asInteger(b));
}

// ==
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 1, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asInteger(a) == Rf_asInteger(b));
}

// ==
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 2, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asReal(a) == Rf_asReal(b));
}

// ==
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 3, SEXP a, SEXP b) {
  return Rf_ScalarLogical(Rf_asChar(STRING_ELT(a, 0)) == Rf_asChar(STRING_ELT(b, 0)));
}

// ==
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 4, SEXP a, SEXP b) {
  return Rf_ScalarLogical(a == b);
}

DEFINE_OVERRIDDEN_BUILTIN(missing, 0, SEXP value) {
  return value == R_MissingArg ? R_TrueValue : R_FalseValue;
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