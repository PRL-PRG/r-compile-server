#include "runtime.h"

#include <R_ext/Boolean.h>
#include <R_ext/Error.h>
#include <stdlib.h>
#include <string.h>

typedef struct Rsh_Fir_ClosureInfo {
  Rsh_Fir_DispatchFn dispatch;
  SEXP env;
  SEXP pool;
} Rsh_Fir_ClosureInfo;

typedef struct Rsh_Fir_PromiseInfo {
  Rsh_Fir_PromiseFn evaluate;
  SEXP env;
  SEXP pool;
  int ncaptures;
  SEXP const **captures;
  int forced;
  SEXP value;
} Rsh_Fir_PromiseInfo;

static Rsh_Fir_Kind const KIND_ANY = {.tag = RSH_FIR_KIND_ANY};
static Rsh_Fir_Kind const KIND_ANY_VALUE = {.tag = RSH_FIR_KIND_ANY_VALUE};
static Rsh_Fir_Kind const KIND_CLOSURE = {.tag = RSH_FIR_KIND_CLOSURE};
static Rsh_Fir_Kind const KIND_DOTS = {.tag = RSH_FIR_KIND_DOTS};

Rsh_Fir_Kind const *Rsh_Fir_kind_any = &KIND_ANY;
Rsh_Fir_Kind const *Rsh_Fir_kind_anyValue = &KIND_ANY_VALUE;
Rsh_Fir_Kind const *Rsh_Fir_kind_closure = &KIND_CLOSURE;
Rsh_Fir_Kind const *Rsh_Fir_kind_dots = &KIND_DOTS;

static Rsh_Fir_Kind const PRIMITIVE_SCALAR_KINDS[4] = {
    {.tag = RSH_FIR_KIND_PRIMITIVE_SCALAR, .as.primitive = {.primitive = RSH_FIR_PRIMITIVE_LOGICAL}},
    {.tag = RSH_FIR_KIND_PRIMITIVE_SCALAR, .as.primitive = {.primitive = RSH_FIR_PRIMITIVE_INTEGER}},
    {.tag = RSH_FIR_KIND_PRIMITIVE_SCALAR, .as.primitive = {.primitive = RSH_FIR_PRIMITIVE_REAL}},
    {.tag = RSH_FIR_KIND_PRIMITIVE_SCALAR, .as.primitive = {.primitive = RSH_FIR_PRIMITIVE_STRING}},
};

static Rsh_Fir_Kind const PRIMITIVE_VECTOR_KINDS[4] = {
    {.tag = RSH_FIR_KIND_PRIMITIVE_VECTOR, .as.primitive = {.primitive = RSH_FIR_PRIMITIVE_LOGICAL}},
    {.tag = RSH_FIR_KIND_PRIMITIVE_VECTOR, .as.primitive = {.primitive = RSH_FIR_PRIMITIVE_INTEGER}},
    {.tag = RSH_FIR_KIND_PRIMITIVE_VECTOR, .as.primitive = {.primitive = RSH_FIR_PRIMITIVE_REAL}},
    {.tag = RSH_FIR_KIND_PRIMITIVE_VECTOR, .as.primitive = {.primitive = RSH_FIR_PRIMITIVE_STRING}},
};

typedef struct PromiseKindNode {
  Rsh_Fir_Kind kind;
  Rsh_Fir_Type const *value_type;
  int reflect;
  struct PromiseKindNode *next;
} PromiseKindNode;

static PromiseKindNode *PROMISE_KIND_CACHE = NULL;

typedef struct TypeNode {
  Rsh_Fir_Type type;
  struct TypeNode *next;
} TypeNode;

static TypeNode *TYPE_CACHE = NULL;

static SEXP Rsh_Fir_ClosureTag = NULL;
static SEXP Rsh_Fir_PromiseTag = NULL;

static void Rsh_Fir_init_tags(void) {
  if (!Rsh_Fir_ClosureTag) {
    Rsh_Fir_ClosureTag = Rf_install("Rsh_Fir_Closure");
  }
  if (!Rsh_Fir_PromiseTag) {
    Rsh_Fir_PromiseTag = Rf_install("Rsh_Fir_Promise");
  }
}

