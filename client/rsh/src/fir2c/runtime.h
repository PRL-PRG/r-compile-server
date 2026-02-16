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
  FIR_KIND_ANY = 0,
  FIR_KIND_ANY_VALUE = 1,
  FIR_KIND_PRIMITIVE_SCALAR = 2,
  FIR_KIND_PRIMITIVE_VECTOR = 3,
  FIR_KIND_CLOSURE = 4,
  FIR_KIND_DOTS = 5,
  FIR_KIND_PROMISE = 6,
} Fir_KindTag;

typedef enum {
  FIR_FRESH = 0,
  FIR_OWNED = 1,
  FIR_BORROWED = 2,
  FIR_SHARED = 3,
} Fir_Ownership;

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
  Fir_Ownership ownership;
  bool definite;
} Fir_Type;

typedef struct Fir_Signature {
  Fir_Type return_type;
  int param_count;
  Fir_Type const *param_types;
  bool effects;
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
  bool reflect;
} Fir_PromiseGlobalData;

typedef struct Fir_PromiseLocalData {
  SEXP **captures;
} Fir_PromiseLocalData;

extern Fir_Kind Fir_kind_any;
extern Fir_Kind Fir_kind_anyValue;
extern Fir_Kind Fir_kind_closure;
extern Fir_Kind Fir_kind_dots;

void Fir_printSignature(Fir_Signature signature);
void Fir_printType(Fir_Type type);
void Fir_printKind(Fir_Kind kind);
void Fir_printPrimitiveKind(Fir_PrimitiveKind primitive);
void Fir_printOwnership(Fir_Ownership ownership);
void Fir_printConcreteness(bool definite);
void Fir_printEffects(bool reflect);

bool Fir_is_compiled_closure(SEXP value, Fir_FunctionData **data);
bool Fir_is_compiled_promise(SEXP value, Fir_PromiseGlobalData **global_data, Fir_PromiseLocalData **local_data);

Fir_Kind Fir_kind_primitiveScalar(int primitive_kind);
Fir_Kind Fir_kind_primitiveVector(int primitive_kind);
Fir_Kind Fir_kind_promise(Fir_Type const* value_type, bool reflect);

Fir_Type Fir_type(Fir_Kind kind, Fir_Ownership ownership, bool definite);
bool Fir_is_subtype(Fir_Type this_type, Fir_Type other_type);
bool Fir_value_matches(SEXP value, Fir_Type type);

Fir_Signature Fir_signature(Fir_Type return_type, int param_count, Fir_Type const *param_types, bool effects);

SEXP Fir_mk_closure(Rsh_code dispatchFromR, SEXP formals, SEXP cp, SEXP env);
SEXP Fir_mk_promise(Rsh_code evalFromR, SEXP cp, SEXP **captures, SEXP env);

SEXP Fir_cast(SEXP value, Fir_Type type);
SEXP Fir_dup(SEXP value);
SEXP Fir_force(SEXP promise);
SEXP Fir_maybe_force(SEXP valueOrPromise);
SEXP Fir_safe_force(SEXP valueOrPromise);
SEXP Fir_load(SEXP symbol, SEXP env);
SEXP Fir_load_dots(int ddIndex, SEXP env);
SEXP Fir_load_fun(int env_selector, SEXP symbol, SEXP env);
void Fir_set_env_pushed_from_r(SEXP env, SEXP* outer_env, bool* push_suppressed);
void Fir_unset_env_pushed_from_r(SEXP outer_env, bool push_suppressed);
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
SEXP Fir_call_builtin(int bltIdx, SEXP env, int argc, SEXP *args, SEXP *names);
SEXP Fir_call_dynamic(SEXP callee, SEXP env, int argc, SEXP *args, SEXP *names);
bool Fir_is_true(SEXP value);
void Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP env);
bool Fir_assume_constant(SEXP value, SEXP constant);
bool Fir_assume_function(SEXP value, Fir_DispatchFn dispatch);
bool Fir_assume_builtin_function(SEXP value, int bltIdx);
bool Fir_assume_type(SEXP value, Fir_Type type);

void Fir_dbg_comment(const char* comment);
void Fir_dbg_sexp(const char* name, SEXP value);
void Fir_dbg_signature(Fir_Signature signature);

#define Fir_LoadFun_Local 0
#define Fir_LoadFun_Global 1
#define Fir_LoadFun_Base 2

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"

#define DEFINE_DISPATCH_INTRINSIC(X)\
  SEXP Fir_fun_dispatch_ ## X(SEXP env, Fir_Signature signature, ...)

