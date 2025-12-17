#ifndef RSH_FIR_RUNTIME_H
#define RSH_FIR_RUNTIME_H

// THIS HEADER NEEDS TO BE A C-COMPATIBLE HEADER
// IT IS USED BY THE SERVER COMPILER

#include "../common2c/runtime.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  RSH_FIR_PRIMITIVE_LOGICAL = 0,
  RSH_FIR_PRIMITIVE_INTEGER = 1,
  RSH_FIR_PRIMITIVE_REAL = 2,
  RSH_FIR_PRIMITIVE_STRING = 3,
} Rsh_Fir_PrimitiveKind;

typedef enum {
  RSH_FIR_KIND_ANY = 0,
  RSH_FIR_KIND_ANY_VALUE = 1,
  RSH_FIR_KIND_PRIMITIVE_SCALAR = 2,
  RSH_FIR_KIND_PRIMITIVE_VECTOR = 3,
  RSH_FIR_KIND_CLOSURE = 4,
  RSH_FIR_KIND_DOTS = 5,
  RSH_FIR_KIND_PROMISE = 6,
} Rsh_Fir_KindTag;

typedef struct Rsh_Fir_Type Rsh_Fir_Type;
typedef struct {
  Rsh_Fir_KindTag tag;
  union {
    struct {
      int primitive;
    } primitive;
    struct {
      Rsh_Fir_Type const *value_type;
      int reflect;
    } promise;
  } as;
} Rsh_Fir_Kind;

typedef struct Rsh_Fir_Type {
  Rsh_Fir_Kind const *kind;
  int ownership;
  int definite;
} Rsh_Fir_Type;

typedef SEXP (*Rsh_Fir_DispatchFn)(SEXP pool, SEXP env, int nargs, SEXP const *args,
                                   Rsh_Fir_Type const *param_types);
typedef SEXP (*Rsh_Fir_VersionFn)(SEXP pool, SEXP env, int nargs, SEXP const *args);
typedef SEXP (*Rsh_Fir_PromiseFn)(SEXP pool, SEXP env, int ncaptures, SEXP const **captures);

extern Rsh_Fir_Kind const *Rsh_Fir_kind_any;
extern Rsh_Fir_Kind const *Rsh_Fir_kind_anyValue;
extern Rsh_Fir_Kind const *Rsh_Fir_kind_closure;
extern Rsh_Fir_Kind const *Rsh_Fir_kind_dots;

Rsh_Fir_Kind const *Rsh_Fir_kind_primitiveScalar(int primitive_kind);
Rsh_Fir_Kind const *Rsh_Fir_kind_primitiveVector(int primitive_kind);
Rsh_Fir_Kind const *Rsh_Fir_kind_promise(Rsh_Fir_Type const *value_type,
                                         bool reflect);

Rsh_Fir_Type const *Rsh_Fir_type(Rsh_Fir_Kind const *kind, int ownership,
                                 bool definite);

Rsh_Fir_Type const *Rsh_Fir_param_types_empty(void);

SEXP Rsh_Fir_cast(SEXP value, Rsh_Fir_Type const *type);
SEXP Rsh_Fir_make_closure(Rsh_Fir_DispatchFn dispatch, SEXP env, SEXP pool);
SEXP Rsh_Fir_dup(SEXP value);
SEXP Rsh_Fir_force(SEXP value);
SEXP Rsh_Fir_maybe_force(SEXP value);
SEXP Rsh_Fir_load(SEXP symbol, SEXP env);
SEXP Rsh_Fir_load_fun(int env_selector, SEXP symbol, SEXP env);
void Rsh_Fir_push_env(SEXP *env);
void Rsh_Fir_pop_env(SEXP *env);
SEXP Rsh_Fir_mk_vector(Rsh_Fir_Kind const *kind, int count, SEXP const *values,
                       SEXP const *names);