static void Rsh_Fir_closure_finalizer(SEXP ext) {
  if (TYPEOF(ext) != EXTPTRSXP) {
    return;
  }
  Rsh_Fir_ClosureInfo *info = R_ExternalPtrAddr(ext);
  if (!info) {
    return;
  }
  if (info->env) {
    R_ReleaseObject(info->env);
  }
  if (info->pool) {
    R_ReleaseObject(info->pool);
  }
  free(info);
  R_ClearExternalPtr(ext);
}

static void Rsh_Fir_promise_finalizer(SEXP ext) {
  if (TYPEOF(ext) != EXTPTRSXP) {
    return;
  }
  Rsh_Fir_PromiseInfo *info = R_ExternalPtrAddr(ext);
  if (!info) {
    return;
  }
  if (info->env) {
    R_ReleaseObject(info->env);
  }
  if (info->pool) {
    R_ReleaseObject(info->pool);
  }
  if (info->value != R_NilValue) {
    R_ReleaseObject(info->value);
  }
  free(info->captures);
  free(info);
  R_ClearExternalPtr(ext);
}

Rsh_Fir_Kind const *Rsh_Fir_kind_primitiveScalar(int primitive_kind) {
  if (primitive_kind < 0 || primitive_kind >= 4) {
    Rf_error("Invalid primitive scalar kind index %d", primitive_kind);
  }
  return &PRIMITIVE_SCALAR_KINDS[primitive_kind];
}

Rsh_Fir_Kind const *Rsh_Fir_kind_primitiveVector(int primitive_kind) {
  if (primitive_kind < 0 || primitive_kind >= 4) {
    Rf_error("Invalid primitive vector kind index %d", primitive_kind);
  }
  return &PRIMITIVE_VECTOR_KINDS[primitive_kind];
}

Rsh_Fir_Kind const *Rsh_Fir_kind_promise(Rsh_Fir_Type const *value_type,
                                         bool reflect) {
  PromiseKindNode *node = PROMISE_KIND_CACHE;
  while (node) {
    if (node->value_type == value_type && node->reflect == (int)reflect) {
      return &node->kind;
    }
    node = node->next;
  }
  node = (PromiseKindNode *)calloc(1, sizeof(PromiseKindNode));
  node->kind.tag = RSH_FIR_KIND_PROMISE;
  node->kind.as.promise.value_type = value_type;
  node->kind.as.promise.reflect = reflect ? 1 : 0;
  node->value_type = value_type;
  node->reflect = reflect ? 1 : 0;
  node->next = PROMISE_KIND_CACHE;
  PROMISE_KIND_CACHE = node;
  return &node->kind;
}

Rsh_Fir_Type const *Rsh_Fir_type(Rsh_Fir_Kind const *kind, int ownership,
                                 bool definite) {
  TypeNode *node = TYPE_CACHE;
  while (node) {
    if (node->type.kind == kind && node->type.ownership == ownership &&
        node->type.definite == (int)definite) {
      return &node->type;
    }
    node = node->next;
  }
  node = (TypeNode *)calloc(1, sizeof(TypeNode));
  node->type.kind = kind;
  node->type.ownership = ownership;
  node->type.definite = definite ? 1 : 0;
  node->next = TYPE_CACHE;
  TYPE_CACHE = node;
  return &node->type;
}

Rsh_Fir_Type const *Rsh_Fir_param_types_empty(void) {
  return NULL;
}

static void Rsh_Fir_assert_symbol(SEXP sym, const char *what) {
  if (TYPEOF(sym) != SYMSXP) {
    Rf_error("Expected a symbol for %s", what);
  }
}

static int Rsh_Fir_is_compiled_closure(SEXP value,
                                       Rsh_Fir_ClosureInfo **info) {
  if (TYPEOF(value) != EXTPTRSXP) {
    return 0;
  }
  if (R_ExternalPtrTag(value) != Rsh_Fir_ClosureTag) {
    return 0;
  }
  Rsh_Fir_ClosureInfo *ptr = R_ExternalPtrAddr(value);
  if (!ptr) {
    return 0;
  }
  if (info) {
    *info = ptr;
  }
  return 1;
}

