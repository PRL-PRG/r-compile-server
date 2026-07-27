#pragma once

// THIS HEADER NEEDS TO BE A C-compatible HEADER
// IT IS USED BY THE SERVER COMPILER

// The USE_RINTERNALS needs to be set
#ifndef USE_RINTERNALS
#define USE_RINTERNALS
#endif
#include <Rinternals.h>
#include "gnur_symbols.h"
#include <assert.h>
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

#define INTEGER_TO_LOGICAL(x)                                                  \
  ((x) == NA_INTEGER ? NA_LOGICAL : (x) ? TRUE : FALSE)
#define INTEGER_TO_REAL(x) ((x) == NA_INTEGER ? NA_REAL : (x))
#define LOGICAL_TO_REAL(x) ((x) == NA_LOGICAL ? NA_REAL : (x))
#define REAL_TO_LOGICAL(x)                                                     \
  ((x) == NA_REAL ? NA_LOGICAL : (x) != 0.0 ? TRUE : FALSE)

#define IS_ANY_SIMPLE_SCALAR(__v__)                                            \
  (__v__->sxpinfo.scalar && ATTRIB(__v__) == R_NilValue)

#define RSH_INLINE_CLOSURE_CALL_OK(fun, rho)                                   \
  (RSH_IS_CLOSURE_BODY(BODY(fun)) && !RDEBUG(fun) && !RSTEP(fun) &&            \
   !RDEBUG(rho) && R_GlobalContext->callflag != CTXT_GENERIC)

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

// Unboxes a value in-place if it is a simple scalar and is allowed by the
// flags. This is a destructive operation as we lose the original SEXP. Use only
// at places where the original SEXP is not observable later. Ported from
// bcStackScalar.
static ALWAYS_INLINE void val_unbox_inplace(R_bcstack_t *s, int require_simple,
                                            int allow_real, int allow_int,
                                            int allow_lgl) {
  if (s->tag != 0)
    return;

  SEXP x = s->u.sxpval;
  if (x->sxpinfo.scalar && (!require_simple || ATTRIB(x) == R_NilValue)) {
    assert(XLENGTH(x) == 1);
    switch (TYPEOF(x)) {
    case REALSXP: {
      if (!allow_real) // Should constant-propagate and eliminate dead code
        break;
      s->u.dval = SCALAR_DVAL(x);
      s->tag = TYPEOF(x);
      break;
    }
    case INTSXP: {
      if (!allow_int) // Should constant-propagate and eliminate dead code
        break;
      s->u.ival = SCALAR_IVAL(x);
      s->tag = TYPEOF(x);
      break;
    }
    case LGLSXP: {
      if (!allow_lgl) // Should constant-propagate and eliminate dead code
        break;
      s->u.ival = SCALAR_LVAL(x);
      s->tag = TYPEOF(x);
      break;
    }
    }
  }
}

// Converts an unboxed integer value to double in-place.
// This is a destructive operation as we lose the original SEXP. Use only
// at places where the original SEXP is not observable later.
// Use after val_unbox_inplace to achieve bcStackScalarReal.
static ALWAYS_INLINE void unboxed_int_to_dbl(R_bcstack_t *s) {
  if (s->tag == INTSXP) {
    s->tag = REALSXP;
    s->u.dval = INTEGER_TO_REAL(s->u.ival);
  }
}

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

#define DO_FAST_VECELT_THIN(/* SEXP */ vec, /* R_xlen_t */ i,                  \
                            /* Rboolean */ subset2, /* Value* */ res)          \
  do {                                                                         \
    if ((TYPEOF(vec) == REALSXP || TYPEOF(vec) == INTSXP ||                    \
         TYPEOF(vec) == LGLSXP) &&                                             \
        i >= 0 && XLENGTH(vec) > i) {                                          \
      switch (TYPEOF(vec)) {                                                   \
      case REALSXP:                                                            \
        SET_DBL_VAL(res, REAL_ELT(vec, i));                                    \
        return;                                                                \
      case INTSXP:                                                             \
        SET_INT_VAL(res, INTEGER_ELT(vec, i));                                 \
        return;                                                                \
      case LGLSXP:                                                             \
        SET_LGL_VAL(res, LOGICAL_ELT(vec, i));                                 \
        return;                                                                \
      }                                                                        \
    }                                                                          \
  } while (0)

#define DO_FAST_VECELT(/* SEXP */ vec, /* R_xlen_t */ i,                       \
                       /* Rboolean */ subset2, /* Value* */ res)               \
  do {                                                                         \
    if ((TYPEOF(vec) == REALSXP || TYPEOF(vec) == INTSXP ||                    \
         TYPEOF(vec) == LGLSXP || TYPEOF(vec) == CPLXSXP ||                    \
         TYPEOF(vec) == RAWSXP || TYPEOF(vec) == VECSXP) &&                    \
        i >= 0 && XLENGTH(vec) > i) {                                          \
      switch (TYPEOF(vec)) {                                                   \
      case REALSXP:                                                            \
        SET_DBL_VAL(res, REAL_ELT(vec, i));                                    \
        return;                                                                \
      case INTSXP:                                                             \
        SET_INT_VAL(res, INTEGER_ELT(vec, i));                                 \
        return;                                                                \
      case LGLSXP:                                                             \
        SET_LGL_VAL(res, LOGICAL_ELT(vec, i));                                 \
        return;                                                                \
      case CPLXSXP:                                                            \
        SET_SXP_VAL(res, Rf_ScalarComplex(COMPLEX_ELT(vec, i)));               \
        return;                                                                \
      case RAWSXP:                                                             \
        SET_SXP_VAL(res, Rf_ScalarRaw(RAW(vec)[i]));                           \
        return;                                                                \
      case VECSXP:                                                             \
        SEXP elt = VECTOR_ELT(vec, i);                                         \
        RAISE_NAMED(elt, NAMED(vec));                                          \
        if (subset2) {                                                         \
          SET_SXP_VAL(res, elt);                                               \
        } else {                                                               \
          SEXP v = Rf_allocVector(VECSXP, 1);                                  \
          SET_VECTOR_ELT(v, 0, elt);                                           \
          SET_SXP_VAL(res, v);                                                 \
        }                                                                      \
        return;                                                                \
      }                                                                        \
    }                                                                          \
  } while (0)