SEXP Rsh_Fir_make_promise(Rsh_Fir_PromiseFn fn, int ncaptures, SEXP const **captures, SEXP pool, SEXP env);
SEXP Rsh_Fir_reflective_load(SEXP promise, SEXP symbol);
SEXP Rsh_Fir_reflective_store(SEXP promise, SEXP symbol, SEXP value);
void Rsh_Fir_store(SEXP symbol, SEXP value, SEXP env);
SEXP Rsh_Fir_subscript_read(SEXP vector, SEXP index);
SEXP Rsh_Fir_subscript_write(SEXP vector, SEXP index, SEXP value);
SEXP Rsh_Fir_super_load(SEXP symbol, SEXP env);
void Rsh_Fir_super_store(SEXP symbol, SEXP value, SEXP env);
SEXP Rsh_Fir_call_builtin(int bltIdx, SEXP RHO, int argc, SEXP const *args);
SEXP Rsh_Fir_call_dynamic(SEXP callee, int argc, SEXP const *args,
                          SEXP const *names, SEXP env);
SEXP Rsh_Fir_call_from_R(SEXP calleeName, SEXP args, SEXP pool, SEXP env);
int Rsh_Fir_is_true(SEXP value);
void Rsh_Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP pool,
                   SEXP env);
int Rsh_Fir_assume_constant(SEXP value, SEXP constant);
int Rsh_Fir_assume_function(SEXP value, Rsh_Fir_DispatchFn dispatch);
int Rsh_Fir_assume_type(SEXP value, Rsh_Fir_Type const *type);

#define Rsh_Fir_LoadFun_Local 0
#define Rsh_Fir_LoadFun_Global 1
#define Rsh_Fir_LoadFun_Base 2

NORET void Rsh_error(const char *fmt, ...);

#define DEFINE_DISPATCH_INTRINSIC(X)\
  SEXP Rsh_Fir_intrinsic_ ## X(SEXP CCP, SEXP RHO, int nparams, SEXP const *args,\
                                      Rsh_Fir_Type const *param_types)

DEFINE_DISPATCH_INTRINSIC(checkFun);
DEFINE_DISPATCH_INTRINSIC(checkMissing);
DEFINE_DISPATCH_INTRINSIC(toForSeq);
DEFINE_DISPATCH_INTRINSIC(setInvisible);
DEFINE_DISPATCH_INTRINSIC(setVisible);
DEFINE_DISPATCH_INTRINSIC(tryDispatchBuiltin);
DEFINE_DISPATCH_INTRINSIC(getTryDispatchBuiltinDispatched);
DEFINE_DISPATCH_INTRINSIC(getTryDispatchBuiltinValue);

#define DEFINE_INTRINSIC(X, n)\
  SEXP Rsh_Fir_intrinsic_ ## X ## _v ## n(SEXP CCP, SEXP RHO, int nparams, SEXP const *args)
DEFINE_INTRINSIC(checkFun, 0);
DEFINE_INTRINSIC(checkMissing, 0);
DEFINE_INTRINSIC(toForSeq, 0);
DEFINE_INTRINSIC(setInvisible, 0);
DEFINE_INTRINSIC(setVisible, 0);
DEFINE_INTRINSIC(tryDispatchBuiltin, 0);
DEFINE_INTRINSIC(tryDispatchBuiltin, 1);
DEFINE_INTRINSIC(getTryDispatchBuiltinDispatched, 0);
DEFINE_INTRINSIC(getTryDispatchBuiltinValue, 0);

#define DEFINE_OVERRIDDEN_BUILTIN(X, n)\
  SEXP Rsh_Fir_builtin_ ## X ## _v ## n(SEXP CCP, SEXP RHO, int nparams, SEXP const *args)
DEFINE_OVERRIDDEN_BUILTIN(add, 1);
DEFINE_OVERRIDDEN_BUILTIN(add, 2);
DEFINE_OVERRIDDEN_BUILTIN(lt, 1);
DEFINE_OVERRIDDEN_BUILTIN(eq, 1);
DEFINE_OVERRIDDEN_BUILTIN(eq, 2);
DEFINE_OVERRIDDEN_BUILTIN(eq, 3);
DEFINE_OVERRIDDEN_BUILTIN(eq, 4);
DEFINE_OVERRIDDEN_BUILTIN(missing, 0);

#ifdef __cplusplus
}
#endif

#endif // RSH_FIR_RUNTIME_H