static int Rsh_Fir_is_compiled_promise(SEXP value,
                                       Rsh_Fir_PromiseInfo **info) {
  if (TYPEOF(value) != EXTPTRSXP) {
    return 0;
  }
  if (R_ExternalPtrTag(value) != Rsh_Fir_PromiseTag) {
    return 0;
  }
  Rsh_Fir_PromiseInfo *ptr = R_ExternalPtrAddr(value);
  if (!ptr) {
    return 0;
  }
  if (info) {
    *info = ptr;
  }
  return 1;
}

static int Rsh_Fir_value_matches(SEXP value, Rsh_Fir_Type const *type) {
  if (!type || !type->kind) {
    return 1;
  }
  switch (type->kind->tag) {
  case RSH_FIR_KIND_ANY:
  case RSH_FIR_KIND_ANY_VALUE:
    return 1;
  case RSH_FIR_KIND_PRIMITIVE_SCALAR: {
    SEXPTYPE expected =
        type->kind->as.primitive.primitive == RSH_FIR_PRIMITIVE_LOGICAL
            ? LGLSXP
        : type->kind->as.primitive.primitive == RSH_FIR_PRIMITIVE_INTEGER
            ? INTSXP
        : type->kind->as.primitive.primitive == RSH_FIR_PRIMITIVE_REAL
            ? REALSXP
            : STRSXP;
    if (TYPEOF(value) != expected) {
      return 0;
    }
    return Rf_length(value) == 1;
  }
  case RSH_FIR_KIND_PRIMITIVE_VECTOR: {
    SEXPTYPE expected =
        type->kind->as.primitive.primitive == RSH_FIR_PRIMITIVE_LOGICAL
            ? LGLSXP
        : type->kind->as.primitive.primitive == RSH_FIR_PRIMITIVE_INTEGER
            ? INTSXP
        : type->kind->as.primitive.primitive == RSH_FIR_PRIMITIVE_REAL
            ? REALSXP
            : STRSXP;
    return TYPEOF(value) == expected;
  }
  case RSH_FIR_KIND_CLOSURE:
    return TYPEOF(value) == CLOSXP || TYPEOF(value) == BUILTINSXP ||
           TYPEOF(value) == SPECIALSXP;
  case RSH_FIR_KIND_DOTS:
    return TYPEOF(value) == DOTSXP;
  case RSH_FIR_KIND_PROMISE:
    if (Rsh_Fir_is_compiled_promise(value, NULL)) {
      return 1;
    }
    return TYPEOF(value) == PROMSXP;
  }
  return 0;
}

SEXP Rsh_Fir_cast(SEXP value, Rsh_Fir_Type const *type) {
  if (!Rsh_Fir_value_matches(value, type)) {
    Rf_error("Value does not match expected FIŘ type");
  }
  return value;
}

SEXP Rsh_Fir_make_closure(Rsh_Fir_DispatchFn dispatch, SEXP env, SEXP pool) {
  if (!dispatch) {
    Rf_error("Cannot create closure without dispatch function");
  }
  if (TYPEOF(env) != ENVSXP) {
    Rf_error("Closure environment must be ENVSXP");
  }
  Rsh_Fir_init_tags();
  Rsh_Fir_ClosureInfo *info = calloc(1, sizeof(Rsh_Fir_ClosureInfo));
  info->dispatch = dispatch;
  info->env = env;
  info->pool = pool;
  R_PreserveObject(env);
  R_PreserveObject(pool);
  SEXP ext = PROTECT(R_MakeExternalPtr(info, Rsh_Fir_ClosureTag, R_NilValue));
  R_RegisterCFinalizerEx(ext, Rsh_Fir_closure_finalizer, FALSE);
  UNPROTECT(1);
  return ext;
}

SEXP Rsh_Fir_dup(SEXP value) { return Rf_duplicate(value); }

