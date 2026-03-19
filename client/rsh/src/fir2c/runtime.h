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
  FIR_KIND_PRIMITIVE_VECTOR1 = 7,
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
Fir_Kind Fir_kind_primitive_vector1(Fir_PrimitiveKind primitive_kind);

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
void Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP env);
bool Fir_assume_constant(SEXP value, SEXP constant);
bool Fir_assume_function(SEXP value, Fir_DispatchFn dispatch);
bool Fir_assume_builtin_function(SEXP value, int bltIdx);
bool Fir_assume_load_fun(SEXP symbol, SEXP env, Fir_DispatchFn dispatch);
bool Fir_assume_load_builtin_fun(SEXP symbol, SEXP env, int bltIdx);
bool Fir_assume_type(SEXP value, Fir_Type type);

void Fir_dbg_comment(const char* comment);
void Fir_dbg_sexp(const char* name, SEXP value);
void Fir_dbg_logical(const char* name, Rboolean value);
void Fir_dbg_int(const char* name, int value);
void Fir_dbg_float(const char* name, double value);
void Fir_dbg_string(const char* name, char* value);
void Fir_dbg_boolean(const char* name, bool value);
void Fir_dbg_signature(Fir_Signature signature);

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"

// Native-type-returning versions (for scalar types, bool)
#define DEFINE_INTRINSIC(ret, X, sig, ...)\
  ret Fir_ver_call_ ## X ## _ ## sig(SEXP env, ##__VA_ARGS__)

#define DEFINE_OVERRIDDEN_BUILTIN(ret, X, sig, ...)\
  ret Fir_ver_call_ ## X ## _ ## sig(SEXP env, ##__VA_ARGS__)

#pragma clang diagnostic pop

DEFINE_INTRINSIC(SEXP, checkFun, value_fx_none_ret_value, SEXP value);
DEFINE_INTRINSIC(SEXP, checkMissing, value_fx_none_ret_value, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, value_fx_impure_ret_value, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, value_fx_reflect_ret_value, SEXP value);
DEFINE_INTRINSIC(SEXP, setInvisible, fx_none_ret_value);
DEFINE_INTRINSIC(SEXP, setVisible, fx_none_ret_value);
DEFINE_INTRINSIC(bool, naToFalse, vec_logical_fx_none_ret_bool, SEXP value);

// box: scalar → vector (length-1 SEXP)
DEFINE_INTRINSIC(SEXP, box, scalar_logical_fx_none_ret_vec_logical, Rboolean value);
DEFINE_INTRINSIC(SEXP, box, scalar_int_fx_none_ret_vec_int, int value);
DEFINE_INTRINSIC(SEXP, box, scalar_real_fx_none_ret_vec_real, double value);
DEFINE_INTRINSIC(SEXP, box, scalar_string_fx_none_ret_vec_string, char* value);

// unbox: vector (length-1 SEXP) → scalar
DEFINE_INTRINSIC(Rboolean, unbox, vec_logical_fx_none_ret_scalar_logical, SEXP value);
DEFINE_INTRINSIC(int, unbox, vec_int_fx_none_ret_scalar_int, SEXP value);
DEFINE_INTRINSIC(double, unbox, vec_real_fx_none_ret_scalar_real, SEXP value);
DEFINE_INTRINSIC(char*, unbox, vec_string_fx_none_ret_scalar_string, SEXP value);

