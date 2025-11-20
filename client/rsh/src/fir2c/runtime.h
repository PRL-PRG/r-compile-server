#ifndef RSH_FIR_RUNTIME_H
#define RSH_FIR_RUNTIME_H

// THIS HEADER NEEDS TO BE A C-COMPATIBLE HEADER
// IT IS USED BY THE SERVER COMPILER

#include "../bc2c/runtime_internals.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  RSH_FIR_PRIMITIVE_LOGICAL = 0,
  RSH_FIR_PRIMITIVE_INTEGER = 1,
  RSH_FIR_PRIMITIVE_REAL = 2,
  RSH_FIR_PRIMITIVE_STRING = 3,
} Rsh_Fir_PrimitiveKind;

typedef struct Rsh_Fir_Kind Rsh_Fir_Kind;
typedef struct Rsh_Fir_Type Rsh_Fir_Type;
typedef struct Rsh_Fir_ParamTypes Rsh_Fir_ParamTypes;

typedef SEXP (*Rsh_Fir_DispatchFn)(SEXP pool, SEXP env, SEXP const *args,
                                   Rsh_Fir_ParamTypes const *param_types);
typedef SEXP (*Rsh_Fir_VersionFn)(SEXP pool, SEXP env, SEXP const *args);
typedef SEXP (*Rsh_Fir_PromiseFn)(SEXP pool, SEXP env);

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

Rsh_Fir_ParamTypes const *Rsh_Fir_param_types_empty(void);
Rsh_Fir_ParamTypes const *
Rsh_Fir_param_types_from_string(SEXP signature);

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
SEXP Rsh_Fir_make_promise(Rsh_Fir_PromiseFn fn, SEXP pool, SEXP env);
SEXP Rsh_Fir_reflective_load(SEXP promise, SEXP symbol);
SEXP Rsh_Fir_reflective_store(SEXP promise, SEXP symbol, SEXP value);
void Rsh_Fir_store(SEXP symbol, SEXP value, SEXP env);
SEXP Rsh_Fir_subscript_read(SEXP vector, SEXP index);
SEXP Rsh_Fir_subscript_write(SEXP vector, SEXP index, SEXP value);
SEXP Rsh_Fir_super_load(SEXP symbol, SEXP env);
void Rsh_Fir_super_store(SEXP symbol, SEXP value, SEXP env);
SEXP Rsh_Fir_call_dispatch(Rsh_Fir_DispatchFn dispatch, SEXP pool, SEXP env,
                           int argc, SEXP const *args,
                           Rsh_Fir_ParamTypes const *param_types);
SEXP Rsh_Fir_call_version(Rsh_Fir_VersionFn version, SEXP pool, SEXP env,
                          int argc, SEXP const *args);
SEXP Rsh_Fir_call_dynamic(SEXP callee, int argc, SEXP const *args,
                          SEXP const *names, SEXP pool, SEXP env);
int Rsh_Fir_is_true(SEXP value);
void Rsh_Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP pool,
                   SEXP env);
int Rsh_Fir_assume_constant(SEXP value, SEXP constant);
int Rsh_Fir_assume_function(SEXP value, Rsh_Fir_DispatchFn dispatch);
int Rsh_Fir_assume_type(SEXP value, Rsh_Fir_Type const *type);

#define Rsh_Fir_LoadFun_Local 0
#define Rsh_Fir_LoadFun_Global 1
#define Rsh_Fir_LoadFun_Base 2

#ifdef __cplusplus
}
#endif

#endif // RSH_FIR_RUNTIME_H
