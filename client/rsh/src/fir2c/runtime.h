#pragma once

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
  FIR_KIND_ANY_VALUE = 0,
  FIR_KIND_PRIMITIVE_SCALAR = 1,
  FIR_KIND_PRIMITIVE_VECTOR = 2,
  FIR_KIND_CLOSURE = 3,
  FIR_KIND_DOTS = 4,
  FIR_KIND_MISSING = 5,
  FIR_KIND_BOOLEAN = 6,
} Fir_KindTag;

typedef enum {
  FIR_FRESH = 0,
  FIR_OWNED = 1,
  FIR_BORROWED = 2,
  FIR_SHARED = 3,
} Fir_Ownership;

typedef enum {
  FIR_EFFECTS_NONE = 0,
  FIR_EFFECTS_IMPURE = 1,
  FIR_EFFECTS_REFLECT = 2,
} Fir_Effects;

typedef struct {
  Fir_KindTag tag;
  union {
    struct {
      int primitive;
    } primitive;
  } as;
} Fir_Kind;

typedef enum {
  FIR_PROMISITY_VALUE = 0,
  FIR_PROMISITY_MAYBE = 1,
  FIR_PROMISITY_PROMISE = 2,
} Fir_PromisityTag;

typedef struct {
  Fir_PromisityTag tag;
  Fir_Effects effects;
} Fir_Promisity;

typedef struct Fir_Type {
  Fir_Kind kind;
  Fir_Promisity promisity;
  Fir_Ownership ownership;
  bool definite;
} Fir_Type;

typedef struct Fir_Signature {
  Fir_Type return_type;
  int param_count;
  Fir_Type const *param_types;
  Fir_Effects effects;
} Fir_Signature;

typedef SEXP (*Fir_DispatchFn)(SEXP env, Fir_Signature signature, ...);
typedef SEXP (*Fir_VersionFn)(SEXP env, ...);
typedef SEXP (*Fir_PromiseFn)(SEXP env, SEXP **captures);

typedef struct Fir_FunctionData {
  const char* name;
  Fir_DispatchFn dispatch;
  SEXP formal_names;
} Fir_FunctionData;

typedef struct Fir_PromiseGlobalData {
  Fir_PromiseFn eval;
  Fir_Type value_type;
  Fir_Effects effects;
} Fir_PromiseGlobalData;

typedef struct Fir_PromiseLocalData {
  SEXP **captures;
} Fir_PromiseLocalData;

extern Fir_Kind Fir_kind_any_value;
extern Fir_Kind Fir_kind_closure;
extern Fir_Kind Fir_kind_dots;
extern Fir_Kind Fir_kind_missing;
extern Fir_Kind Fir_kind_boolean;

void Fir_print_signature(Fir_Signature signature);
void Fir_print_type(Fir_Type type);
void Fir_print_kind(Fir_Kind kind);
void Fir_print_primitive_kind(Fir_PrimitiveKind primitive);
void Fir_print_promisity(Fir_Promisity promisity);
void Fir_print_ownership(Fir_Ownership ownership);
void Fir_print_concreteness(bool definite);
void Fir_print_effects(Fir_Effects effects);
bool Fir_effects_impure(Fir_Effects effects);
bool Fir_effects_reflect(Fir_Effects effects);
bool Fir_is_subeffects(Fir_Effects a, Fir_Effects b);
Fir_Effects Fir_effects_union(Fir_Effects a, Fir_Effects b);
Fir_Effects Fir_effects_intersect(Fir_Effects a, Fir_Effects b);

bool Fir_is_compiled_closure(SEXP value, Fir_FunctionData **data);
bool Fir_is_compiled_promise(SEXP value, Fir_PromiseGlobalData **global_data, Fir_PromiseLocalData **local_data);

Fir_Kind Fir_kind_primitive_scalar(Fir_PrimitiveKind primitive_kind);
Fir_Kind Fir_kind_primitive_vector(Fir_PrimitiveKind primitive_kind);

extern Fir_Promisity Fir_promisity_value;
Fir_Promisity Fir_promisity_maybe(Fir_Effects effects);
Fir_Promisity Fir_promisity_promise(Fir_Effects effects);