SEXP Rsh_Fir_load(SEXP symbol, SEXP env) {
  Rsh_Fir_assert_symbol(symbol, "load");
  if (TYPEOF(env) != ENVSXP) {
    Rf_error("Environment expected for load");
  }
  SEXP value = Rf_findVar(symbol, env);
  if (value == R_UnboundValue) {
    Rf_error("Unbound variable");
  }
  return value;
}

static SEXP Rsh_Fir_find_fun(SEXP symbol, SEXP env) {
  SEXP fun = Rf_findFun(symbol, env);
  if (fun == R_UnboundValue) {
    Rf_error("Unbound function");
  }
  return fun;
}

SEXP Rsh_Fir_load_fun(int env_selector, SEXP symbol, SEXP env) {
  Rsh_Fir_assert_symbol(symbol, "load_fun");
  switch (env_selector) {
  case Rsh_Fir_LoadFun_Local:
    return Rsh_Fir_find_fun(symbol, env);
  case Rsh_Fir_LoadFun_Global:
    return Rsh_Fir_find_fun(symbol, R_GlobalEnv);
  case Rsh_Fir_LoadFun_Base:
    return Rsh_Fir_find_fun(symbol, R_BaseEnv);
  default:
    Rf_error("Invalid environment selector for load_fun");
  }
}

void Rsh_Fir_store(SEXP symbol, SEXP value, SEXP env) {
  Rsh_Fir_assert_symbol(symbol, "store");
  if (TYPEOF(env) != ENVSXP) {
    Rf_error("Environment expected for store");
  }
  Rf_defineVar(symbol, value, env);
}

void Rsh_Fir_push_env(SEXP *env_ptr) {
  if (!env_ptr || !*env_ptr || TYPEOF(*env_ptr) != ENVSXP) {
    Rf_error("push_env requires a pointer to an environment");
  }
  SEXP new_env = Rf_NewEnvironment(R_NilValue, R_NilValue, *env_ptr);
  *env_ptr = new_env;
}

void Rsh_Fir_pop_env(SEXP *env_ptr) {
  if (!env_ptr || !*env_ptr || TYPEOF(*env_ptr) != ENVSXP) {
    Rf_error("pop_env requires a pointer to an environment");
  }
  SEXP parent = ENCLOS(*env_ptr);
  if (!parent || parent == R_NilValue) {
    Rf_error("pop_env called on environment without parent");
  }
  *env_ptr = parent;
}

