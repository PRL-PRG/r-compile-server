#pragma once

// THIS HEADER NEEDS TO BE A C-COMPATIBLE HEADER
// IT IS USED BY THE SERVER COMPILER

#include "../common2c/runtime_internals.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// FIXME: use the SCALAR_ macros
#define Fir_const(env, idx) ((SEXP *)STDVEC_DATAPTR((env)))[(idx)]
#define Fir_set_const(env, idx, value) ((SEXP *)STDVEC_DATAPTR((env)))[(idx)] = (value)

typedef enum {
  FIR_MKENV_REGULAR,
  FIR_MKENV_NON_REFLECTIVE,
  FIR_MKENV_ELIDED,
} Fir_MkEnvType;

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
typedef SEXP (*Fir_PromiseFn)(SEXP env, void **captures);

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
  void **captures;
} Fir_PromiseLocalData;

extern Fir_Kind Fir_kind_any_value;
extern Fir_Kind Fir_kind_closure;
extern Fir_Kind Fir_kind_dots;
extern Fir_Kind Fir_kind_missing;
extern Fir_Kind Fir_kind_boolean;

/// Scalar string of a serialized `MockModuleFeedback` containing feedback for every
/// compiled closure stored in the constant pool and (recursively) every found closure's
/// constant pool.
SEXP Fir_serialized_feedback(SEXP pool);

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
bool Fir_is_compiled_promise(SEXP value, Fir_PromiseGlobalData **global_data,
                             Fir_PromiseLocalData **local_data);

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
SEXP Fir_mk_promise(Rsh_code evalFromR, SEXP cp, void **captures, SEXP env);

SEXP Fir_cast(SEXP value, Fir_Type type);
SEXP Fir_dup(SEXP value);
SEXP Fir_force(SEXP promise);
SEXP Fir_maybe_force(SEXP valueOrPromise);
SEXP Fir_safe_force(SEXP valueOrPromise);
SEXP Fir_load(SEXP symbol, SEXP env);
SEXP Fir_load_dots(int index, SEXP env);
void Fir_set_env_pushed_from_r(SEXP env, SEXP* outer_env, bool* push_suppressed);
void Fir_unset_env_pushed_from_r(SEXP outer_env, bool push_suppressed);
void Fir_push_env(SEXP *env, Fir_MkEnvType type);
void Fir_pop_env(SEXP *env);
SEXP Fir_mk_vector(Fir_Kind kind, int count, void const *values, SEXP const *names);
SEXP Fir_reflective_load(SEXP promise, SEXP symbol);
SEXP Fir_reflective_store(SEXP promise, SEXP symbol, SEXP value);
int Fir_subscript_read_int(SEXP vector, int index);
double Fir_subscript_read_real(SEXP vector, int index);
Rboolean Fir_subscript_read_logical(SEXP vector, int index);
char* Fir_subscript_read_string(SEXP vector, int index);
SEXP Fir_subscript_write_int(SEXP vector, int index, int value);
SEXP Fir_subscript_write_real(SEXP vector, int index, double value);
SEXP Fir_subscript_write_logical(SEXP vector, int index, Rboolean value);
SEXP Fir_subscript_write_string(SEXP vector, int index, char* value);
SEXP Fir_super_load(SEXP symbol, SEXP env);
void Fir_super_store(SEXP symbol, SEXP value, SEXP env);
SEXP Fir_call_builtin(int blt_idx, SEXP env, int argc, SEXP *args, SEXP *names);
SEXP Fir_call_dynamic(SEXP callee, SEXP env, int argc, SEXP *args, SEXP *names);
void Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP env);
bool Fir_assume_function(SEXP value, Fir_DispatchFn dispatch);
bool Fir_assume_builtin_function(SEXP value, int blt_idx);
bool Fir_assume_load_fun(SEXP symbol, SEXP env, Fir_DispatchFn dispatch, SEXP* found_ref);
bool Fir_assume_load_builtin_fun(SEXP symbol, SEXP env, int blt_idx, SEXP* found_ref);
bool Fir_assume_load_var(SEXP symbol, SEXP env, SEXP constant);
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

DEFINE_INTRINSIC(SEXP, checkFun, value_fx_impure_ret_value, SEXP value);
DEFINE_INTRINSIC(SEXP, checkMissing, value_fx_impure_ret_value, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, value_fx_none_ret_value, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, vec_logical_fx_none_ret_vec_logical, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, vec_int_fx_none_ret_vec_int, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, vec_real_fx_none_ret_vec_real, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, vec_string_fx_none_ret_vec_string, SEXP value);
DEFINE_INTRINSIC(SEXP, setInvisible, fx_none_ret_value);
DEFINE_INTRINSIC(SEXP, setVisible, fx_none_ret_value);
DEFINE_INTRINSIC(bool, naToFalse, vec1_logical_fx_none_ret_bool, SEXP value);
DEFINE_INTRINSIC(bool, naToFalse, scalar_logical_fx_none_ret_bool, Rboolean value);