Fir_Type Fir_type(Fir_Kind kind, Fir_Promisity promisity, Fir_Ownership ownership, bool definite);
bool Fir_is_subtype(Fir_Type this_type, Fir_Type other_type);
bool Fir_value_matches(SEXP value, Fir_Type type);

Fir_Signature Fir_signature(Fir_Type return_type, int param_count, Fir_Type const *param_types, Fir_Effects effects);

SEXP Fir_mk_closure(Rsh_code dispatchFromR, SEXP formals, SEXP cp, SEXP env);
SEXP Fir_mk_promise(Rsh_code evalFromR, SEXP cp, SEXP **captures, SEXP env);

SEXP Fir_cast(SEXP value, Fir_Type type);
SEXP Fir_dup(SEXP value);
SEXP Fir_force(SEXP promise);
SEXP Fir_maybe_force(SEXP valueOrPromise);
SEXP Fir_safe_force(SEXP valueOrPromise);
SEXP Fir_load(SEXP symbol, SEXP env);
void Fir_set_env_pushed_from_r(SEXP env, SEXP* outer_env, bool* push_suppressed);
void Fir_unset_env_pushed_from_r(SEXP outer_env, bool push_suppressed);
void Fir_push_env(SEXP *env);
void Fir_pop_env(SEXP *env);
SEXP Fir_mk_vector(Fir_Kind kind, int count, SEXP const *values, SEXP const *names);
SEXP Fir_reflective_load(SEXP promise, SEXP symbol);
SEXP Fir_reflective_store(SEXP promise, SEXP symbol, SEXP value);
SEXP Fir_subscript_read(SEXP vector, SEXP index);
SEXP Fir_subscript_write(SEXP vector, SEXP index, SEXP value);
SEXP Fir_super_load(SEXP symbol, SEXP env);
void Fir_super_store(SEXP symbol, SEXP value, SEXP env);
SEXP Fir_call_builtin(int bltIdx, SEXP env, int argc, SEXP *args, SEXP *names);
SEXP Fir_call_dynamic(SEXP callee, SEXP env, int argc, SEXP *args, SEXP *names);
bool Fir_is_true(SEXP value);
void Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP env);
bool Fir_assume_constant(SEXP value, SEXP constant);
bool Fir_assume_function(SEXP value, Fir_DispatchFn dispatch);
bool Fir_assume_builtin_function(SEXP value, int bltIdx);
bool Fir_assume_load_fun(SEXP symbol, SEXP env, Fir_DispatchFn dispatch);
bool Fir_assume_load_builtin_fun(SEXP symbol, SEXP env, int bltIdx);
bool Fir_assume_type(SEXP value, Fir_Type type);

void Fir_dbg_comment(const char* comment);
void Fir_dbg_sexp(const char* name, SEXP value);
void Fir_dbg_signature(Fir_Signature signature);

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"

#define DEFINE_INTRINSIC(X, n, ...)\
  SEXP Fir_ver_call_ ## X ## _v ## n(SEXP env, ##__VA_ARGS__)

#define DEFINE_OVERRIDDEN_BUILTIN(X, n, ...)\
  SEXP Fir_ver_call_ ## X ## _v ## n(SEXP env, ##__VA_ARGS__)

#pragma clang diagnostic pop

DEFINE_INTRINSIC(checkFun, 0, SEXP value);
DEFINE_INTRINSIC(checkMissing, 0, SEXP value);
DEFINE_INTRINSIC(toForSeq, 0, SEXP value);
DEFINE_INTRINSIC(setInvisible, 0);
DEFINE_INTRINSIC(setVisible, 0);
DEFINE_INTRINSIC(naToFalse, 0, SEXP value);

