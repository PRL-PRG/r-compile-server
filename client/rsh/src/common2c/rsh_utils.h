#ifndef RSH_UTILS_H
#define RSH_UTILS_H

// THIS HEADER NEEDS TO BE A C-compatible HEADER
// IT IS USED BY THE SERVER COMPILER

// The USE_RINTERNALS needs to be set
#ifndef C99_INLINE_SEMANTICS
#define C99_INLINE_SEMANTICS 0
#endif
#ifndef USE_RINTERNALS
#define USE_RINTERNALS
#endif
#ifdef R_NO_REMAP
#undef R_NO_REMAP
#include <Rinternals.h>
#define R_NO_REMAP
#else
#include <Rinternals.h>
#endif

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "gnur_symbols.h"

// this file contains some internal functions that are not exported

// these macros are from Defn.h
// one option would be to put them into Rinternals.h but then
// they clash with LLVM
#undef isNull
#define isNull(s) (TYPEOF(s) == NILSXP)
#undef isObject
#define isObject(s) (OBJECT(s) != 0)
#define Rf_isLogical(s) (TYPEOF(s) == LGLSXP)
#define isNumericOnly(x) (Rf_isNumeric(x) && !Rf_isLogical(x))
#define PRIMOFFSET(x)	((x)->u.primsxp.offset)
#define PRIMNAME(x)	(R_FunTab[PRIMOFFSET(x)].name)

// This one is defined somewhere unknown, but the value is mentioned in a comment
#ifndef FLT_EPSILON
#define FLT_EPSILON 1.192e-07
#endif

#define R_NaN (NAN)
#define R_PosInf (INFINITY)
#define R_NegInf (-INFINITY)
// #define R_NaReal (R_ValueOfNA())
#define R_NaInt (INT_MIN)

#define ALWAYS_INLINE inline __attribute__((always_inline))
#ifdef RSH_INLINE
#define INLINE ALWAYS_INLINE
#else
#define INLINE
#endif

#define UNUSED __attribute__((unused))

#define R_MSG_NA "NaNs produced"

// from arithmetic.h
static INLINE double R_log(double x) {
  return x > 0 ? log(x) : x == 0 ? R_NegInf : R_NaN;
}

static INLINE double R_logbase(double x, double base) {
  if (base == 10)
    return x > 0 ? log10(x) : x == 0 ? R_NegInf : R_NaN;
  if (base == 2)
    return x > 0 ? log2(x) : x == 0 ? R_NegInf : R_NaN;
  return R_log(x) / R_log(base);
}

#define INTEGER_TO_LOGICAL(x)                                                  \
  ((x) == NA_INTEGER ? NA_LOGICAL : (x) ? TRUE : FALSE)
#define INTEGER_TO_REAL(x) ((x) == NA_INTEGER ? NA_REAL : (x))
#define LOGICAL_TO_REAL(x) ((x) == NA_LOGICAL ? NA_REAL : (x))
#define REAL_TO_LOGICAL(x)                                                     \
  ((x) == NA_REAL ? NA_LOGICAL : (x) != 0.0 ? TRUE : FALSE)

/* This macro makes sure the RHS NAMED value is 0 or NAMEDMAX. This is
   necessary to make sure the RHS value returned by the assignment
   expression is correct when the RHS value is part of the LHS
   object. */
#define FIXUP_RHS_NAMED(r)                                                     \
  do {                                                                         \
    SEXP __rhs__ = (r);                                                        \
    if (NAMED(__rhs__))                                                        \
      ENSURE_NAMEDMAX(__rhs__);                                                \
  } while (0)

#define FAST_VECELT_OK(/* SEXP */ vec)                                         \
  (ATTRIB(vec) == R_NilValue ||                                                \
   (TAG(ATTRIB(vec)) == R_DimSymbol && CDR(ATTRIB(vec)) == R_NilValue))

static INLINE SEXP arith2(SEXP call, SEXP op, SEXP opsym, SEXP x, SEXP y,
                          SEXP rho) {
  if (isObject(x) || isObject(y)) {
    SEXP args, ans;
    args = CONS_NR(x, CONS_NR(y, R_NilValue));
    PROTECT(args);
    if (DispatchGroup("Ops", call, op, args, rho, &ans)) {
      UNPROTECT(1);
      return ans;
    }
    UNPROTECT(1);
  }
  return R_binary(call, op, x, y);
}