// box: scalar → vector (length-1 SEXP)
DEFINE_INTRINSIC(SEXP, box, scalar_logical_fx_none_ret_vec1_logical, Rboolean value);
DEFINE_INTRINSIC(SEXP, box, scalar_int_fx_none_ret_vec1_int, int value);
DEFINE_INTRINSIC(SEXP, box, scalar_real_fx_none_ret_vec1_real, double value);
DEFINE_INTRINSIC(SEXP, box, scalar_string_fx_none_ret_vec1_string, char* value);

// unbox: vector (length-1 SEXP) → scalar
DEFINE_INTRINSIC(Rboolean, unbox, vec1_logical_borrowed_fx_none_ret_scalar_logical, SEXP value);
DEFINE_INTRINSIC(int, unbox, vec1_int_borrowed_fx_none_ret_scalar_int, SEXP value);
DEFINE_INTRINSIC(double, unbox, vec1_real_borrowed_fx_none_ret_scalar_real, SEXP value);
DEFINE_INTRINSIC(char*, unbox, vec1_string_borrowed_fx_none_ret_scalar_string, SEXP value);

// +: I+I→I, R+R→R, I+R→R, R+I→R
DEFINE_OVERRIDDEN_BUILTIN(int, _u2b, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
// +: unary versions
DEFINE_OVERRIDDEN_BUILTIN(int, _u2b, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b);
// -: same layout as +
DEFINE_OVERRIDDEN_BUILTIN(int, _u2d, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
// -: unary versions
DEFINE_OVERRIDDEN_BUILTIN(int, _u2d, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b);
// *: same layout as + (no unary)
DEFINE_OVERRIDDEN_BUILTIN(int, _u2a, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
// /: I/I→R, R/R→R, I/R→R, R/I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
// :: I:I→vI, I:R→vI, R:R→V
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_int_fx_none_ret_vec_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_real_fx_none_ret_vec_int, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_real_scalar_real_fx_none_ret_value, double a, double b);
// <: I<I→L, R<R→L, I<R→L, R<I→L,
//    I<I→B, R<R→B, I<R→B, R<I→B
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_int_scalar_real_fx_none_ret_bool, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_real_scalar_int_fx_none_ret_bool, double a, int b);
// <=: same layout as <
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_bool, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_bool, double a, int b);
// ==: .->L, .->B
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, any_any_fx_none_ret_scalar_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, any_any_fx_none_ret_bool, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_logical_scalar_logical_fx_none_ret_bool, Rboolean a, Rboolean b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_bool, char* a, char* b);

// log: I,R→R, R,R→R
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_int_scalar_real_fx_none_ret_scalar_real, int value, double base);
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_real_scalar_real_fx_none_ret_scalar_real, double value, double base);
// abs: I→I, R→R
DEFINE_OVERRIDDEN_BUILTIN(int, abs, scalar_int_fx_none_ret_scalar_int, int value);
DEFINE_OVERRIDDEN_BUILTIN(double, abs, scalar_real_fx_none_ret_scalar_real, double value);

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

// math1: I→R, R→R
#define V(name, func)\
  DEFINE_OVERRIDDEN_BUILTIN(double, name, scalar_int_fx_none_ret_scalar_real, int value);\
  DEFINE_OVERRIDDEN_BUILTIN(double, name, scalar_real_fx_none_ret_scalar_real, double value);
DEFINE_MATH1_BUILTINS(V)
#undef V

DEFINE_OVERRIDDEN_BUILTIN(int, length, value_fx_none_ret_scalar_int, SEXP value);
// as.integer
DEFINE_OVERRIDDEN_BUILTIN(int, as_u2einteger, value_missing_fx_none_ret_scalar_int, SEXP value, SEXP missing);
// as.logical: V,miss→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, as_u2elogical, value_missing_fx_none_ret_scalar_logical, SEXP value, SEXP missing);
// as.logical: V,miss→B
DEFINE_OVERRIDDEN_BUILTIN(bool, as_u2elogical, value_missing_fx_none_ret_bool, SEXP value, SEXP missing);
// as.logical: L,miss→B
DEFINE_OVERRIDDEN_BUILTIN(bool, as_u2elogical, scalar_logical_missing_fx_none_ret_bool, Rboolean value, SEXP missing);
// as.character
DEFINE_OVERRIDDEN_BUILTIN(char*, as_u2echaracter, value_missing_fx_none_ret_scalar_string, SEXP value, SEXP missing);

// inherits(x, what, which): V,S,B→B
DEFINE_OVERRIDDEN_BUILTIN(bool, inherits, value_scalar_string_bool_fx_none_ret_bool, SEXP value, char* what, bool which);