static SEXP Rsh_Fir_make_names(int count, SEXP const *names) {
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

SEXP Rsh_Fir_mk_vector(Rsh_Fir_Kind const *kind, int count, SEXP const *values,
                       SEXP const *names) {
  if (!kind) {
    Rf_error("mk_vector requires a kind");
  }
  switch (kind->tag) {
  case RSH_FIR_KIND_PRIMITIVE_VECTOR: {
    SEXPTYPE type =
        kind->as.primitive.primitive == RSH_FIR_PRIMITIVE_LOGICAL
            ? LGLSXP
        : kind->as.primitive.primitive == RSH_FIR_PRIMITIVE_INTEGER
            ? INTSXP
        : kind->as.primitive.primitive == RSH_FIR_PRIMITIVE_REAL
            ? REALSXP
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
      SEXP nm = PROTECT(Rsh_Fir_make_names(count, names));
      if (nm != R_NilValue) {
        Rf_setAttrib(vec, R_NamesSymbol, nm);
      }
      UNPROTECT(1);
    }
    UNPROTECT(1);
    return vec;
  }
  case RSH_FIR_KIND_DOTS: {
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

static void Rsh_Fir_check_promise_env(Rsh_Fir_PromiseInfo const *info) {
  if (!info->env || TYPEOF(info->env) != ENVSXP) {
    Rf_error("Internal promise without environment");
  }
}

SEXP Rsh_Fir_make_promise(Rsh_Fir_PromiseFn fn, int ncaptures, SEXP const **captures, SEXP pool, SEXP env) {
  if (!fn) {
    Rf_error("Cannot create promise without function");
  }
  if (TYPEOF(env) != ENVSXP) {
    Rf_error("Promise environment must be ENVSXP");
  }
  Rsh_Fir_init_tags();
  Rsh_Fir_PromiseInfo *info = calloc(1, sizeof(Rsh_Fir_PromiseInfo));
  info->evaluate = fn;
  info->env = env;
  info->pool = pool;
  info->ncaptures = ncaptures;
  info->captures = calloc(ncaptures, sizeof(SEXP));
  memcpy(info->captures, captures, ncaptures * sizeof(SEXP));
  info->forced = 0;
  info->value = R_NilValue;
  R_PreserveObject(env);
  R_PreserveObject(pool);
  SEXP ext = PROTECT(R_MakeExternalPtr(info, Rsh_Fir_PromiseTag, R_NilValue));
  R_RegisterCFinalizerEx(ext, Rsh_Fir_promise_finalizer, FALSE);
  UNPROTECT(1);
  return ext;
}

SEXP Rsh_Fir_force(SEXP value) {
  Rsh_Fir_PromiseInfo *info = NULL;
  if (Rsh_Fir_is_compiled_promise(value, &info)) {
    Rsh_Fir_check_promise_env(info);
    if (!info->forced) {
      SEXP result = info->evaluate(info->pool, info->env, info->ncaptures, info->captures);
      R_PreserveObject(result);
      info->value = result;
      info->forced = 1;
    }
    return info->value;
  }
  if (TYPEOF(value) != PROMSXP) {
    Rf_error("Cannot force a non-promise");
  }
  if (!PROMISE_IS_EVALUATED(value)) {
    forcePromise(value);
  }
  return PRVALUE(value);
}

SEXP Rsh_Fir_maybe_force(SEXP value) {
  if (Rsh_Fir_is_compiled_promise(value, NULL) || TYPEOF(value) == PROMSXP) {
    return Rsh_Fir_force(value);
  }
  return value;
}

SEXP Rsh_Fir_reflective_load(SEXP promise, SEXP symbol) {
  Rsh_Fir_assert_symbol(symbol, "reflective_load symbol");
  Rsh_Fir_PromiseInfo *info = NULL;
  if (Rsh_Fir_is_compiled_promise(promise, &info)) {
    Rsh_Fir_check_promise_env(info);
    SEXP value = Rf_findVarInFrame(info->env, symbol);
    if (value == R_UnboundValue) {
      Rf_error("Variable not bound in promise environment");
    }
    return value;
  }
  if (TYPEOF(promise) != PROMSXP) {
    Rf_error("reflective_load requires a promise");
  }
  SEXP env = PRENV(promise);
  SEXP value = Rf_findVarInFrame(env, symbol);
  if (value == R_UnboundValue) {
    Rf_error("Variable not bound in promise environment");
  }
  return value;
}

SEXP Rsh_Fir_reflective_store(SEXP promise, SEXP symbol, SEXP value) {
  Rsh_Fir_assert_symbol(symbol, "reflective_store symbol");
  Rsh_Fir_PromiseInfo *info = NULL;
  if (Rsh_Fir_is_compiled_promise(promise, &info)) {
    Rsh_Fir_check_promise_env(info);
    Rf_defineVar(symbol, value, info->env);
    return value;
  }
  if (TYPEOF(promise) != PROMSXP) {
    Rf_error("reflective_store requires a promise");
  }
  Rf_defineVar(symbol, value, PRENV(promise));
  return value;
}

SEXP Rsh_Fir_subscript_read(SEXP vector, SEXP index) {
  int idx = Rf_asInteger(index);
  if (idx == NA_INTEGER) {
    Rf_error("Subscript index cannot be NA");
  }
  if (idx < 0 || (R_xlen_t)idx >= XLENGTH(vector)) {
    Rf_error("Subscript index out of bounds");
  }
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

SEXP Rsh_Fir_subscript_write(SEXP vector, SEXP index, SEXP value) {
  int idx = Rf_asInteger(index);
  if (idx == NA_INTEGER) {
    Rf_error("Subscript index cannot be NA");
  }
  if (idx < 0 || (R_xlen_t)idx >= XLENGTH(vector)) {
    Rf_error("Subscript index out of bounds");
  }
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

SEXP Rsh_Fir_super_load(SEXP symbol, SEXP env) {
  Rsh_Fir_assert_symbol(symbol, "super_load");
  if (TYPEOF(env) != ENVSXP) {
    Rf_error("super_load requires an environment");
  }
  SEXP parent = ENCLOS(env);
  while (parent != R_EmptyEnv && parent != R_NilValue) {
    SEXP value = Rf_findVarInFrame(parent, symbol);
    if (value != R_UnboundValue) {
      return value;
    }
    parent = ENCLOS(parent);
  }
  Rf_error("super_load could not locate variable in parents");
}

void Rsh_Fir_super_store(SEXP symbol, SEXP value, SEXP env) {
  Rsh_Fir_assert_symbol(symbol, "super_store");
  if (TYPEOF(env) != ENVSXP) {
    Rf_error("super_store requires an environment");
  }
  SEXP parent = ENCLOS(env);
  while (parent != R_EmptyEnv && parent != R_NilValue) {
    SEXP existing = Rf_findVarInFrame(parent, symbol);
    if (existing != R_UnboundValue) {
      Rf_defineVar(symbol, value, parent);
      return;
    }
    parent = ENCLOS(parent);
  }
  Rf_error("super_store could not locate variable in parents");
}

static SEXP Rsh_Fir_build_arglist(int argc, SEXP const *args,
                                  SEXP const *names, int *protect_count) {
  SEXP list = R_NilValue;
  for (int i = argc - 1; i >= 0; --i) {
    SEXP node = PROTECT(Rf_cons(args[i], list));
    (*protect_count)++;
    if (names) {
      SEXP name = names[i];
      if (name && name != R_MissingArg && name != R_NilValue) {
        if (TYPEOF(name) == SYMSXP) {
          SET_TAG(node, name);
        } else if (TYPEOF(name) == STRSXP && XLENGTH(name) > 0) {
          SEXP sym = Rf_install(CHAR(STRING_ELT(name, 0)));
          SET_TAG(node, sym);
        }
      }
    }
    list = node;
  }
  return list;
}

SEXP Rsh_Fir_call_builtin(int bltIdx, SEXP RHO, int argc, SEXP const *args) {
  FUNTAB fun = R_FunTab[bltIdx];
  if (fun.arity != -1 && fun.arity != argc) {
    Rf_error("Builtin %s called with incorrect number of arguments: expected %d, got %d",
             fun.name, fun.arity, argc);
  }

  int protect_count = 0;
  SEXP arglist = Rsh_Fir_build_arglist(argc, args, NULL, &protect_count);
  SEXP op = R_Primitive(fun.name);
  SEXP result = fun.cfun(R_NilValue, op, arglist, RHO);
  UNPROTECT(protect_count);
  return result;
}

SEXP Rsh_Fir_call_dynamic(SEXP callee, int argc, SEXP const *args,
                          SEXP const *names, SEXP env) {
  int protect_count = 0;
  SEXP arglist = Rsh_Fir_build_arglist(argc, args, names, &protect_count);
  SEXP call = PROTECT(Rf_lcons(callee, arglist));
  SEXP result = Rf_eval(call, env);
  UNPROTECT(protect_count + 1);
  return result;
}

int Rsh_Fir_is_true(SEXP value) {
  int logical = Rf_asLogical(value);
  if (logical == NA_LOGICAL) {
    Rf_error("Condition evaluated to NA");
  }
  return logical != 0;
}

void Rsh_Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP pool,
                   SEXP env) {
  (void)stack_size;
  (void)stack_values;
  (void)pool;
  (void)env;
  Rf_error("FIŘ deoptimization triggered at pc=%d (unsupported)", pc);
}

int Rsh_Fir_assume_constant(SEXP value, SEXP constant) {
  return R_compute_identical(value, constant, 0);
}

int Rsh_Fir_assume_function(SEXP value, Rsh_Fir_DispatchFn dispatch) {
  Rsh_Fir_ClosureInfo *info = NULL;
  if (!Rsh_Fir_is_compiled_closure(value, &info)) {
    return 0;
  }
  return info->dispatch == dispatch;
}

int Rsh_Fir_assume_type(SEXP value, Rsh_Fir_Type const *type) {
  return Rsh_Fir_value_matches(value, type);
}

NORET void Rsh_error(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  Rf_error(fmt, args);
  va_end(args);
}


#define DEFINE_DISPATCH_INTRINSIC_BODY(X)\
  DEFINE_DISPATCH_INTRINSIC(X) {\
    return Rsh_Fir_intrinsic_ ## X ## _v0(CCP, RHO, nparams, args);\
  }

DEFINE_DISPATCH_INTRINSIC_BODY(checkFun)
DEFINE_DISPATCH_INTRINSIC_BODY(checkMissing)
DEFINE_DISPATCH_INTRINSIC_BODY(toForSeq)
DEFINE_DISPATCH_INTRINSIC_BODY(setInvisible)
DEFINE_DISPATCH_INTRINSIC_BODY(setVisible)
DEFINE_DISPATCH_INTRINSIC_BODY(tryDispatchBuiltin)
DEFINE_DISPATCH_INTRINSIC_BODY(getTryDispatchBuiltinDispatched)
DEFINE_DISPATCH_INTRINSIC_BODY(getTryDispatchBuiltinValue)

DEFINE_INTRINSIC(checkFun, 0) {
  SEXP value = args[0];

  if (TYPEOF(value) != CLOSXP && TYPEOF(value) != BUILTINSXP &&
      TYPEOF(value) != SPECIALSXP) {
    Rf_error("attempt to apply non-function");
  }

  return R_NilValue;
}

DEFINE_INTRINSIC(checkMissing, 0) {
  SEXP value = args[0];

  if (value == R_MissingArg) {
    Rf_error("argument is missing, with no default");
  }

  return R_NilValue;
}

DEFINE_INTRINSIC(toForSeq, 0) {
  // TODO: idk what this should do. If the following works, this intrinsic should be removed.
  return args[0];
}

DEFINE_INTRINSIC(setInvisible, 0) {
  R_Visible = FALSE;
  return R_NilValue;
}

DEFINE_INTRINSIC(setVisible, 0) {
  R_Visible = TRUE;
  return R_NilValue;
}

DEFINE_INTRINSIC(tryDispatchBuiltin, 0) {
  return R_NilValue;
}

DEFINE_INTRINSIC(tryDispatchBuiltin, 1) {
  return R_NilValue;
}

DEFINE_INTRINSIC(getTryDispatchBuiltinDispatched, 0) {
  return R_FalseValue;
}

DEFINE_INTRINSIC(getTryDispatchBuiltinValue, 0) {
  Rf_error("unimplemented. Dispatch intrinsics will probably be removed and we'll prevent compiling this complex bytecode");
}

DEFINE_OVERRIDDEN_BUILTIN(add, 1) {
  return Rf_ScalarInteger(Rf_asInteger(args[0]) + Rf_asInteger(args[1]));
}

DEFINE_OVERRIDDEN_BUILTIN(add, 2) {
  return Rf_ScalarReal(Rf_asReal(args[0]) + Rf_asReal(args[1]));
}

DEFINE_OVERRIDDEN_BUILTIN(lt, 1) {
  return Rf_ScalarLogical(Rf_asInteger(args[0]) < Rf_asInteger(args[1]));
}

DEFINE_OVERRIDDEN_BUILTIN(eq, 1) {
  return Rf_ScalarLogical(Rf_asInteger(args[0]) == Rf_asInteger(args[1]));
}

DEFINE_OVERRIDDEN_BUILTIN(eq, 2) {
  return Rf_ScalarLogical(Rf_asReal(args[0]) == Rf_asReal(args[1]));
}

DEFINE_OVERRIDDEN_BUILTIN(eq, 3) {
  return Rf_ScalarLogical(Rf_asChar(STRING_ELT(args[0], 0)) == Rf_asChar(STRING_ELT(args[1], 0)));
}

DEFINE_OVERRIDDEN_BUILTIN(eq, 4) {
  return Rf_ScalarLogical(args[0] == args[1]);
}

DEFINE_OVERRIDDEN_BUILTIN(missing, 0) {
  return args[0] == R_MissingArg ? R_TrueValue : R_FalseValue;
}