#define DO_FAST_SETVECELT(/* Value* */ target, /* SEXP */ vec,                 \
                          /* R_xlen_t */ i, /* Value */ rhs,                   \
                          /* Rboolean */ subassign2)                           \
  do {                                                                         \
    if (i >= 0 && vec != R_NilValue && XLENGTH(vec) > i) {                     \
      Value __rhs__ = (rhs);                                                   \
      val_unbox_inplace(&__rhs__, 1, 1, 1, 1);                                 \
      ASSUME(TYPEOF(vec) != 0); /* Cannot be NULL after check */               \
      if (TYPEOF(vec) == REALSXP) {                                            \
        switch (VAL_TAG(__rhs__)) {                                            \
        case REALSXP:                                                          \
          REAL(vec)[i] = VAL_DBL(__rhs__);                                     \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        case INTSXP:                                                           \
          REAL(vec)[i] = INTEGER_TO_REAL(VAL_INT(__rhs__));                    \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        case LGLSXP:                                                           \
          REAL(vec)[i] = LOGICAL_TO_REAL(VAL_INT(__rhs__));                    \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        case 0:                                                                \
          break;                                                               \
        default:                                                               \
          UNREACHABLE();                                                       \
        }                                                                      \
      } else if (VAL_TAG(__rhs__) == TYPEOF(vec)) {                            \
        switch (VAL_TAG(__rhs__)) {                                            \
        case INTSXP:                                                           \
          INTEGER(vec)[i] = VAL_INT(__rhs__);                                  \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        case LGLSXP:                                                           \
          LOGICAL(vec)[i] = VAL_INT(__rhs__);                                  \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        default:                                                               \
          UNREACHABLE();                                                       \
        }                                                                      \
      } else if (subassign2 && TYPEOF(vec) == VECSXP) {                        \
        SEXP rhs_sxp = val_as_sexp(rhs);                                       \
        if (rhs_sxp != R_NilValue) {                                           \
          if (MAYBE_REFERENCED(rhs_sxp) && VECTOR_ELT(vec, i) != rhs_sxp) {    \
            R_FixupRHS(vec, rhs_sxp);                                          \
          }                                                                    \
          SET_VECTOR_ELT(vec, i, rhs_sxp);                                     \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        }                                                                      \
      }                                                                        \
    }                                                                          \
  } while (0)

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

#define RSH_LIST_APPEND_EX(/* Value* */ head, /* Value* */ tail,               \
                           /* SEXP */ value, /* RBoolean */ RC,                \
                           /* RBoolean */ ajust_refcount, /* RBoolean */ init) \
  do {                                                                         \
    Value *__h__ = (head);                                                     \
    Value *__t__ = (tail);                                                     \
    SEXP __v__ = (value);                                                      \
    Rboolean __rc__ = (RC);                                                    \
    SEXP __elem__ =                                                            \
        __rc__ ? CONS(__v__, R_NilValue) : CONS_NR(__v__, R_NilValue);         \
                                                                               \
    if (init || VAL_SXP(*__h__) == R_NilValue) {                               \
      SET_SXP_VAL(__h__, __elem__);                                            \
    } else {                                                                   \
      SETCDR(VAL_SXP(*(__t__)), __elem__);                                     \
    }                                                                          \
    SET_SXP_VAL(__t__, __elem__);                                              \
    assert(!BNDCELL_TAG(__elem__));                                            \
    SEXP __car__ = CAR0(__elem__);                                             \
    ASSUME(__car__ == __v__);                                                  \
    if (ajust_refcount) {                                                      \
      if (RC) {                                                                \
        INCREMENT_NAMED(__car__);                                              \
      } else {                                                                 \
        INCREMENT_LINKS(__car__);                                              \
      }                                                                        \
    }                                                                          \
  } while (0)

#define RSH_PUSH_ARG(/* Value* */ head, /* Value* */ tail, /* SEXP */ value)   \
  RSH_LIST_APPEND_EX(head, tail, value, FALSE, TRUE, FALSE)

#define RSH_INIT_PUSH_ARG(/* Value* */ head, /* Value* */ tail,                \
                          /* SEXP */ value)                                    \
  RSH_LIST_APPEND_EX(head, tail, value, FALSE, TRUE, TRUE)

#define RSH_SET_TAG(/* Value */ v, /* SEXP */ t)                               \
  do {                                                                         \
    SEXP __v__ = VAL_SXP((v));                                                 \
    SEXP __tag__ = (t);                                                        \
    if (__tag__ != R_NilValue) {                                               \
      if (__v__ != R_NilValue)                                                 \
        SET_TAG(__v__, Rf_CreateTag(__tag__));                                 \
    }                                                                          \
  } while (0)

#define RSH_SET_TAG_SYMBOL(/* Value */ v, /* SEXP */ t)                        \
  do {                                                                         \
    SEXP __v__ = VAL_SXP((v));                                                 \
    if (__v__ != R_NilValue) {                                                 \
      SET_TAG(__v__, t);                                                       \
    }                                                                          \
  } while (0)

#define RSH_CALL_ARGS_DECREMENT_LINKS(args)                                    \
  do {                                                                         \
    SEXP __a__ = (args);                                                       \
    while (__a__ != R_NilValue) {                                              \
      assert(!BNDCELL_TAG(__a__));                                             \
      DECREMENT_LINKS(CAR0(__a__));                                            \
      __a__ = CDR(__a__);                                                      \
    }                                                                          \
  } while (0)