#define DEFINE_INTRINSIC(X, n, ...)\
  SEXP Fir_ver_call_ ## X ## _v ## n(SEXP env, ##__VA_ARGS__)

#define DEFINE_OVERRIDDEN_BUILTIN(X, n, ...)\
  SEXP Fir_ver_call_ ## X ## _v ## n(SEXP env, ##__VA_ARGS__)

#pragma clang diagnostic pop

DEFINE_DISPATCH_INTRINSIC(checkFun);
DEFINE_DISPATCH_INTRINSIC(checkMissing);
DEFINE_DISPATCH_INTRINSIC(toForSeq);
DEFINE_DISPATCH_INTRINSIC(setInvisible);
DEFINE_DISPATCH_INTRINSIC(setVisible);

DEFINE_INTRINSIC(checkFun, 0, SEXP value);
DEFINE_INTRINSIC(checkMissing, 0, SEXP value);
DEFINE_INTRINSIC(toForSeq, 0, SEXP value);
DEFINE_INTRINSIC(setInvisible, 0);
DEFINE_INTRINSIC(setVisible, 0);

DEFINE_OVERRIDDEN_BUILTIN(_u2b, 1, SEXP a, SEXP b);  // +
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 2, SEXP a, SEXP b);  // +
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 3, SEXP a, SEXP b);  // +
DEFINE_OVERRIDDEN_BUILTIN(_u2b, 4, SEXP a, SEXP b);  // +
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 1, SEXP a, SEXP b);  // -
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 2, SEXP a, SEXP b);  // -
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 3, SEXP a, SEXP b);  // -
DEFINE_OVERRIDDEN_BUILTIN(_u2d, 4, SEXP a, SEXP b);  // -
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 1, SEXP a, SEXP b);  // *
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 2, SEXP a, SEXP b);  // *
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 3, SEXP a, SEXP b);  // *
DEFINE_OVERRIDDEN_BUILTIN(_u2a, 4, SEXP a, SEXP b);  // *
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 1, SEXP a, SEXP b);  // /
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 2, SEXP a, SEXP b);  // /
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 3, SEXP a, SEXP b);  // /
DEFINE_OVERRIDDEN_BUILTIN(_u2f, 4, SEXP a, SEXP b);  // /
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 1, SEXP a, SEXP b);  // :
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 2, SEXP a, SEXP b);  // :
DEFINE_OVERRIDDEN_BUILTIN(_u3a, 3, SEXP a, SEXP b);  // :
DEFINE_OVERRIDDEN_BUILTIN(_u3c, 1, SEXP a, SEXP b);  // <
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 1, SEXP a, SEXP b);  // <=
DEFINE_OVERRIDDEN_BUILTIN(_u3c_u3d, 2, SEXP a, SEXP b);  // <=
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 1, SEXP a, SEXP b);  // ==
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 2, SEXP a, SEXP b);  // ==
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 3, SEXP a, SEXP b);  // ==
DEFINE_OVERRIDDEN_BUILTIN(_u3d_u3d, 4, SEXP a, SEXP b);  // ==

DEFINE_OVERRIDDEN_BUILTIN(log, 1, SEXP value, SEXP base);
DEFINE_OVERRIDDEN_BUILTIN(log, 2, SEXP value, SEXP base);
DEFINE_OVERRIDDEN_BUILTIN(abs, 1, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(abs, 2, SEXP value);

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
  V(lgamma, lgammaf)
// TODO: import from Rmath.h
//  V(gamma, gammaf)\
//  V(digamma, digamma)\
//  V(trigamma, trigamma)\
//  V(cospi, cospi)\
//  V(sinpi, sinpi)\
//  V(tanpi, tanpi)

#define V(name, func)\
  DEFINE_OVERRIDDEN_BUILTIN(name, 1, SEXP value);\
  DEFINE_OVERRIDDEN_BUILTIN(name, 2, SEXP value);
DEFINE_MATH1_BUILTINS(V)
#undef V

DEFINE_OVERRIDDEN_BUILTIN(missing, 1, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(length, 1, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(as_u2einteger, 1, SEXP value);  // as.integer
DEFINE_OVERRIDDEN_BUILTIN(as_u2elogical, 1, SEXP value);  // as.logical
DEFINE_OVERRIDDEN_BUILTIN(as_u2echaracter, 1, SEXP value);  // as.character

#ifdef __cplusplus
}
#endif
