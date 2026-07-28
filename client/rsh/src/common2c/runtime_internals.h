#ifndef RUNTIME_INTENALS_H
#define RUNTIME_INTENALS_H

// THIS HEADER NEEDS TO BE A C-compatible HEADER
// IT IS USED BY THE SERVER COMPILER

// The USE_RINTERNALS needs to be set
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

#define MAYBE_MISSING_ARGUMENT_ERROR(symbol, keepmiss, rho)                    \
  do {                                                                         \
    if (!keepmiss)                                                             \
      MISSING_ARGUMENT_ERROR(symbol, rho);                                     \
  } while (0)

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

#endif // RUNTIME_INTENALS_H
