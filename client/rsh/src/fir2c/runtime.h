#ifndef FIR_RUNTIME_H
#define FIR_RUNTIME_H

// THIS HEADER NEEDS TO BE A C-COMPATIBLE HEADER
// IT IS USED BY THE SERVER COMPILER

#include "../common2c/runtime.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  FIR_PRIMITIVE_LOGICAL = 0,
  FIR_PRIMITIVE_INTEGER = 1,
  FIR_PRIMITIVE_REAL = 2,
  FIR_PRIMITIVE_STRING = 3,
} Fir_PrimitiveKind;

typedef enum {
  FIR_KIND_ANY = 0,
  FIR_KIND_ANY_VALUE = 1,
  FIR_KIND_PRIMITIVE_SCALAR = 2,
  FIR_KIND_PRIMITIVE_VECTOR = 3,
  FIR_KIND_CLOSURE = 4,
  FIR_KIND_DOTS = 5,
  FIR_KIND_PROMISE = 6,
} Fir_KindTag;

typedef struct Fir_Type Fir_Type;
typedef struct {
  Fir_KindTag tag;
  union {
    struct {
      int primitive;
    } primitive;
    struct {
      Fir_Type const* value_type;
      bool reflect;
    } promise;
  } as;
} Fir_Kind;

typedef struct Fir_Type {
  Fir_Kind kind;
  int ownership;
  bool definite;
} Fir_Type;

typedef struct Fir_Signature {
  Fir_Type return_type;
  int param_count;
  Fir_Type const *param_types;
} Fir_Signature;

typedef SEXP (*Fir_DispatchFn)(SEXP env, Fir_Signature signature, ...);
typedef SEXP (*Fir_VersionFn)(SEXP env, ...);
typedef SEXP (*Fir_PromiseFn)(SEXP env, SEXP const **captures);

extern Fir_Kind Fir_kind_any;
extern Fir_Kind Fir_kind_anyValue;
extern Fir_Kind Fir_kind_closure;
extern Fir_Kind Fir_kind_dots;

Fir_Kind Fir_kind_primitiveScalar(int primitive_kind);
Fir_Kind Fir_kind_primitiveVector(int primitive_kind);
Fir_Kind Fir_kind_promise(Fir_Type const* value_type, bool reflect);

Fir_Type Fir_type(Fir_Kind kind, int ownership, bool definite);

Fir_Signature Fir_signature(Fir_Type return_type, int param_count, Fir_Type const *param_types);

SEXP Fir_mk_closure(Rsh_closure dispatchFromR, Fir_DispatchFn dispatch, SEXP formals, SEXP cp,
                    SEXP env);
SEXP Fir_mk_promise(Rsh_closure evalFromR, Fir_PromiseFn eval, Fir_Type value_type,
                    SEXP const **captures, SEXP cp, SEXP env);

SEXP Fir_cast(SEXP value, Fir_Type type);
SEXP Fir_dup(SEXP value);
SEXP Fir_force(SEXP promise);
SEXP Fir_maybe_force(SEXP valueOrPromise);
SEXP Fir_load(SEXP symbol, SEXP env);
SEXP Fir_load_fun(int env_selector, SEXP symbol, SEXP env);
void Fir_push_env(SEXP *env);
void Fir_pop_env(SEXP *env);
SEXP Fir_mk_vector(Fir_Kind kind, int count, SEXP const *values, SEXP const *names);
SEXP Fir_reflective_load(SEXP promise, SEXP symbol);
SEXP Fir_reflective_store(SEXP promise, SEXP symbol, SEXP value);
void Fir_store(SEXP symbol, SEXP value, SEXP env);
SEXP Fir_subscript_read(SEXP vector, SEXP index);
SEXP Fir_subscript_write(SEXP vector, SEXP index, SEXP value);
SEXP Fir_super_load(SEXP symbol, SEXP env);
void Fir_super_store(SEXP symbol, SEXP value, SEXP env);
SEXP Fir_call_builtin(int bltIdx, SEXP env, int argc, SEXP const *args);
SEXP Fir_call_dynamic(SEXP callee, SEXP env, int argc, SEXP const *args, SEXP const *names);
bool Fir_is_true(SEXP value);
void Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP env);
bool Fir_assume_constant(SEXP value, SEXP constant);
bool Fir_assume_function(SEXP value, Fir_DispatchFn dispatch);
bool Fir_assume_type(SEXP value, Fir_Type type);

#define Fir_LoadFun_Local 0
#define Fir_LoadFun_Global 1
#define Fir_LoadFun_Base 2

#define DEFINE_DISPATCH_INTRINSIC(X)\
  SEXP Fir_intrinsic_ ## X(SEXP env, Fir_Signature signature, ...)

DEFINE_DISPATCH_INTRINSIC(checkFun);
DEFINE_DISPATCH_INTRINSIC(checkMissing);
DEFINE_DISPATCH_INTRINSIC(toForSeq);
DEFINE_DISPATCH_INTRINSIC(setInvisible);
DEFINE_DISPATCH_INTRINSIC(setVisible);
DEFINE_DISPATCH_INTRINSIC(tryDispatchBuiltin);
DEFINE_DISPATCH_INTRINSIC(getTryDispatchBuiltinDispatched);
DEFINE_DISPATCH_INTRINSIC(getTryDispatchBuiltinValue);

#define DEFINE_INTRINSIC(X, n, ...)\
  SEXP Fir_intrinsic_ ## X ## _v ## n(SEXP env, __VA_ARGS__)
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
  SEXP Fir_builtin_ ## X ## _v ## n(SEXP CCP, SEXP env, int nparams, SEXP const *args)
DEFINE_OVERRIDDEN_BUILTIN(add, 1);
DEFINE_OVERRIDDEN_BUILTIN(add, 2);
DEFINE_OVERRIDDEN_BUILTIN(lt, 1);
DEFINE_OVERRIDDEN_BUILTIN(eq, 1);
DEFINE_OVERRIDDEN_BUILTIN(eq, 2);
DEFINE_OVERRIDDEN_BUILTIN(eq, 3);
DEFINE_OVERRIDDEN_BUILTIN(eq, 4);
DEFINE_OVERRIDDEN_BUILTIN(missing, 0);
DEFINE_OVERRIDDEN_BUILTIN(asInteger, 1);
DEFINE_OVERRIDDEN_BUILTIN(asLogical, 1);
DEFINE_OVERRIDDEN_BUILTIN(asCharacter, 1);

#ifdef __cplusplus
}
#endif

#endif // FIR_RUNTIME_H