// from: eval.c modified version of cmp_arith1
static INLINE SEXP arith1(SEXP call, SEXP op, SEXP opsym, SEXP x, SEXP rho) {
  if (isObject(x)) {
    SEXP args, ans;
    args = CONS_NR(x, R_NilValue);
    PROTECT(args);
    if (DispatchGroup("Ops", call, op, args, rho, &ans)) {
      UNPROTECT(1);
      return ans;
    }
    UNPROTECT(1);
  }
  return R_unary(call, op, x);
}

// from: eval.c modified version of cmp_relop
static INLINE SEXP relop(SEXP call, SEXP op, SEXP opsym, SEXP x, SEXP y,
                         SEXP rho) {
  if (isObject(x) || isObject(y)) {
    SEXP args, ans;
    args = CONS_NR(x, CONS_NR(y, R_NilValue));
    PROTECT(args);
    if (DispatchGroup("Ops", call, op, args, rho, &ans)) {
      UNPROTECT(1);
      return ans;
    }
    UNPROTECT(1);
  }
  return do_relop_dflt(call, op, x, y);
}

#define SET_SCALAR_IVAL(s, v) INTEGER((s))[0] = (v)
#define SET_SCALAR_DVAL(s, v) REAL((s))[0] = (v)
#define SET_SCALAR_CVAL(s, v) COMPLEX((s))[0] = (v)
#define SET_SCALAR_BVAL(s, v) RAW((s))[0] = (v)

// FIXME: implement signal checking
#define RSH_CHECK_SIGINT()

static INLINE SEXP Rsh_get_dim_attr(SEXP v) {
  SEXP attr = ATTRIB(v);
  assert(!BNDCELL_TAG(attr));
  SEXP dim =
      TAG(attr) == R_DimSymbol ? CAR0(attr) : Rf_getAttrib(v, R_DimSymbol);
  if (TYPEOF(dim) == INTSXP) {
    return dim;
  } else {
    return R_NilValue;
  }
}

static INLINE SEXP Rsh_get_mat_dim_attr(SEXP v) {
  SEXP dim = Rsh_get_dim_attr(v);
  if (LENGTH(dim) == 2) {
    return dim;
  } else {
    return R_NilValue;
  }
}

static INLINE SEXP Rsh_get_array_dim_attr(SEXP v) {
  SEXP dim = Rsh_get_dim_attr(v);
  if (LENGTH(dim) > 0) {
    return dim;
  } else {
    return R_NilValue;
  }
}
#define IS_ANY_SIMPLE_SCALAR(__v__)                                            \
  (__v__->sxpinfo.scalar && ATTRIB(__v__) == R_NilValue)
#define IS_SIMPLE_BINDING(b)                                                   \
  (!((b)->sxpinfo.gp & (ACTIVE_BINDING_MASK | BINDING_LOCK_MASK)))
#define INCREMENT_EVAL_DEPTH()                                                 \
  do {                                                                         \
    R_EvalDepth++;                                                             \
    if (R_EvalDepth > R_Expressions)                                           \
      handle_eval_depth_overflow();                                            \
  } while (0)
#define UNPROTECT_SAFE(ptr)                                                    \
  do {                                                                         \
    assert(R_PPStack[R_PPStackTop - 1] == ptr);                                \
    UNPROTECT(1);                                                              \
  } while (0)
/* ------------------------------------------------------------------ *
 * Targets: GCC 13+, x86-64 Linux. Compatible with Clang.             *
 *                                                                    *
 * UNREACHABLE()   – marks a point that is never reached.             *
 * ASSUME(cond)    – asserts cond is always true at this point.       *
 *                                                                    *
 * Debug   (NDEBUG not defined): aborts with a diagnostic message.    *
 * Release (NDEBUG defined):     optimizer hint, zero runtime cost.   *
 *                                                                    *
 * Note: cond in ASSUME must be side-effect free — in release builds  *
 * it may not be evaluated at all.                                    *
 * ------------------------------------------------------------------ */

#ifndef NDEBUG
#define UNREACHABLE()                                                          \
  do {                                                                         \
    fprintf(stderr, "UNREACHABLE reached at %s:%d (function: %s)\n", __FILE__, \
            __LINE__, __func__);                                               \
    assert(0);                                                                 \
  } while (0)

#define ASSUME(cond)                                                           \
  do {                                                                         \
    if (!(cond)) {                                                             \
      fprintf(stderr, "ASSUME(%s) failed at %s:%d (function: %s)\n", #cond,    \
              __FILE__, __LINE__, __func__);                                   \
      assert(0);                                                               \
    }                                                                          \
  } while (0)
#else
#define UNREACHABLE() __builtin_unreachable()