// +: v1=I+I→I, v2=R+R→R, v3=I+R→R, v4=R+I→R, v5=vI+vI→vI, v6=vR+vR→vR, v7=vI+vR→vR, v8=vR+vI→vR
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 1, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 2, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 3, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 4, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 5, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 6, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 7, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 8, SEXP a, SEXP b);
// -: same layout as +
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 1, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 2, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 3, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 4, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 5, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 6, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 7, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 8, SEXP a, SEXP b);
// *: same layout as +
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 1, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 2, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 3, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 4, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 5, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 6, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 7, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 8, SEXP a, SEXP b);
// /: v1=I/I→R, v2=R/R→R, v3=I/R→R, v4=R/I→R, v5..v8=vector versions
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 1, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 2, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 3, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 4, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 5, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 6, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 7, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 8, SEXP a, SEXP b);
// :: v1=I:I→vI, v2=I:R→vI, v3=R:R→V, v4=vI:vI→vI, v5=vI:vR→vI, v6=vR:vR→V
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 1, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 2, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 3, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 4, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 5, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 6, SEXP a, SEXP b);
// <: v1=I<I→L, v2=R<R→L, v3=I<R→L, v4=R<I→L, v5..v8=vector versions
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 1, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 2, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 3, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 4, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 5, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 6, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 7, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 8, SEXP a, SEXP b);
// <=: same layout as <
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 1, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 2, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 3, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 4, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 5, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 6, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 7, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 8, SEXP a, SEXP b);
// ==: v1=L==L, v2=I==I, v3=R==R, v4=S==S, v5..v8=vector, v9=cls==cls
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 1, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 2, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 3, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 4, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 5, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 6, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 7, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 8, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 9, SEXP a, SEXP b);

// log: v1=I,R→R, v2=R,R→R, v3=vI,vR→vR, v4=vR,vR→vR
DEFINE_OVERRIDDEN_BUILTIN(log, 1, SEXP value, SEXP base);
DEFINE_OVERRIDDEN_BUILTIN(log, 2, SEXP value, SEXP base);
DEFINE_OVERRIDDEN_BUILTIN(log, 3, SEXP value, SEXP base);
DEFINE_OVERRIDDEN_BUILTIN(log, 4, SEXP value, SEXP base);
// abs: v1=I→I, v2=R→R, v3=vI→vI, v4=vR→vR
DEFINE_OVERRIDDEN_BUILTIN(abs, 1, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(abs, 2, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(abs, 3, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(abs, 4, SEXP value);

#define DEFINE_MATH1_BUILTINS(V)\
  V(sqrt, sqrt)\
  V(exp, exp)\
  V(floor, floor)\
  V(ceiling, ceil)\
  V(sign, Fir_sign)\
  V(expm1, expm1)\
  V(log1p, log1p)\
  V(cos, cos)\
  V(sin, sin)\
  V(tan, tan)\
  V(acos, acos)\
  V(asin, asin)\
  V(atan, atan)\
  V(cosh, cosh)\
  V(sinh, sinh)\
  V(tanh, tanh)\
  V(acosh, acosh)\
  V(asinh, asinh)\
  V(atanh, atanh)\
  V(lgamma, lgamma)
// TODO: import from Rmath.h
//  V(gamma, gammaf)\
//  V(digamma, digamma)\
//  V(trigamma, trigamma)\
//  V(cospi, cospi)\
//  V(sinpi, sinpi)\
//  V(tanpi, tanpi)

// math1: v1=I→R, v2=R→R, v3=vI→vR, v4=vR→vR
#define V(name, func)\
  DEFINE_OVERRIDDEN_BUILTIN(name, 1, SEXP value);\
  DEFINE_OVERRIDDEN_BUILTIN(name, 2, SEXP value);\
  DEFINE_OVERRIDDEN_BUILTIN(name, 3, SEXP value);\
  DEFINE_OVERRIDDEN_BUILTIN(name, 4, SEXP value);
DEFINE_MATH1_BUILTINS(V)
#undef V

DEFINE_OVERRIDDEN_BUILTIN(length, 1, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(as_u2einteger, 1, SEXP value);  // as.integer
DEFINE_OVERRIDDEN_BUILTIN(as_u2elogical, 1, SEXP value);  // as.logical
DEFINE_OVERRIDDEN_BUILTIN(as_u2echaracter, 1, SEXP value);  // as.character

#ifdef __cplusplus
}
#endif