// +: I+I→I, R+R→R, I+R→R, R+I→R, vI+vI→vI, vR+vR→vR, vI+vR→vR, vR+vI→vR
DEFINE_OVERRIDDEN_BUILTIN(int, _u2b, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2b, vec_int_vec_int_fx_none_ret_vec_int, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2b, vec_real_vec_real_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2b, vec_int_vec_real_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2b, vec_real_vec_int_fx_none_ret_vec_real, SEXP a, SEXP b);
// +: unary versions
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2b, vec_int_missing_fx_none_ret_vec_int, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2b, vec_real_missing_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(int, _u2b, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b);
// -: same layout as +
DEFINE_OVERRIDDEN_BUILTIN(int, _u2d, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2d, vec_int_vec_int_fx_none_ret_vec_int, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2d, vec_real_vec_real_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2d, vec_int_vec_real_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2d, vec_real_vec_int_fx_none_ret_vec_real, SEXP a, SEXP b);
// -: unary versions
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2d, vec_int_missing_fx_none_ret_vec_int, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2d, vec_real_missing_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(int, _u2d, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b);
// *: same layout as + (no unary)
DEFINE_OVERRIDDEN_BUILTIN(int, _u2a, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2a, vec_int_vec_int_fx_none_ret_vec_int, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2a, vec_real_vec_real_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2a, vec_int_vec_real_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2a, vec_real_vec_int_fx_none_ret_vec_real, SEXP a, SEXP b);
// /: I/I→R, R/R→R, I/R→R, R/I→R, vI/vI→vR, vR/vR→vR, vI/vR→vR, vR/vI→vR
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2f, vec_int_vec_int_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2f, vec_real_vec_real_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2f, vec_int_vec_real_fx_none_ret_vec_real, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u2f, vec_real_vec_int_fx_none_ret_vec_real, SEXP a, SEXP b);
// :: I:I→vI, I:R→vI, R:R→V, vI:vI→vI, vI:vR→vI, vR:vR→V
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_int_fx_none_ret_vec_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_real_fx_none_ret_vec_int, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_real_scalar_real_fx_none_ret_value, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, vec_int_vec_int_fx_none_ret_vec_int, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, vec_int_vec_real_fx_none_ret_vec_int, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, vec_real_vec_real_fx_none_ret_value, SEXP a, SEXP b);
// <: vI<vI→vL, vR<vR→vL, vI<vR→vL, vR<vI→vL,
//    I<I→L, R<R→L, I<R→L, R<I→L,
//    I<I→B, R<R→B, I<R→B, R<I→B
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3c, vec_int_vec_int_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3c, vec_real_vec_real_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3c, vec_int_vec_real_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3c, vec_real_vec_int_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_int_scalar_real_fx_none_ret_bool, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_real_scalar_int_fx_none_ret_bool, double a, int b);
// <=: same layout as <
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3c_u3d, vec_int_vec_int_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3c_u3d, vec_real_vec_real_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3c_u3d, vec_int_vec_real_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3c_u3d, vec_real_vec_int_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_bool, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_bool, double a, int b);
// ==: L==L→B, I==I→B, R==R→B, S==S→B, vL==vL→vL, vI==vI→vL, vR==vR→vL, vS==vS→vL, cls==cls→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_logical_scalar_logical_fx_none_ret_bool, Rboolean a, Rboolean b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_bool, char* a, char* b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3d_u3d, vec_logical_vec_logical_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3d_u3d, vec_int_vec_int_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3d_u3d, vec_real_vec_real_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3d_u3d, vec_string_vec_string_fx_none_ret_vec_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, closure_closure_fx_none_ret_bool, SEXP a, SEXP b);

// log: I,R→R, R,R→R, vI,vR→vR, vR,vR→vR
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_int_scalar_real_fx_none_ret_scalar_real, int value, double base);
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_real_scalar_real_fx_none_ret_scalar_real, double value, double base);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, log, vec_int_vec_real_fx_none_ret_vec_real, SEXP value, SEXP base);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, log, vec_real_vec_real_fx_none_ret_vec_real, SEXP value, SEXP base);
// abs: I→I, R→R, vI→vI, vR→vR
DEFINE_OVERRIDDEN_BUILTIN(int, abs, scalar_int_fx_none_ret_scalar_int, int value);
DEFINE_OVERRIDDEN_BUILTIN(double, abs, scalar_real_fx_none_ret_scalar_real, double value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, abs, vec_int_fx_none_ret_vec_int, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, abs, vec_real_fx_none_ret_vec_real, SEXP value);

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

// math1: I→R, R→R, vI→vR, vR→vR
#define V(name, func)\
  DEFINE_OVERRIDDEN_BUILTIN(double, name, scalar_int_fx_none_ret_scalar_real, int value);\
  DEFINE_OVERRIDDEN_BUILTIN(double, name, scalar_real_fx_none_ret_scalar_real, double value);\
  DEFINE_OVERRIDDEN_BUILTIN(SEXP, name, vec_int_fx_none_ret_vec_real, SEXP value);\
  DEFINE_OVERRIDDEN_BUILTIN(SEXP, name, vec_real_fx_none_ret_vec_real, SEXP value);
DEFINE_MATH1_BUILTINS(V)
#undef V

DEFINE_OVERRIDDEN_BUILTIN(SEXP, length, value_fx_none_ret_vec_int, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(int, length, value_fx_none_ret_scalar_int, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(int, as_u2einteger, value_fx_none_ret_scalar_int, SEXP value);  // as.integer
DEFINE_OVERRIDDEN_BUILTIN(SEXP, as_u2elogical, value_fx_none_ret_vec_logical, SEXP value);  // as.logical: V→v(L)
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, as_u2elogical, value_fx_none_ret_scalar_logical, SEXP value);  // as.logical: V→L
DEFINE_OVERRIDDEN_BUILTIN(bool, as_u2elogical, value_fx_none_ret_bool, SEXP value);  // as.logical: V→B
DEFINE_OVERRIDDEN_BUILTIN(char*, as_u2echaracter, value_fx_none_ret_scalar_string, SEXP value);  // as.character

#ifdef __cplusplus
}
#endif