// ^: I^I→R, R^R→R, I^R→R, R^I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);

// >: I>I→L, R>R→L, I>R→L, R>I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);

// >=: same layout as >
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);

// !=: .->L, .->B
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, any_any_fx_none_ret_scalar_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, any_any_fx_none_ret_bool, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_logical_scalar_logical_fx_none_ret_bool, Rboolean a, Rboolean b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_string_scalar_string_fx_none_ret_bool, char* a, char* b);

// &, &&, |, ||, xor: B,B→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u26, bool_bool_fx_none_ret_bool, bool a, bool b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u26_u26, bool_bool_fx_none_ret_bool, bool a, bool b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u7c, bool_bool_fx_none_ret_bool, bool a, bool b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u7c_u7c, bool_bool_fx_none_ret_bool, bool a, bool b);
DEFINE_OVERRIDDEN_BUILTIN(bool, xor, bool_bool_fx_none_ret_bool, bool a, bool b);

// !: B→B, I→L, R→L
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21, bool_fx_none_ret_bool, bool a);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21, scalar_int_fx_none_ret_scalar_logical, int a);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21, scalar_real_fx_none_ret_scalar_logical, double a);

// bitwNot: I→I
DEFINE_OVERRIDDEN_BUILTIN(int, bitwNot, scalar_int_fx_none_ret_scalar_int, int a);
// bitwAnd, bitwOr, bitwXor: I,I→I
DEFINE_OVERRIDDEN_BUILTIN(int, bitwAnd, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(int, bitwOr, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(int, bitwXor, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
// bitwShiftL, bitwShiftR: I,I→I
DEFINE_OVERRIDDEN_BUILTIN(int, bitwShiftL, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int n);
DEFINE_OVERRIDDEN_BUILTIN(int, bitwShiftR, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int n);

// [ (scalar index read): v(T),I,miss,miss → T
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b, vec_logical_scalar_int_missing_missing_fx_none_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b, vec_int_scalar_int_missing_missing_fx_none_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b, vec_real_scalar_int_missing_missing_fx_none_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b, vec_string_scalar_int_missing_missing_fx_none_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP drop);

// [[ (scalar index read): same as [
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b_u5b, vec_logical_scalar_int_missing_missing_fx_none_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b_u5b, vec_int_scalar_int_missing_missing_fx_none_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b_u5b, vec_real_scalar_int_missing_missing_fx_none_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b_u5b, vec_string_scalar_int_missing_missing_fx_none_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP exact);

// [<- (scalar index write): v(T),I,T,miss → v(T)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_scalar_int_scalar_logical_missing_fx_none_ret_vec_logical, SEXP x, int i, Rboolean value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_scalar_int_scalar_int_missing_fx_none_ret_vec_int, SEXP x, int i, int value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_scalar_int_scalar_real_missing_fx_none_ret_vec_real, SEXP x, int i, double value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_scalar_int_scalar_string_missing_fx_none_ret_vec_string, SEXP x, int i, char* value, SEXP ddd);

// [[<- (scalar index write): v(T),I,T → v(T)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_scalar_int_scalar_logical_fx_none_ret_vec_logical, SEXP x, int i, Rboolean value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_scalar_int_scalar_int_fx_none_ret_vec_int, SEXP x, int i, int value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_scalar_int_scalar_real_fx_none_ret_vec_real, SEXP x, int i, double value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_scalar_int_scalar_string_fx_none_ret_vec_string, SEXP x, int i, char* value);

// rep(x, times): T,I → v(T)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_logical_scalar_int_fx_none_ret_vec_logical, Rboolean x, int times);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_int_scalar_int_fx_none_ret_vec_int, int x, int times);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_real_scalar_int_fx_none_ret_vec_real, double x, int times);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_string_scalar_int_fx_none_ret_vec_string, char* x, int times);

// sum(x, na.rm=miss): v(L)→I, v(I)→I, v(R)→R
DEFINE_OVERRIDDEN_BUILTIN(int, sum, vec_logical_missing_fx_none_ret_scalar_int, SEXP x, SEXP naRm);
DEFINE_OVERRIDDEN_BUILTIN(int, sum, vec_int_missing_fx_none_ret_scalar_int, SEXP x, SEXP naRm);
DEFINE_OVERRIDDEN_BUILTIN(double, sum, vec_real_missing_fx_none_ret_scalar_real, SEXP x, SEXP naRm);

// is.X(x): V→B
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2enumeric, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2einteger, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2edouble, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2elogical, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2ecomplex, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2eraw, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2efunction, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2eenvironment, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2elist, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2echaracter, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2eobject, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2esymbol, value_fx_none_ret_bool, SEXP value);

#ifdef __cplusplus
}
#endif