static INLINE void INCLNK_stack(R_bcstack_t *top) { R_BCProtTop = top; }

static INLINE void DECLNK_stack(R_bcstack_t *base) {
  // FIXME: protect using R_BCProtCommitted

  // if (base < R_BCProtCommitted)
  //{
  //   R_bcstack_t *top = R_BCProtCommitted;
  //   for (R_bcstack_t *p = base; p < top; p++)
  //   {
  //     if (p->tag == RAWMEM_TAG || p->tag == CACHESZ_TAG)
  //       p += p->u.ival;
  //     else if (p->tag == 0)
  //       DECREMENT_LINKS(p->u.sxpval);
  //   }
  //   R_BCProtCommitted = base;
  // }
  R_BCProtTop = base;
}

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
  expr = eval(expr, R_GlobalEnv);
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

static ALWAYS_INLINE SEXP STACKVAL_TO_SEXP(R_bcstack_t v) {
  // Most likely we will have a SEXP already, so check for that first
  if (v.tag == 0) {
    return v.u.sxpval;
  }
  switch (v.tag) {
  case REALSXP:
    return Rf_ScalarReal(v.u.dval);
  case INTSXP:
    return Rf_ScalarInteger(v.u.ival);
  case LGLSXP:
    return Rsh_ScalarLogical(v.u.ival);
  case RSH_ISQSXP: {
    Rsh_isqinfo_t isqinfo = v.u.isqval;
    return R_compact_intrange(isqinfo.n1, isqinfo.n2);
  }
  default:
    UNREACHABLE();
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

ALWAYS_INLINE R_xlen_t XLENGTH_0(SEXP x) { return STDVEC_LENGTH(x); }

#define LONG_VECTOR_SUPPORT
ALWAYS_INLINE int LENGTH_EX_0(SEXP x, const char *file, int line) {
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

#define BCODE_CODE(x) CAR(x)
#define BCODE_CONSTS(x) CDR(x)
#define IS_BYTECODE(x) (TYPEOF(x) == BCODESXP)

// FIXME: implement signal checking
#define RSH_CHECK_SIGINT()
typedef int32_t i32;
typedef uint64_t u64;
typedef uint32_t u32;

// VALUE REPRESENTATION
// --------------------

typedef R_bcstack_t Value;

// For copy-and-patch. Possibly for Rsh as well.
// To allow patching of internal symbols without unnecessary indirection
#ifdef RCP
#define EXTERN_ATTRIBUTES                                                      \
  __attribute__((section(".data"), visibility("hidden")))
#else
#define EXTERN_ATTRIBUTES
#endif

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

// LINKING MODEL
// -------------

// The code linking to this header can run in two modes:
// 1. as a standalone executable (shared library) that uses just the R runtime
//    which is used in tests
// 2. as a part of the Rsh package, loaded by the ORC JIT
//
// In the first case all the runtime functions are part of one translation unit.
// All of them should be static and depending on the NDEBUG state also inline.
//
// In the second case, only the Rsh instructions should be inlined and the rest
// should be linked to.
#ifdef RSH_TESTS
#define JIT_DECL
#define JIT_DEF
#else
#define JIT_DECL EXTERN_ATTRIBUTES extern
#define JIT_DEF
#endif

// PERFORMANCE COUNTERS
// --------------------

#ifdef RSH_PC
typedef struct {
  // number of times the slow path of Rsh_arith has been taken
  u32 slow_arith;
  // number of times the slow path of Rsh_math1 has been taken
  u32 slow_math1;
  // number of times the slow path of Rsh_unary has been taken
  u32 slow_unary;
  // number of times the slow path of Rsh_relop has been taken
  u32 slow_relop;
  // number of times the slow path of Rsh_*_subset has been taken
  u32 slow_subset;
  // number of times the slow path of Rsh_*_subassign has been taken
  u32 slow_subassign;
  // number of times the Rsh_*_subset operation dispatched
  u32 dispatched_subset;
  // number of times the Rsh_*_subassign operation dispatched
  u32 dispatched_subassign;
  // number of new ISQ values
  u32 isq;
  // number of ISQ loops
  u32 isq_for;
  // number of times R_Primitive was called
  u32 r_primitive;
  // number of times OP_GETVAR was called
  u32 getvar;
  // number of times variable was resolved in environment
  u32 slow_getvar;
} Rsh_PerfCounters;

#ifndef RSH_TESTS
// the global performance counters
JIT_DECL Rsh_PerfCounters Rsh_GPC;
#endif

#define RSH_PC_INC(m) Rsh_GPC.m++
#else
#define RSH_PC_INC(m)
#endif

#define X_MATH1_OPS                                                            \
  X(sqrt, SQRT_OP, Sqrt)                                                       \
  X(exp, EXP_OP, Exp)

#define X_ARITH_OPS                                                            \
  X(+, ADD_OP, Add)                                                            \
  X(-, SUB_OP, Sub)                                                            \
  X(*, MUL_OP, Mul)                                                            \
  X(/, DIV_OP, Div)                                                            \
  X(^, EXPT_OP, Expt)

#define X_REL_OPS                                                              \
  X(==, EQ_OP, Eq)                                                             \
  X(!=, NE_OP, Ne)                                                             \
  X(<, LT_OP, Lt)                                                              \
  X(<=, LE_OP, Le)                                                             \
  X(>, GT_OP, Gt)                                                              \
  X(>=, GE_OP, Ge)

#define X_UNARY_OPS                                                            \
  X(+, UPLUS_OP, UPlus)                                                        \
  X(-, UMINUS_OP, UMinus)

#define X_LOGIC2_OPS                                                           \
  X(&, AND_OP, And)                                                            \
  X(|, OR_OP, Or)

// X(name, idx as in math1, C function name)
#define X_MATH1_EXT_OPS                                                        \
  X(floor, 0, floor)                                                           \
  X(ceiling, 1, ceil)                                                          \
  X(sign, 2, sign)                                                             \
  X(expm1, 3, expm1)                                                           \
  X(log1p, 4, log1p)                                                           \
  X(cos, 5, cos)                                                               \
  X(sin, 6, sin)                                                               \
  X(tan, 7, tan)                                                               \
  X(acos, 8, acos)                                                             \
  X(asin, 9, asin)                                                             \
  X(atan, 10, atan)                                                            \
  X(cosh, 11, cosh)                                                            \
  X(sinh, 12, sinh)                                                            \
  X(tanh, 13, tanh)                                                            \
  X(acosh, 14, acosh)                                                          \
  X(asinh, 15, asinh)                                                          \
  X(atanh, 16, atanh)                                                          \
  X(lgamma, 17, lgammafn)                                                      \
  X(gamma, 18, gammafn)                                                        \
  X(digamma, 19, digamma)                                                      \
  X(trigamma, 20, trigamma)                                                    \
  X(cospi, 21, cospi)                                                          \
  X(sinpi, 22, sinpi)                                                          \
  X(tanpi, 23, Rtanpi)

typedef double (*Rsh_Math1Fun)(double);

#define X(a, b, c) b,
typedef enum { X_ARITH_OPS } RshArithOp;
typedef enum { X_REL_OPS } RshRelOp;
typedef enum { X_MATH1_OPS } RshMath1Op;
typedef enum { X_UNARY_OPS } RshUnaryOp;
typedef enum { X_LOGIC2_OPS } RshLogic2Op;
#undef X

#define RSH_R_SYMBOLS                                                          \
  X([, Rsh_Subset)                                                        \
  X([[, Rsh_Subset2)                                                      \
  X(value, Rsh_Value)                                                     \
  X([<-, Rsh_Subassign)                                                   \
  X([[<-, Rsh_Subassign2)                                                 \
  X(.External2, Rsh_DotExternal2)                                         \
  X(*tmp*, Rsh_Tmpval)                                                    \
  X(:, Rsh_Colon)                                                         \
  X(seq_along, Rsh_SeqAlong)                                              \
  X(seq_len, Rsh_SeqLen)                                                  \
  X(log, Rsh_Log)

#ifdef RCP

// Create extern declarations for all ops and symbols
#define X(a, b, ...)                                                           \
  extern const void *const _RCP_CRUNTIME_OPS_R_Primitive__RCP__##b[];
X_ARITH_OPS
X_REL_OPS
X_MATH1_OPS
X_UNARY_OPS
X_LOGIC2_OPS
X_MATH1_EXT_OPS
RSH_R_SYMBOLS
#undef X
extern const void *const _RCP_CRUNTIME_OPS_R_Primitive__RCP__Rsh_Not[];

#define X(a, b, ...)                                                           \
  extern const void *const _RCP_CRUNTIME_OPS_Rf_install__RCP__##b[];
X_ARITH_OPS
X_REL_OPS
X_UNARY_OPS
X_MATH1_EXT_OPS
RSH_R_SYMBOLS
#undef X

// Map to correct extern symbols
// Rsh TODO: do we need to preserve calls to R_Primitive?
#define RCP_OPS(fun, arg)                                                      \
  (const SEXP const)(&_RCP_CRUNTIME_OPS_##fun##__RCP__##arg)

#define RSH_ARITH_OPS(op) (RCP_OPS(R_Primitive, op))
#define RSH_ARITH_OP_SYMS(op) (RCP_OPS(Rf_install, op))
#define RSH_REL_OPS(op) (RCP_OPS(R_Primitive, op))
#define RSH_REL_OP_SYMS(op) (RCP_OPS(Rf_install, op))
#define RSH_MATH1_OPS(op) (RCP_OPS(R_Primitive, op))
#define RSH_UNARY_OPS(op) (RCP_OPS(R_Primitive, op))
#define RSH_UNARY_OP_SYMS(op) (RCP_OPS(Rf_install, op))
#define RSH_LOGIC2_OPS(op) (RCP_OPS(R_Primitive, op))
#define RSH_MATH1_EXT_OPS(op) (RCP_OPS(R_Primitive, op))
#define RSH_MATH1_EXT_SYMS(op) (RCP_OPS(Rf_install, op))

#define Rsh_SubsetSym RCP_OPS(Rf_install, Rsh_Subset)
#define Rsh_SubsetOp RCP_OPS(R_Primitive, Rsh_Subset)
#define Rsh_Subset2Sym RCP_OPS(Rf_install, Rsh_Subset2)
#define Rsh_Subset2Op RCP_OPS(R_Primitive, Rsh_Subset2)
#define Rsh_ValueSym RCP_OPS(Rf_install, Rsh_Value)
#define Rsh_ValueOp RCP_OPS(R_Primitive, Rsh_Value)
#define Rsh_SubassignSym RCP_OPS(Rf_install, Rsh_Subassign)
#define Rsh_SubassignOp RCP_OPS(R_Primitive, Rsh_Subassign)
#define Rsh_Subassign2Sym RCP_OPS(Rf_install, Rsh_Subassign2)
#define Rsh_Subassign2Op RCP_OPS(R_Primitive, Rsh_Subassign2)
#define Rsh_DotExternal2Sym RCP_OPS(Rf_install, Rsh_DotExternal2)
#define Rsh_DotExternal2Op RCP_OPS(R_Primitive, Rsh_DotExternal2)
#define Rsh_TmpvalSym RCP_OPS(Rf_install, Rsh_Tmpval)
#define Rsh_TmpvalOp RCP_OPS(R_Primitive, Rsh_Tmpval)
#define Rsh_ColonSym RCP_OPS(Rf_install, Rsh_Colon)
#define Rsh_ColonOp RCP_OPS(R_Primitive, Rsh_Colon)
#define Rsh_SeqAlongSym RCP_OPS(Rf_install, Rsh_SeqAlong)
#define Rsh_SeqAlongOp RCP_OPS(R_Primitive, Rsh_SeqAlong)
#define Rsh_SeqLenSym RCP_OPS(Rf_install, Rsh_SeqLen)
#define Rsh_SeqLenOp RCP_OPS(R_Primitive, Rsh_SeqLen)
#define Rsh_LogSym RCP_OPS(Rf_install, Rsh_Log)
#define Rsh_LogOp RCP_OPS(R_Primitive, Rsh_Log)

#define NOT_OP RCP_OPS(R_Primitive, Rsh_Not)
#define LOG_OP RCP_OPS(R_Primitive, Rsh_Log)

/*************MATH1 specialization*****************/
#include <Rmath.h>
#define X(a, b, c) &c,
static Rsh_Math1Fun R_MATH1_EXT_FUNS[] = {X_MATH1_EXT_OPS};
#undef X
/**************************************************/

#else

#ifndef RSH_TESTS
#define X(a, b)                                                                \
  extern SEXP b##Sym;                                                          \
  extern SEXP b##Op;

RSH_R_SYMBOLS
#undef X
#endif

// while a little cumbersome, it allows us to keep everything just
// in the header file, simplifying the standalone (test) mode.
#ifdef RSH_TESTS
#define X(a, b, c) NULL,
SEXP R_ARITH_OPS[] = {X_ARITH_OPS};
SEXP R_ARITH_OP_SYMS[] = {X_ARITH_OPS};
SEXP R_REL_OPS[] = {X_REL_OPS};
SEXP R_REL_OP_SYMS[] = {X_REL_OPS};

SEXP R_MATH1_OPS[] = {X_MATH1_OPS};
SEXP R_UNARY_OPS[] = {X_UNARY_OPS};
SEXP R_UNARY_OP_SYMS[] = {X_UNARY_OPS};
SEXP R_LOGIC2_OPS[] = {X_LOGIC2_OPS};

SEXP R_MATH1_EXT_OPS[] = {X_MATH1_EXT_OPS};
SEXP R_MATH1_EXT_SYMS[] = {X_MATH1_EXT_OPS};
Rsh_Math1Fun R_MATH1_EXT_FUNS[] = {X_MATH1_EXT_OPS};
#undef X
#else
extern SEXP R_ARITH_OPS[];
extern SEXP R_ARITH_OP_SYMS[];
extern SEXP R_REL_OPS[];
extern SEXP R_REL_OP_SYMS[];

extern SEXP R_MATH1_OPS[];
extern SEXP R_UNARY_OPS[];
extern SEXP R_UNARY_OP_SYMS[];
extern SEXP R_LOGIC2_OPS[];

extern SEXP R_MATH1_EXT_OPS[];
extern SEXP R_MATH1_EXT_SYMS[];
extern Rsh_Math1Fun R_MATH1_EXT_FUNS[];
#endif

#define RSH_ARITH_OPS(op) (R_ARITH_OPS[op])
#define RSH_ARITH_OP_SYMS(op) (R_ARITH_OP_SYMS[op])
#define RSH_REL_OPS(op) (R_REL_OPS[op])
#define RSH_REL_OP_SYMS(op) (R_REL_OP_SYMS[op])
#define RSH_MATH1_OPS(op) (R_MATH1_OPS[op])
#define RSH_UNARY_OPS(op) (R_UNARY_OPS[op])
#define RSH_UNARY_OP_SYMS(op) (R_UNARY_OP_SYMS[op])
#define RSH_LOGIC2_OPS(op) (R_LOGIC2_OPS[op])
#define RSH_MATH1_EXT_OPS(op) (R_MATH1_EXT_OPS[op])
#define RSH_MATH1_EXT_SYMS(op) (R_MATH1_EXT_SYMS[op])

JIT_DECL Value *Rsh_NilValue;
JIT_DECL Value *Rsh_UnboundValue;
JIT_DECL SEXP NOT_OP;
JIT_DECL SEXP LOG_OP; // FIXME: Is this needed? Log primitive is already defined
                      // in RSH_R_SYMBOLS
#endif

#define ISQSXP RSH_ISQSXP

static ALWAYS_INLINE int TYPEOF_VAL(Value v) {
  switch (v.tag) {
  case 0:
    return TYPEOF(v.u.sxpval);
  case ISQSXP:
    return INTSXP;
  default:
    return v.tag;
  }
}
// Accessors

#ifdef ASSERTS
#define RSH_CHK_VAL_TYPE(v, t)                                                 \
  if ((v).tag != (t))                                                          \
    Rf_error("Expected unboxed: %d, got: %d", (t), (v).tag);
#else
#define RSH_CHK_VAL_TYPE(v, t)
#endif

static INLINE int VAL_INT(Value v) {
#ifdef ASSERTS
  if ((v).tag != INTSXP && (v).tag != LGLSXP) {
    Rf_error("Expected unboxed: INTSXP or LGLSXP, got: %d", v.tag);
  }
#endif
  return (v).u.ival;
}

static INLINE double VAL_DBL(Value v) {
  RSH_CHK_VAL_TYPE(v, REALSXP);
  return (v).u.dval;
}

static INLINE SEXP VAL_SXP(Value v) {
  RSH_CHK_VAL_TYPE(v, 0);
  return (v).u.sxpval;
}

static INLINE Rsh_isqinfo_t VAL_ISQ(Value v) {
  RSH_CHK_VAL_TYPE(v, ISQSXP);
  return v.u.isqval;
}

// Type checkers

#define VAL_IS_INT(v) ((v).tag == INTSXP)
#define VAL_IS_INT_NOT_NA(v) (VAL_IS_INT(v) && VAL_INT(v) != NA_INTEGER)
#define VAL_IS_DBL(v) ((v).tag == REALSXP)
#define VAL_IS_DBL_NOT_NAN(v) VAL_IS_DBL(v) && !ISNAN(VAL_DBL(v))
#define VAL_IS_LGL(v) ((v).tag == LGLSXP)
#define VAL_IS_LGL_NOT_NA(v) (VAL_IS_LGL(v) && VAL_INT(v) != NA_LOGICAL)
#define VAL_IS_SXP(v) ((v).tag == 0)
#define VAL_IS_ISQ(v) ((v).tag == ISQSXP)

// FIXME: check type!
// FIXME: set flags?

#define SET_INT_VAL(target, value)                                             \
  do {                                                                         \
    Value *__node__ = (target);                                                \
    __node__->u.ival = (value);                                                \
    __node__->tag = INTSXP;                                                    \
  } while (0);

#define SET_DBL_VAL(target, value)                                             \
  do {                                                                         \
    Value *__node__ = (target);                                                \
    __node__->u.dval = (value);                                                \
    __node__->tag = REALSXP;                                                   \
  } while (0);

#define SET_LGL_VAL(target, value)                                             \
  do {                                                                         \
    Value *__node__ = (target);                                                \
    __node__->u.ival = (value);                                                \
    __node__->tag = LGLSXP;                                                    \
  } while (0);

#define SET_SXP_VAL(target, value)                                             \
  do {                                                                         \
    Value *__node__ = (target);                                                \
    __node__->u.sxpval = (value);                                              \
    __node__->tag = 0;                                                         \
  } while (0);

// TODO!! Needs fixing!
#define SET_SXP_NLNK_VAL SET_SXP_VAL

#define SET_ISQ_VAL(target, value)                                             \
  do {                                                                         \
    Value *__node__ = (target);                                                \
    __node__->u.isqval = (value);                                              \
    __node__->tag = ISQSXP;                                                    \
  } while (0);

// FIXME: is this enough or so we need to check of the obj flag?
#define SET_UNBOXED_VAL(target, value)                                         \
  do {                                                                         \
    SEXP __v__ = (value);                                                      \
    Value *__n__ = (target);                                                   \
    if (IS_ANY_SIMPLE_SCALAR(__v__)) {                                         \
      assert(XLENGTH(__v__) == 1);                                             \
      switch (TYPEOF(__v__)) {                                                 \
      case REALSXP:                                                            \
        __n__->u.dval = REAL(__v__)[0];                                        \
        __n__->tag = TYPEOF(__v__);                                            \
        break;                                                                 \
      case INTSXP:                                                             \
        __n__->u.ival = INTEGER(__v__)[0];                                     \
        __n__->tag = TYPEOF(__v__);                                            \
        break;                                                                 \
      case LGLSXP:                                                             \
        __n__->u.ival = LOGICAL(__v__)[0];                                     \
        __n__->tag = TYPEOF(__v__);                                            \
        break;                                                                 \
      default:                                                                 \
        SET_SXP_VAL(__n__, __v__);                                             \
        break;                                                                 \
      }                                                                        \
    } else {                                                                   \
      SET_SXP_VAL(__n__, __v__);                                               \
    }                                                                          \
  } while (0)

#ifndef RSH_AGGRESSIVE_UNBOXING
#define SET_VAL SET_SXP_VAL
#else
#define SET_VAL SET_UNBOXED_VAL
#endif

#define SET_VAL_N(n, value) SET_VAL(GET_VAL((n)), (value))
#define SET_SXP_VAL_N(n, value) SET_SXP_VAL(GET_VAL((n)), (value))

#define VAL_TAG(v) ((v).tag)

// Checked accessors

// TODO: can we share this bcell expand?
// TODO: rename
#define val_as_sexp STACKVAL_TO_SEXP

#ifndef NO_STACK_OVERFLOW_CHECK
#define CHECK_OVERFLOW(__n__)                                                  \
  do {                                                                         \
    if (__builtin_expect(R_BCNodeStackTop + __n__ > R_BCNodeStackEnd, 0)) {    \
      nodeStackOverflow();                                                     \
    }                                                                          \
  } while (0)
#else
#define CHECK_OVERFLOW(__n__)
#endif

#define GET_VAL_EX(stack, i) (stack + (i))
#define GET_VAL(i) GET_VAL_EX(stack, i)

// BINDING CELLS (bcell) implementation
// ------------------------------------
//
// A binding cell is a hack that R BC interpreter uses to gain some performance
// in the number of environment lookups for GETVAR and SETVAR. It also help
// with scalar doubles, intergers and logicals. The problem with R BNDCELLs is
// that its implementation is private, scattered over buch of files. Bringing
// it over is not easy as it brings a whole bunch of other stuff.
//
// Essentially a binding cell is a LISTSXP pointing to the frame in which the
// binding is stored. The CAR of the cell is the value of the binding
// (BCellVal). The tag of the cell identifies whether it is a scalar or a full
// SEXP. The BCELL_TAG(cell) is one of: - REALSXP, INTSXP, LGLSXP for scalars -
// 0 for any other type The BCELL_VAL(cell) is the value of the binding.

typedef SEXP BCell;
typedef union {
  int ival;
  double dval;
  SEXP sxpval;
#ifdef UNBOXED_ISQ_CELL
  Rsh_isqinfo_t isqval;
#endif
} BCellVal;

#define DEFINE_BCELL(name) BCell name = R_NilValue;

#define DEFINE_REGS(n)                                                         \
  do {                                                                         \
    int __n__ = (n);                                                           \
    CHECK_OVERFLOW(__n__);                                                     \
    for (int __i__ = 0; __i__ < (__n__); __i__++) {                            \
      R_BCNodeStackTop->tag = INTSXP;                                          \
      R_BCNodeStackTop->flags = 0;                                             \
      R_BCNodeStackTop->u.ival = 123456789;                                    \
      R_BCNodeStackTop++;                                                      \
    }                                                                          \
  } while (0)

#define BCELL_IS_UNBOUND(v) (BCELL_TAG(v) == 0 && CAR0(v) == R_UnboundValue)
#define BCELL_TAG(cell) ((cell)->sxpinfo.extra)
#define BCELL_TAG_SET(cell, tag) BCELL_TAG(cell) = tag
#define BCELL_VAL(cell) ((cell) != R_NilValue ? CAR0(cell) : R_UnboundValue)
#define BCELL_DVAL(v) ((BCellVal *)&CAR0(v))->dval
#define BCELL_IVAL(v) ((BCellVal *)&CAR0(v))->ival
#define BCELL_LVAL(v) ((BCellVal *)&CAR0(v))->ival

#define PROMISE_DVAL BCELL_DVAL
#define PROMISE_IVAL BCELL_IVAL
#define PROMISE_LVAL BCELL_LVAL

#define BCELL_DVAL_SET(cell, dval) (BCELL_DVAL(cell) = (dval))
#define BCELL_IVAL_SET(cell, ival) (BCELL_IVAL(cell) = (ival))
#define BCELL_LVAL_SET(cell, lval) (BCELL_LVAL(cell) = (lval))

#define BCELL_TAG_WR(v) (BINDING_IS_LOCKED(v) ? 0 : BCELL_TAG(v))
#define BCELL_WRITABLE(v) (v != R_NilValue && IS_SIMPLE_BINDING(v))

#define BCELL_INIT(cell, type)                                                 \
  do {                                                                         \
    if (BCELL_TAG(cell) == 0) {                                                \
      SETCAR(cell, R_NilValue);                                                \
      SET_MISSING(cell, 0);                                                    \
    }                                                                          \
    BCELL_TAG_SET(cell, type);                                                 \
    assert(MISSING(cell) == 0);                                                \
  } while (0)

#define BCELL_DVAL_NEW(cell, val)                                              \
  do {                                                                         \
    BCELL_INIT(cell, REALSXP);                                                 \
    BCELL_DVAL_SET(cell, val);                                                 \
  } while (0)

#define BCELL_IVAL_NEW(cell, val)                                              \
  do {                                                                         \
    BCELL_INIT(cell, INTSXP);                                                  \
    BCELL_IVAL_SET(cell, val);                                                 \
  } while (0)

#define BCELL_LVAL_NEW(cell, val)                                              \
  do {                                                                         \
    BCELL_INIT(cell, LGLSXP);                                                  \
    BCELL_LVAL_SET(cell, val);                                                 \
  } while (0)

#define BCELL_TAG_CLEAR(cell)                                                  \
  do {                                                                         \
    if (BCELL_TAG(cell)) {                                                     \
      CAR0(cell) = R_NilValue;                                                 \
      BCELL_TAG_SET(cell, 0);                                                  \
    }                                                                          \
  } while (0)

// This is different from the R implementation:
/* do { \
     BCELL_TAG_CLEAR(cell); \
     SETCAR(cell, val); \
   } while (0) */
// but looking at the code, the SETCAR clears the tag anyway
#define BCELL_SET(cell, val) SETCAR(cell, val)

static INLINE void bcell_expand(BCell b) {
  int typetag = BCELL_TAG(b);
  if (typetag) {
    SEXP val;
    BCellVal vv;
    vv.sxpval = CAR0(b);
    PROTECT(b);
    switch (typetag) {
    case REALSXP:
      val = Rf_ScalarReal(vv.dval);
      break;
    case INTSXP:
      val = Rf_ScalarInteger(vv.ival);
      break;
    case LGLSXP:
      val = Rsh_ScalarLogical(vv.ival);
      break;
#ifdef UNBOXED_ISQ_CELL
    case ISQSXP: {
      Rsh_isqinfo_t isqinfo = vv.isqval;
      val = R_compact_intrange(isqinfo.n1, isqinfo.n2);
      break;
    }
#endif
    default:
      UNREACHABLE();
    }
    BCELL_SET(b, val);
    INCREMENT_NAMED(val);
    UNPROTECT(1);
  }
}

#define IS_USER_DATABASE(rho)                                                  \
  (OBJECT((rho)) && Rf_inherits((rho), "UserDefinedDatabase"))

// Returns a binding cell of the given symbol in rho or R_NilValue if the
// symbol is not bound or not bindable Ported from GET_BINDING_CELL
static ALWAYS_INLINE BCell bcell_get(SEXP symbol, SEXP rho) {
  assert(rho != R_BaseEnv && rho != R_BaseNamespace && !IS_USER_DATABASE(rho));
  SEXP cell = findVarLocInFrame(rho, symbol, NULL);
  assert(cell != NULL);
  if (IS_ACTIVE_BINDING(cell)) {
    return R_NilValue;
  }
  return cell;
}
static INLINE SEXP bcell_value(SEXP cell);
// Ensures that the symbol from rho is bound in the given cell as long
// as the symbol in rho is bindable. If not, it sets the cell to R_NilValue
static SEXP ALWAYS_INLINE bcell_ensure_cached(SEXP symbol, SEXP rho,
                                              BCell *const cell) {
  /* The value returned by GET_CACHED_BINDING_CELL is either a
     binding cell or R_NilValue.  TAG(R_NilValue) is R_NilValue, and
     that will not equal symbol. So a separate test for cell !=
     R_NilValue is not needed. */
  // Is is faster to check for R_NilValue tho
  if (*cell == R_NilValue || BCELL_IS_UNBOUND(*cell)) {
    *cell = bcell_get(symbol, rho);
  } else {
    // Claude claims the assert should never trigger:
    /* The assert's else-branch requires `!BCELL_IS_UNBOUND(*cell)`, defined as
     * `!(BCELL_TAG==0 && CAR==R_UnboundValue)`. The only R-level operation that
     * removes a binding and makes the cell collectible is `rm()`, which calls
     * `RemoveFromList` → `SET_BNDCELL(cell, R_UnboundValue)` →
     * `CLEAR_BNDCELL_TAG(cell)`. This **sets `BCELL_TAG=0` and
     * `CAR=R_UnboundValue`**, making `BCELL_IS_UNBOUND=TRUE`.*/
    assert(TAG(*cell) == symbol);
  }

  assert(*cell != NULL);
  assert(!BCELL_IS_UNBOUND(*cell));
  return *cell;
}

// Returns the bound value in the case it is bound or Rsh_UnboundValue
// otherwise.
#define BINDING_VALUE bcell_value
static INLINE SEXP bcell_value(SEXP cell) {
  if (BCELL_TAG(cell)) {
    bcell_expand(cell);
    return CAR0(cell);
  } else if (cell != R_NilValue && !IS_ACTIVE_BINDING(cell)) {
    return CAR0(cell);
  } else {
    return R_UnboundValue;
  }
}

#define BCELL_INLINE(cell, v)                                                  \
  do {                                                                         \
    BCell __cell__ = (cell);                                                   \
    SEXP __v__ = (v);                                                          \
    if (BCELL_WRITABLE(__cell__) && IS_ANY_SIMPLE_SCALAR(__v__)) {             \
      switch (TYPEOF(__v__)) {                                                 \
      case REALSXP:                                                            \
        BCELL_DVAL_NEW(__cell__, REAL(__v__)[0]);                              \
        break;                                                                 \
      case INTSXP:                                                             \
        BCELL_IVAL_NEW(__cell__, INTEGER(__v__)[0]);                           \
        break;                                                                 \
      case LGLSXP:                                                             \
        BCELL_LVAL_NEW(__cell__, INTEGER(__v__)[0]);                           \
        break;                                                                 \
      }                                                                        \
    }                                                                          \
  } while (0)

static ALWAYS_INLINE Rboolean bcell_set_value(BCell cell, SEXP value) {
  if (BCELL_WRITABLE(cell)) {
    if (BNDCELL_TAG(cell) || CAR0(cell) != value) {
      BCELL_SET(cell, value);
      SET_MISSING(cell, 0);
#ifdef RSH_AGGRESSIVE_UNBOXING
      else {
        BCELL_INLINE(cell, value);
      }
#endif
    }
    return TRUE;
  }
  return FALSE;
}

// CONSTANTS

// FIXME: use the SCALAR_ macros
#define Rsh_const(env, idx) ((SEXP *)STDVEC_DATAPTR((env)))[(idx)]

// CLOSURE REPRESENTATION
// ----------------------
//
// Closure (CLOSXP) whose body is a BCODESXP are compiled into C functions.
// At runtime, these closures are represented as regular R closures with
// EXTPTRSXP body containing a pointer to the compiled C function. The
// protected object of this EXTPTRSXP is the C constant pool.

// RUNTIME CONSTANTS
// -----------------

#ifdef RSH_TESTS
#include "runtime_impl.h"
#else
JIT_DECL SEXP Rsh_initialize_runtime(void);
JIT_DECL SEXP Rsh_pc_get(void);
JIT_DECL SEXP Rsh_pc_reset(void);
#endif

// UTILITIES
// ---------

#define INIT_CALL_FRAME(head, tail)                                            \
  SET_SXP_VAL(head, R_NilValue);                                               \
  SET_SXP_VAL(tail, R_NilValue);

// Converts the given value to an index, or returns non-positive value
static INLINE R_xlen_t as_index(Value v) {
  val_unbox_inplace(&v, 0, 1, 1, 0);
  switch (VAL_TAG(v)) {
  case INTSXP: {
    int i = VAL_INT(v);
    static_assert(NA_INTEGER <= 0 && ((R_xlen_t)NA_INTEGER - 1) <= 0);
    // Even if the value is NA, the result is only checked for being postive
    // (which NA isn't anyway). NA_INTEGER is the smallest possible int32, but
    // R_xlen_t is int64 so it fits well even if substracted from which some
    // code does to get 0-based index.
    return (R_xlen_t)i;
  }
  case REALSXP: {
    double i = VAL_DBL(v);
    // Originally tested for !ISNAN(i), but the other comparison check(s) fail
    // for NaN anyway (IEEE 754). Originally tested for i > 0, but we can
    // return arbitrary non-positive value to indicate failure.
    if (i <= R_XLEN_T_MAX) {
      return (R_xlen_t)i;
    }
    break;
  }
  case 0:
  case LGLSXP:
  case ISQSXP:
    break;
  default:
    UNREACHABLE();
  }
  return 0;
}

static INLINE R_xlen_t Rsh_compute_index(SEXP dim, Value const *ix, int rank) {
  if (rank != LENGTH(dim)) {
    return -1;
  }

  int *idim = INTEGER(dim);
  R_xlen_t mul = 1;
  R_xlen_t k = 0;

  for (int i = 0; i < rank; i++) {
    R_xlen_t j = as_index(*(ix + i)) - 1;

    if (j < 0 || j >= idim[i]) {
      return -1;
    }

    k += mul * j;
    mul *= idim[i];
  }

  return k;
}

static INLINE SEXP Rsh_append_values_to_args(Value *stack, Value const *vals,
                                             int n, SEXP args) {
  Value const *p = vals + n - 1;

  // We are building the argument list from the back so we need to procted the
  // individual cell. Instead of PROTECT/UNPROTECT calls, we can use the BC
  // stack.
  // FIXME: the same is used in the Rsh_Call, would be good to unify

  for (int i = 0; i < n; i++, p--) {
    PROTECT(args);
    args = CONS_NR(val_as_sexp(*p), args);
    UNPROTECT(1);
  }

  return args;
}