#if defined(__clang__)
#define ASSUME(cond) __builtin_assume(cond)
#else
/* GCC 13+: __attribute__((assume(expr))) */
#define ASSUME(cond)                                                           \
  do {                                                                         \
    __attribute__((assume(cond)));                                             \
    if (!(cond)) {                                                             \
      UNREACHABLE();                                                           \
    }                                                                          \
  } while (0)

#endif
#endif

#if defined(__GNUC__) && (__GNUC__ >= 3)
#define LIKELY(x) __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#else
#define LIKELY(x) (x)
#define UNLIKELY(x) (x)
#endif
static INLINE Rboolean R_isReplaceSymbol(SEXP fun) {
  /* fun is a replacement function name if it contains '<-'
     anywhere. For internally dispatched replacement functions this
     may occur in the middle; in other cases it will be at the
     end. */
  if (TYPEOF(fun) == SYMSXP && strstr(CHAR(PRINTNAME(fun)), "<-"))
    return TRUE;
  else
    return FALSE;
}

static INLINE SEXP getActiveValue(SEXP fun) {
  SEXP expr = LCONS(fun, R_NilValue);
  PROTECT(expr);
  expr = Rf_eval(expr, R_GlobalEnv);
  UNPROTECT(1);
  return expr;
}

static INLINE SEXP try_assign_unwrap(SEXP value, SEXP sym, SEXP rho,
                                     SEXP cell) {
  /* If EnsureLocal() has introduced a wrapper for the LHS object in
     a complex assignment and the data has been duplicated, then it
     may be possible to remove the wrapper before assigning the
     final value to a its symbol. */
  assert(cell != NULL);
  if (!MAYBE_REFERENCED(value) ||
      (!MAYBE_SHARED(value) && !IS_ACTIVE_BINDING(cell) && !BNDCELL_TAG(cell) &&
       CAR0(cell) == value)) {
    /* Typical case for NAMED; can also happen for REFCNT. */
    return R_tryUnwrap(value);
  }

  return value;
}
static ALWAYS_INLINE SEXP Rsh_ScalarLogical(int x) {
  switch (x) {
  case NA_LOGICAL:
    return R_LogicalNAValue;
  case 0:
    return R_FalseValue;
  default:
    return R_TrueValue;
  }
}
void old_to_new(SEXP x, SEXP y);
#define NODE_IS_MARKED(s) (MARK(s) == 1)
#define NODE_GENERATION(s) ((s)->sxpinfo.gcgen)

#define NODE_IS_OLDER(x, y)                                                    \
  (NODE_IS_MARKED(x) && (y) &&                                                 \
   (!NODE_IS_MARKED(y) || NODE_GENERATION(x) > NODE_GENERATION(y)))

#define CHECK_OLD_TO_NEW(x, y)                                                 \
  do {                                                                         \
    if (NODE_IS_OLDER(x, y))                                                   \
      old_to_new(x, y);                                                        \
  } while (0)
static ALWAYS_INLINE R_xlen_t XLENGTH_0(SEXP x) { return STDVEC_LENGTH(x); }

#define LONG_VECTOR_SUPPORT
static ALWAYS_INLINE int LENGTH_EX_0(SEXP x, const char *file, int line) {
  if (x == R_NilValue)
    return 0;
  R_xlen_t len = XLENGTH_0(x);
#ifdef LONG_VECTOR_SUPPORT
  if (len > R_SHORT_LEN_MAX)
    R_BadLongVector(x, file, line);
#endif
  return (int)len;
}

#define LENGTH_0(x) LENGTH_EX_0(x, __FILE__, __LINE__)

/* For speed in cases when the argument is known to not be an ALTREP list. */
#define VECTOR_ELT_0(x, i) ((SEXP *)STDVEC_DATAPTR(x))[i]
#define SET_VECTOR_ELT_0(x, i, v) (((SEXP *)STDVEC_DATAPTR(x))[i] = (v))
#define STRING_ELT_0(x, i) ((SEXP *)STDVEC_DATAPTR(x))[i]
#define SET_STRING_ELT_0(x, i, v) (((SEXP *)STDVEC_DATAPTR(x))[i] = (v))
typedef int32_t i32;
typedef uint64_t u64;
typedef uint32_t u32;
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
// C23 or later: use standard [[nodiscard]]
#define NODISCARD [[nodiscard]]
#elif defined(__GNUC__) || defined(__clang__)
// GCC or Clang: use compiler attribute
#define NODISCARD __attribute__((warn_unused_result))
#else
// Fallback: nothing
#define NODISCARD
#endif
#endif // RSH_UTILS_H
