#ifndef RUNTIME_H
#define RUNTIME_H

// THIS HEADER NEEDS TO BE A C-compatible HEADER
// IT IS USED BY THE SERVER COMPILER

#define RSH

// MAKE SURE Rinternals.h is not listed!
#include "runtime_internals.h"
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

typedef int32_t i32;
typedef uint64_t u64;
typedef uint32_t u32;

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
#define JIT_DECL extern
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

#ifndef RSH_TESTS
#define X(a, b)                                                                \
  extern SEXP b##Sym;                                                          \
  extern SEXP b##Op;

RSH_R_SYMBOLS
#undef X
#endif

// VALUE REPRESENTATION
// --------------------

typedef R_bcstack_t Value;

// Accessors

#ifdef ASSERTS
#define RSH_CHK_VAL_TYPE(v, t)                                                 \
  if ((v).tag != (t))                                                          \
    Rf_error("Expected unboxed: %d, got: %d", (t), (v).tag);
#else
#define RSH_CHK_VAL_TYPE(v, t)
#endif

static INLINE int VAL_INT(Value v) {
  RSH_CHK_VAL_TYPE(v, INTSXP);
  return (v).u.ival;
}

static INLINE double VAL_DBL(Value v) {
  RSH_CHK_VAL_TYPE(v, REALSXP);
  return (v).u.dval;
}

static INLINE SEXP VAL_SXP(Value v) {
#ifdef ASSERTS
  if ((v).tag != 0) {
    Rf_error("Expected a SEXP, got unboxed: %d", (v).tag);
  }
#endif
  return (v).u.sxpval;
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
    __node__->tag = INTSXP;                                                    \
    __node__->u.ival = (value);                                                \
  } while (0);

#define SET_DBL_VAL(target, value)                                             \
  do {                                                                         \
    Value *__node__ = (target);                                                \
    __node__->tag = REALSXP;                                                   \
    __node__->u.dval = (value);                                                \
  } while (0);

#define SET_LGL_VAL(target, value)                                             \
  do {                                                                         \
    Value *__node__ = (target);                                                \
    __node__->tag = LGLSXP;                                                    \
    __node__->u.ival = (value);                                                \
  } while (0);

#define SET_SXP_VAL(target, value)                                             \
  do {                                                                         \
    Value *__node__ = (target);                                                \
    __node__->tag = 0;                                                         \
    __node__->u.sxpval = (value);                                              \
  } while (0);

// FIXME: is this enough or so we need to check of the obj flag?
#define SET_VAL(target, value)                                                 \
  do {                                                                         \
    SEXP __v__ = (value);                                                      \
    Value *__n__ = (target);                                                   \
    if (__v__->sxpinfo.scalar && ATTRIB(__v__) == R_NilValue) {                \
      switch (TYPEOF(__v__)) {                                                 \
      case REALSXP:                                                            \
        SET_DBL_VAL(__n__, REAL(__v__)[0]);                                    \
        break;                                                                 \
      case INTSXP:                                                             \
        SET_INT_VAL(__n__, INTEGER(__v__)[0]);                                 \
        break;                                                                 \
      case LGLSXP:                                                             \
        SET_LGL_VAL(__n__, INTEGER(__v__)[0]);                                 \
        break;                                                                 \
      default:                                                                 \
        SET_SXP_VAL(__n__, __v__);                                             \
      }                                                                        \
    } else {                                                                   \
      SET_SXP_VAL(__n__, __v__);                                               \
    }                                                                          \
  } while (0)

#define ISQSXP 9999

#define VAL_TAG(v) ((v).tag)

// Checked accessors

// TODO: can we share this bcell expand?
// TODO: rename
static ALWAYS_INLINE SEXP val_as_sexp(Value v) {
  switch (v.tag) {
  case REALSXP:
    return Rf_ScalarReal(VAL_DBL(v));
  case INTSXP:
    return Rf_ScalarInteger(VAL_INT(v));
  case LGLSXP:
    return Rf_ScalarLogical(VAL_INT(v));
  case ISQSXP: {
    int *seqinfo = INTEGER(VAL_SXP(v));
    return R_compact_intrange(seqinfo[0], seqinfo[1]);
  }
  default:
    return VAL_SXP(v);
  }
}

#ifndef NDEBUG
#define CHECK_OVERFLOW(__n__)                                                  \
  do {                                                                         \
    if (R_BCNodeStackTop + __n__ > R_BCNodeStackEnd) {                         \
      nodeStackOverflow();                                                     \
    }                                                                          \
  } while (0)
#else
#define CHECK_OVERFLOW(__n__)
#endif

// FIXME: we do not need to set it to R_NilValue
//  it would not be bad to set it to some sentinel when in ASSERT
#define PUSH_VAL(n)                                                            \
  do {                                                                         \
    int __n__ = (n);                                                           \
    CHECK_OVERFLOW(__n__);                                                     \
    while (__n__-- > 0) {                                                      \
      (R_BCNodeStackTop++)->tag = INTSXP;                                      \
    }                                                                          \
  } while (0)

#define POP_VAL(n)                                                             \
  do {                                                                         \
    R_BCNodeStackTop -= (n);                                                   \
  } while (0)

#define GET_VAL(i) (R_BCNodeStackTop - (i))

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
  SEXP sxpval;
  double dval;
  int ival;
} BCellVal;

#define DEFINE_BCELL(name)                                                     \
  R_BCNodeStackTop->tag = 0;                                                   \
  R_BCNodeStackTop->flags = 0;                                                 \
  R_BCNodeStackTop->u.sxpval = R_NilValue;                                     \
  BCell *name = &(R_BCNodeStackTop++)->u.sxpval;

#define BCELL_IS_UNBOUND(v) (BCELL_TAG(v) == 0 && CAR0(v) == R_UnboundValue)
#define BCELL_TAG(cell) ((cell)->sxpinfo.extra)
#define BCELL_TAG_SET(cell, tag) BCELL_TAG(cell) = tag
#define BCELL_VAL(cell) ((cell) != R_NilValue ? CAR(cell) : R_UnboundValue)
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
#define BCELL_WRITABLE(v)                                                      \
  (v != R_NilValue && !BINDING_IS_LOCKED(v) && !IS_ACTIVE_BINDING(v))

#define BCELL_INIT(cell, type)                                                 \
  do {                                                                         \
    if (BCELL_TAG(cell) == 0) {                                                \
      SETCAR(cell, R_NilValue);                                                \
    }                                                                          \
    BCELL_TAG_SET(cell, type);                                                 \
    SET_MISSING(cell, 0);                                                      \
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
//   do { \
//     BCELL_TAG_CLEAR(cell); \
//     SETCAR(cell, val); \
//   } while (0)
// but looking at the code, the SETCAR clears the tag anyway
#define BCELL_SET(cell, val) SETCAR(cell, val)

static INLINE void bcell_expand(BCell b) {
  int typetag = BCELL_TAG(b);
  if (typetag) {
    SEXP val;
    BCellVal vv;
    vv.sxpval = CAR0(b);
    switch (typetag) {
    case REALSXP:
      PROTECT(b);
      val = Rf_ScalarReal(vv.dval);
      BCELL_SET(b, val);
      INCREMENT_NAMED(val);
      UNPROTECT(1);
      break;
    case INTSXP:
      PROTECT(b);
      val = Rf_ScalarInteger(vv.ival);
      BCELL_SET(b, val);
      INCREMENT_NAMED(val);
      UNPROTECT(1);
      break;
    case LGLSXP:
      PROTECT(b);
      val = Rf_ScalarLogical(vv.ival);
      BCELL_SET(b, val);
      INCREMENT_NAMED(val);
      UNPROTECT(1);
      break;
    }
  }
}

#define IS_USER_DATABASE(rho)                                                  \
  (OBJECT((rho)) && Rf_inherits((rho), "UserDefinedDatabase"))

// Returns a binding cell or R_NilValue if the symbol is not bound
static INLINE BCell bcell_get(SEXP symbol, SEXP rho) {
  if (rho == R_BaseEnv || rho == R_BaseNamespace || IS_USER_DATABASE(rho)) {
    return R_NilValue;
  } else {
    R_varloc_t loc = R_findVarLocInFrame(rho, symbol);
    SEXP cell = loc.cell;

    return cell == NULL ? R_NilValue : cell;
  }
}

static ALWAYS_INLINE void bcell_cache(SEXP symbol, SEXP rho,
                                      BCell *const cache) {
  if (TAG(*cache) == symbol && !BCELL_IS_UNBOUND(*cache)) {
    return;
  } else {
    SEXP ncell = bcell_get(symbol, rho);
    if (ncell != R_NilValue) {
      *cache = ncell;
    } else if (*cache != R_NilValue && BCELL_IS_UNBOUND(*cache)) {
      *cache = R_NilValue;
    }
  }
}

static INLINE SEXP bcell_value(SEXP cell) {
  if (cell == R_NilValue) {
    return R_UnboundValue;
  } else if (BCELL_TAG(cell)) {
    bcell_expand(cell);
    return CAR0(cell);
  } else if (cell != R_NilValue && !IS_ACTIVE_BINDING(cell)) {
    return CAR0(cell);
  } else {
    return R_UnboundValue;
  }
}

static ALWAYS_INLINE Rboolean bcell_set_value(BCell cell, SEXP value) {
  if (cell != R_NilValue && !BINDING_IS_LOCKED(cell) &&
      !IS_ACTIVE_BINDING(cell)) {
    if (BNDCELL_TAG(cell) || CAR(cell) != value) {
      BCELL_SET(cell, value);
      if (MISSING(cell)) {
        SET_MISSING(cell, 0);
      }
    }
    return TRUE;
  } else {
    return FALSE;
  }
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

JIT_DECL Value *Rsh_NilValue;
JIT_DECL Value *Rsh_UnboundValue;
JIT_DECL SEXP NOT_OP;
JIT_DECL SEXP LOG_OP;

#ifdef RSH_TESTS
#include "runtime_impl.h"
#else
JIT_DECL SEXP Rsh_initialize_runtime(void);
JIT_DECL SEXP Rsh_pc_get(void);
JIT_DECL SEXP Rsh_pc_reset(void);
#endif

#define BCELL_INLINE(cell, v)                                                  \
  do {                                                                         \
    BCell __cell__ = (cell);                                                   \
    SEXP __v__ = (v);                                                          \
    if (BCELL_WRITABLE(__cell__) && __v__->sxpinfo.scalar &&                   \
        ATTRIB(__v__) == R_NilValue) {                                         \
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

// UTILITIES
// ---------

#define INIT_CALL_FRAME(head, tail)                                            \
  SET_SXP_VAL(head, R_NilValue);                                               \
  SET_SXP_VAL(tail, R_NilValue);

static INLINE R_xlen_t as_index(Value v) {
  switch (VAL_TAG(v)) {
  case INTSXP: {
    int i = VAL_INT(v);
    if (i != NA_INTEGER) {
      return i;
    }
    break;
  }
  case REALSXP: {
    double i = VAL_DBL(v);
    if (!ISNAN(i) && i > 0 && i <= R_XLEN_T_MAX) {
      return (R_xlen_t)i;
    }
    break;
  }
  case LGLSXP:
    break;
  default: {
    SEXP i = VAL_SXP(v);
    if (IS_SCALAR(i, INTSXP)) {
      int j = SCALAR_IVAL(i);
      if (j != NA_INTEGER) {
        return j;
      }
    } else if (IS_SCALAR(i, REALSXP)) {
      double j = SCALAR_DVAL(i);
      if (!ISNAN(j) && j > 0 && j <= R_XLEN_T_MAX) {
        return (R_xlen_t)j;
      }
    }
  }
  }
  return -1;
}

static INLINE R_xlen_t Rsh_compute_index(SEXP dim, Value *ix, int rank) {
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

static INLINE SEXP Rsh_append_values_to_args(Value *vals, int n, SEXP args) {
  Value *p = vals + n - 1;

  // We are building the argument list from the back so we need to procted the
  // individual cell. Instead of PROTECT/UNPROTECT calls, we can use the BC
  // stack.
  PUSH_VAL(1);
  Value *protect = GET_VAL(1);
  SET_SXP_VAL(protect, args);

  for (int i = 0; i < n; i++, p--) {
    args = CONS_NR(val_as_sexp(*p), args);
    SET_SXP_VAL(protect, args);
  }

  POP_VAL(1);

  return args;
}

// INSTRUCTIONS
// ------------

#define Rsh_Pop(x)

// looks up the value either in the cache, or
// if the cache == NULL or there is nothing in the cache, looks it in rho
// and if it does find it in rho and cache != NULL it updates the cache
// FIXME: rename cache to cell
static INLINE SEXP Rsh_do_get_var(SEXP symbol, SEXP rho, Rboolean dd,
                                  Rboolean keepmiss, BCell *cache) {
  SEXP value = R_UnboundValue;
  int has_cell = 0;

  if (dd) {
    value = ddfindVar(symbol, rho);
  } else {
    if (cache != NULL) {
      bcell_cache(symbol, rho, cache);
      value = bcell_value(*cache);
    }

    if (value == R_UnboundValue) {
      value = Rf_findVar(symbol, rho);
    } else {
      has_cell = cache != NULL;
    }
  }

  if (!keepmiss && TYPEOF(value) == PROMSXP && !PROMISE_IS_EVALUATED(value)) {
    forcePromise(value);
  }

  if (value == R_UnboundValue) {
    UNBOUND_VARIABLE_ERROR(symbol, rho);
  } else if (value == R_MissingArg) {
    MAYBE_MISSING_ARGUMENT_ERROR(symbol, keepmiss, rho);
  } else if (TYPEOF(value) == PROMSXP) {
    if (PROMISE_IS_EVALUATED(value)) {
      value = PRVALUE(value);
    } else {
      /**** R_isMissing is inefficient */
      if (keepmiss && R_isMissing(symbol, rho)) {
        value = R_MissingArg;
      } else {
        forcePromise(value);
        // FIXME: this is pretty inefficient
        // the PRVALUE will likely call the R_expand_promise_value
        // which will expand a tagged SEXP only to later optimized into a Value
        // again
        value = PRVALUE(value);
      }
    }
  } else {
    ENSURE_NAMEDMAX(value);
  }

  if (has_cell) {
    BCELL_INLINE(*cache, value);
  }

  return value;
}

#define Rsh_GetVar(res, symbol, cell, rho)                                     \
  Rsh_get_var(res, symbol, cell, rho, FALSE, FALSE)
#define Rsh_GetVarMissOk(res, symbol, cell, rho)                               \
  Rsh_get_var(res, symbol, cell, rho, FALSE, TRUE)

static ALWAYS_INLINE void Rsh_get_var(Value *res, SEXP symbol, BCell *cell,
                                      SEXP rho, Rboolean dd,
                                      Rboolean keepmiss) {
  switch (BCELL_TAG(*cell)) {
  case REALSXP:
    SET_DBL_VAL(res, BCELL_DVAL(*cell));
    return;
  case INTSXP:
    SET_INT_VAL(res, BCELL_IVAL(*cell));
    return;
  case LGLSXP:
    SET_LGL_VAL(res, BCELL_IVAL(*cell));
    return;
  }

  SEXP value = BCELL_VAL(*cell);
  if (value != R_UnboundValue) {
    int type = TYPEOF(value);

    if (type == PROMSXP) {
      if (PROMISE_IS_EVALUATED(value)) {
        switch (PROMISE_TAG(value)) {
        case REALSXP:
          SET_DBL_VAL(res, PROMISE_DVAL(value));
          return;
        case INTSXP:
          SET_INT_VAL(res, PROMISE_IVAL(value));
          return;
        case LGLSXP:
          SET_LGL_VAL(res, PROMISE_LVAL(value));
          return;
        default:
          value = PRVALUE(value);
          type = TYPEOF(value);
        }
      }
    }

    /* try fast handling of some types; for these the */
    /* cell won't be R_NilValue or an active binding */
    switch (type) {
    case REALSXP:
    case INTSXP:
    case LGLSXP:
    case CPLXSXP:
    case STRSXP:
    case VECSXP:
    case RAWSXP:
      SET_SXP_VAL(res, value);
      return;
    case SYMSXP:
    case PROMSXP:
      break;
    default:
      if (*cell != R_NilValue && !IS_ACTIVE_BINDING(*cell)) {
        SET_SXP_VAL(res, value);
        return;
      }
    }
  }

  SET_VAL(res, Rsh_do_get_var(symbol, rho, dd, keepmiss, cell));
}

static ALWAYS_INLINE void Rsh_SetVar(Value *v, SEXP symbol, BCell *cell,
                                     SEXP rho) {
  Value value = *v;
  int tag = VAL_TAG(value);

  if (tag == BCELL_TAG_WR(*cell)) {
    switch (tag) {
    case REALSXP:
      BCELL_DVAL_SET(*cell, VAL_DBL(value));
      return;
    case INTSXP:
      BCELL_IVAL_SET(*cell, VAL_INT(value));
      return;
    case LGLSXP:
      BCELL_LVAL_SET(*cell, VAL_INT(value));
      return;
    }
  } else if (BCELL_WRITABLE(*cell)) {
    switch (tag) {
    case REALSXP:
      BCELL_DVAL_NEW(*cell, VAL_DBL(value));
      return;
    case INTSXP:
      BCELL_IVAL_NEW(*cell, VAL_INT(value));
      return;
    case LGLSXP:
      BCELL_LVAL_NEW(*cell, VAL_INT(value));
      return;
    }
  }

  SEXP value_sxp = val_as_sexp(value);
  INCREMENT_NAMED(sexp_value);

  if (!bcell_set_value(*cell, value_sxp)) {
    PROTECT(value_sxp);
    Rf_defineVar(symbol, value_sxp, rho);
    UNPROTECT(1);
    bcell_cache(symbol, rho, cell);
    BCELL_INLINE(*cell, value_sxp);
  }
}

static INLINE void Rsh_SetVar2(Value *value, SEXP symbol, SEXP rho) {
  INCREMENT_NAMED(value);
  Rf_setVar(symbol, val_as_sexp(*value), rho);
}

static INLINE SEXP Rsh_Return(Value v) { return val_as_sexp(v); }

static INLINE SEXP Rsh_builtin_call_args(SEXP args) {
  for (SEXP a = args; a != R_NilValue; a = CDR(a)) {
    DECREMENT_LINKS(CAR(a));
  }
  return args;
}

static INLINE SEXP Rsh_closure_call_args(SEXP args) {
  for (SEXP a = args; a != R_NilValue; a = CDR(a)) {
    DECREMENT_LINKS(CAR(a));
    if (!TRACKREFS(a)) {
      ENABLE_REFCNT(a);
      INCREMENT_REFCNT(CAR(a));
      INCREMENT_REFCNT(CDR(a));
    }
  }
  return args;
}

static INLINE void Rsh_GetBuiltin(Value *call, Value *args_head,
                                  Value *args_tail, SEXP symbol) {
  SEXP value = SYMVALUE(symbol);

  if (TYPEOF(value) == PROMSXP && !PROMISE_IS_EVALUATED(value)) {
    forcePromise(value);
    value = PRVALUE(value);
  }

  if (TYPEOF(value) != BUILTINSXP) {
    value = R_Primitive(CHAR(PRINTNAME(symbol)));
    if (TYPEOF(value) != BUILTINSXP) {
      Rf_error("\"%s\" is not a BUILTIN function", CHAR(PRINTNAME(symbol)));
    }
    RSH_PC_INC(r_primitive);
  }

  SET_SXP_VAL(call, value);
  INIT_CALL_FRAME(args_head, args_tail);
}

static INLINE void Rsh_GetFun(Value *fun, Value *args_head, Value *args_tail,
                              SEXP symbol, SEXP rho) {
  // TODO: optimize with bcell
  SEXP fun_sxp = Rf_findFun(symbol, rho);
  SET_SXP_VAL(fun, fun_sxp);
  INIT_CALL_FRAME(args_head, args_tail);
}

#define Rsh_CallBuiltin Rsh_Call

#define Rsh_PushArg(h, t, v) RSH_PUSH_ARG(h, t, val_as_sexp(v))
#define Rsh_PushConstArg(h, t, v) RSH_PUSH_ARG(h, t, v)
#define Rsh_PushNullArg(h, t) Rsh_PushConstArg(h, t, R_NilValue)
#define Rsh_PushTrueArg(h, t) Rsh_PushConstArg(h, t, R_TrueValue)
#define Rsh_PushFalseArg(h, t) Rsh_PushConstArg(h, t, R_FalseValue)

#define Rsh_LdTrue(d) SET_LGL_VAL(d, TRUE)
#define Rsh_LdFalse(d) SET_LGL_VAL(d, FALSE)
#define Rsh_LdNull(d) SET_SXP_VAL(d, R_NilValue)

#define Rsh_LdConstInt(d, s)                                                   \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    SET_INT_VAL(d, SCALAR_IVAL(s));                                            \
  } while (0);
#define Rsh_LdConstDbl(d, s)                                                   \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    SET_DBL_VAL(d, SCALAR_DVAL(s));                                            \
  } while (0);
#define Rsh_LdConstLgl(d, s)                                                   \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    SET_LGL_VAL(d, SCALAR_LVAL(s));                                            \
  } while (0);
#define Rsh_LdConst(d, s)                                                      \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    SET_SXP_VAL(d, s);                                                         \
  } while (0);

static INLINE void Rsh_Call(Value *fun, Value args_head, UNUSED Value args_tail,
                            SEXP call, SEXP rho) {
  SEXP value = NULL;
  int flag;

  SEXP fun_sxp = VAL_SXP(*fun);
  SEXP args_sxp = VAL_SXP(args_head);

  switch (TYPEOF(fun_sxp)) {
  case BUILTINSXP:
    args_sxp = Rsh_builtin_call_args(args_sxp);
    checkForMissings(args_sxp, call);
    flag = PRIMPRINT(fun_sxp);
    R_Visible = (Rboolean)(flag != 1);
    value = PRIMFUN(fun_sxp)(call, fun_sxp, args_sxp, rho);
    if (flag < 2) {
      R_Visible = (Rboolean)(flag != 1);
    }
    break;
  case SPECIALSXP:
    flag = PRIMPRINT(fun_sxp);
    R_Visible = (Rboolean)(flag != 1);
    value = PRIMFUN(fun_sxp)(call, fun_sxp, markSpecialArgs(CDR(call)), rho);
    if (flag < 2) {
      R_Visible = (Rboolean)(flag != 1);
    }
    break;
  case CLOSXP: {
    args_sxp = Rsh_closure_call_args(args_sxp);
    SEXP body = BODY(fun_sxp);

    // inline our call
    if (TYPEOF(body) == EXTPTRSXP && RSH_IS_CLOSURE_BODY(body)) {
      // TODO: R_GlobalContext->callflag != CTXT_GENERIC

      SEXP newrho =
          make_applyClosure_env(call, fun_sxp, args_sxp, rho, R_NilValue);
      PROTECT(newrho);
      RCNTXT ctx;
      Rf_begincontext(&ctx, CTXT_RETURN, call, newrho, rho, args_sxp, fun_sxp);
      R_Visible = TRUE;

      // FIXME: the same code is in the eval.c
      SEXP c_cp = R_ExternalPtrProtected(body);
      if (TYPEOF(c_cp) != VECSXP) {
        Rf_error("Expected a vector, got: %d", TYPEOF(c_cp));
      }

      // seems like unnecesary complicated casting, but otherwise C complains
      // cf. https://stackoverflow.com/a/19487645
      Rsh_closure fun;
      *(void **)(&fun) = R_ExternalPtrAddr(body);
      value = fun(newrho, c_cp);
      UNPROTECT(1);
      Rf_endcontext(&ctx);
      break;
    }

    // slow path
    value = Rf_applyClosure(call, fun_sxp, args_sxp, rho, R_NilValue, TRUE);
    break;
  }
  default:
    Rf_error("bad function");
  }

  SET_VAL(fun, value);
}

static INLINE Rboolean Rsh_BrIfNot(Value value, SEXP call, SEXP rho) {
  // FIXME: temporary POP_VAL
  if (VAL_IS_LGL_NOT_NA(value)) {
    POP_VAL(1);
    return (Rboolean)!VAL_INT(value);
  } else if (VAL_IS_INT_NOT_NA(value)) {
    POP_VAL(1);
    return (Rboolean)(VAL_INT(value) == 0);
  } else if (VAL_IS_DBL_NOT_NAN(value)) {
    POP_VAL(1);
    return (Rboolean)(VAL_DBL(value) == 0.0);
  }

  SEXP value_sxp = VAL_SXP(value);

  if (IS_SCALAR(value_sxp, LGLSXP)) {
    Rboolean lval = (Rboolean)LOGICAL0(value_sxp)[0];
    if (lval != NA_LOGICAL) {
      POP_VAL(1);
      return (Rboolean)!lval;
    }
  }

  PROTECT(value_sxp);
  Rboolean ans = asLogicalNoNA(value_sxp, call, rho);
  UNPROTECT(1);
  POP_VAL(1);
  return (Rboolean)!ans;
}

#define DO_ARITH(op, a, b, r)                                                  \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    switch (op) {                                                              \
    case ADD_OP:                                                               \
      *(r) = (a) + (b);                                                        \
      break;                                                                   \
    case SUB_OP:                                                               \
      *(r) = (a) - (b);                                                        \
      break;                                                                   \
    case MUL_OP:                                                               \
      *(r) = (a) * (b);                                                        \
      break;                                                                   \
    case DIV_OP:                                                               \
      *(r) = (a) / (b);                                                        \
      break;                                                                   \
    case EXPT_OP:                                                              \
      *(r) = (b) == 2.0 ? (a) * (a) : R_pow((a), (b));                         \
      break;                                                                   \
    }                                                                          \
  } while (0)

// Sets r to LGL_TO_VAL(a op b)
#define DO_RELOP(op, a, b, r)                                                  \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    int __res__;                                                               \
    switch (op) {                                                              \
    case EQ_OP:                                                                \
      __res__ = (a) == (b);                                                    \
      break;                                                                   \
    case NE_OP:                                                                \
      __res__ = (a) != (b);                                                    \
      break;                                                                   \
    case LT_OP:                                                                \
      __res__ = (a) < (b);                                                     \
      break;                                                                   \
    case LE_OP:                                                                \
      __res__ = (a) <= (b);                                                    \
      break;                                                                   \
    case GT_OP:                                                                \
      __res__ = (a) > (b);                                                     \
      break;                                                                   \
    case GE_OP:                                                                \
      __res__ = (a) >= (b);                                                    \
      break;                                                                   \
    }                                                                          \
    SET_LGL_VAL(r, __res__);                                                   \
  } while (0)

// calls R internal function which takes two arguments
// it is like a second level builtin - called itself from do_* functions
#define DO_BINARY_BUILTIN(fun, call, op, opSym, lhs, rhs, rho, res)            \
  do {                                                                         \
    SEXP __res_sxp__ = fun((call), (op), (opSym), val_as_sexp((lhs)),          \
                           val_as_sexp((rhs)), (rho));                         \
    SET_VAL(res, __res_sxp__);                                                 \
  } while (0)

static ALWAYS_INLINE void Rsh_arith(Value *res, Value lhs, Value rhs, SEXP call,
                                    RshArithOp op, SEXP rho) {
  double res_dbl = 0;

  if (VAL_IS_DBL(lhs)) {
    double lhs_dbl = VAL_DBL(lhs);
    if (VAL_IS_DBL(rhs)) {
      DO_ARITH(op, lhs_dbl, VAL_DBL(rhs), &res_dbl);
      SET_DBL_VAL(res, res_dbl);
      return;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      DO_ARITH(op, lhs_dbl, VAL_INT(rhs), &res_dbl);
      SET_DBL_VAL(res, res_dbl);
      return;
    }
  }

  if (VAL_IS_INT_NOT_NA(lhs)) {
    int lhs_int = VAL_INT(lhs);

    if (VAL_IS_DBL(rhs)) {
      DO_ARITH(op, lhs_int, VAL_DBL(rhs), &res_dbl);
      SET_DBL_VAL(res, res_dbl);
      return;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      if (op == DIV_OP || op == EXPT_OP) {
        DO_ARITH(op, (double)lhs_int, (double)VAL_INT(rhs), &res_dbl);
        SET_DBL_VAL(res, res_dbl);
        return;
      } else {
        int res_int = 0;
        DO_ARITH(op, lhs_int, VAL_INT(rhs), &res_int);
        SET_INT_VAL(res, res_int);
        return;
      }
    }
  }

  // Slow path!
  RSH_PC_INC(slow_arith);
  DO_BINARY_BUILTIN(arith2, call, R_ARITH_OPS[op], R_ARITH_OP_SYMS[op], lhs,
                    rhs, rho, res);
}

#define X(a, b, c)                                                             \
  static ALWAYS_INLINE void Rsh_##c(Value *lhs_res, Value rhs, SEXP call,      \
                                    SEXP rho) {                                \
    Rsh_arith(lhs_res, *lhs_res, rhs, call, b, rho);                           \
  }
X_ARITH_OPS
#undef X

static ALWAYS_INLINE void Rsh_relop(Value *res, Value lhs, Value rhs, SEXP call,
                                    RshRelOp op, SEXP rho) {
  if (VAL_IS_DBL_NOT_NAN(lhs)) {
    double lhs_dbl = VAL_DBL(lhs);
    if (VAL_IS_DBL_NOT_NAN(rhs)) {
      DO_RELOP(op, lhs_dbl, VAL_DBL(rhs), res);
      return;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      DO_RELOP(op, lhs_dbl, VAL_INT(rhs), res);
      return;
    }
  }

  if (VAL_IS_INT_NOT_NA(lhs)) {
    int lhs_int = VAL_INT(lhs);

    if (VAL_IS_DBL_NOT_NAN(rhs)) {
      DO_RELOP(op, lhs_int, VAL_DBL(rhs), res);
      return;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      DO_RELOP(op, lhs_int, VAL_INT(rhs), res);
      return;
    }
  }

  // Slow path!
  RSH_PC_INC(slow_relop);
  DO_BINARY_BUILTIN(relop, call, R_REL_OPS[op], R_REL_OP_SYMS[op], lhs, rhs,
                    rho, res);
}

#define X(a, b, c)                                                             \
  static ALWAYS_INLINE void Rsh_##c(Value *lhs_res, Value rhs, SEXP call,      \
                                    SEXP rho) {                                \
    Rsh_relop(lhs_res, *lhs_res, rhs, call, b, rho);                           \
  }
X_REL_OPS
#undef X

// calls R builtin function do_* with 1 argument
#define DO_BUILTIN1(/* PRIMFUN */ fun, /* SEXP */ call, /* SEXP */ op,         \
                    /* Value */ arg, /* SEXP */ rho, /* Value* */ res)         \
  do {                                                                         \
    SEXP __res_sxp__ =                                                         \
        fun((call), (op), CONS_NR(val_as_sexp((arg)), R_NilValue), (rho));     \
    SET_VAL(res, __res_sxp__);                                                 \
    R_Visible = TRUE;                                                          \
  } while (0)

// calls R builtin function do_* with 2 arguments
#define DO_BUILTIN2(/* PRIMFUN */ fun, /* SEXP */ call, /* SEXP */ op,         \
                    /* Value */ arg1, /* Value */ arg2, /* SEXP */ rho,        \
                    /* Value* */ res)                                          \
  do {                                                                         \
    SEXP __tmp__ = CONS_NR(val_as_sexp((arg1)),                                \
                           CONS_NR(val_as_sexp((arg2)), R_NilValue));          \
    SEXP __res_sxp__ = fun((call), (op), __tmp__, (rho));                      \
    SET_VAL(res, __res_sxp__);                                                 \
    R_Visible = TRUE;                                                          \
  } while (0)

static INLINE void Rsh_math1(Value *res, Value arg, SEXP call, RshMath1Op op,
                             SEXP rho) {
  if (VAL_IS_DBL(arg)) {
    double d = VAL_DBL(arg);
    d = op == SQRT_OP ? sqrt(d) : exp(d);

    if (ISNAN(d)) {
      if (ISNAN(VAL_DBL(arg))) {
        d = VAL_DBL(arg);
      } else {
        Rf_warningcall(call, R_MSG_NA);
      }
    }

    SET_DBL_VAL(res, d);
    R_Visible = TRUE;
  } else if (VAL_IS_INT_NOT_NA(arg)) {
    double d = (double)VAL_INT(arg);
    d = op == SQRT_OP ? sqrt(d) : exp(d);

    if (ISNAN(d)) {
      Rf_warningcall(call, R_MSG_NA);
    }

    SET_DBL_VAL(res, d);
    R_Visible = TRUE;
  } else {
    // Slow path!
    RSH_PC_INC(slow_math1);
    DO_BUILTIN1(do_math1, call, R_MATH1_OPS[op], arg, rho, res);
  }
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *v, SEXP call, SEXP rho) {                  \
    Rsh_math1(v, *v, call, b, rho);                                            \
  }
X_MATH1_OPS
#undef X

static INLINE void Rsh_unary(Value *res, Value arg, SEXP call, RshUnaryOp op,
                             SEXP rho) {
  if (VAL_IS_DBL(arg)) {
    if (op == UMINUS_OP) {
      double d = VAL_DBL(arg);
      double e = -d;
      SET_DBL_VAL(res, e);
    }
  } else if (VAL_IS_INT_NOT_NA(arg)) {
    if (op == UMINUS_OP) {
      int i = VAL_INT(arg);
      int j = -i;
      SET_INT_VAL(res, j);
    }
  } else {
    // Slow path!
    RSH_PC_INC(slow_unary);
    SEXP s = arith1(call, R_UNARY_OPS[op], R_UNARY_OP_SYMS[op],
                    val_as_sexp(arg), rho);
    SET_VAL(res, s);
  }

  R_Visible = TRUE;
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *v, SEXP call, SEXP rho) {                  \
    Rsh_unary(v, *v, call, b, rho);                                            \
  }
X_UNARY_OPS
#undef X

static INLINE void Rsh_Not(Value *arg_res, SEXP call, SEXP rho) {
  Value *res = arg_res;
  Value arg = *arg_res;

  if (VAL_IS_LGL_NOT_NA(arg) || VAL_IS_INT_NOT_NA(arg)) {
    SET_LGL_VAL(res, !VAL_INT(arg));
  } else {
    // Slow path!
    DO_BUILTIN1(do_logic, call, NOT_OP, arg, rho, res);
  }
}

static INLINE void Rsh_logic(Value *res, Value lhs, Value rhs, SEXP call,
                             RshLogic2Op op, SEXP rho) {
  // TODO: not optimized
  // Slow path!
  DO_BUILTIN2(do_logic, call, R_LOGIC2_OPS[op], lhs, rhs, rho, res);
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *lhs_res, Value rhs, SEXP call, SEXP rho) { \
    Rsh_logic(lhs_res, *lhs_res, rhs, call, b, rho);                           \
  }
X_LOGIC2_OPS
#undef X

static INLINE void Rsh_MakeClosure(Value *res, SEXP mkclos_arg,
                                   Rsh_closure fun_ptr, SEXP c_cp, SEXP rho) {

  SEXP forms = VECTOR_ELT(mkclos_arg, 0);
  // SEXP original_body = VECTOR_ELT(mkclos_arg, 1);
  SEXP body = PROTECT(
      R_MakeExternalPtr(*(void **)(&fun_ptr), Rsh_ClosureBodyTag, c_cp));
  SEXP closure = PROTECT(Rf_mkCLOSXP(forms, body, rho));

  if (LENGTH(mkclos_arg) > 2) {
    SEXP srcref = VECTOR_ELT(mkclos_arg, 2);
    if (TYPEOF(srcref) != NILSXP)
      // FIXME: expose R_SrcrefSymbol
      Rf_setAttrib(closure, Rf_install("srcref"), srcref);
  }
  R_Visible = TRUE;

  UNPROTECT(2); // body + closure
  SET_SXP_VAL(res, closure);
}

static INLINE void Rsh_CheckFun(Value *fun, Value *args_head,
                                Value *args_tail) {
  int is_fun = FALSE;

  if (VAL_IS_SXP(*fun)) {
    SEXP fun_sxp = VAL_SXP(*fun);
    is_fun = TYPEOF(fun_sxp) == CLOSXP || TYPEOF(fun_sxp) == BUILTINSXP ||
             TYPEOF(fun_sxp) == SPECIALSXP;
  }

  if (!is_fun) {
    Rf_error("attempt to apply non-function");
  }

  INIT_CALL_FRAME(args_head, args_tail);
}

static INLINE void Rsh_MakeProm2(Value *fun, Value *args_head, Value *args_tail,
                                 Rsh_closure fun_ptr, SEXP c_cp, SEXP rho) {
  switch (TYPEOF(VAL_SXP(*fun))) {
  case CLOSXP: {
    SEXP code = PROTECT(
        R_MakeExternalPtr(*(void **)&fun_ptr, Rsh_ClosureBodyTag, c_cp));
    SEXP value = Rf_mkPROMISE(code, rho);
    RSH_PUSH_ARG(args_head, args_tail, value);
    UNPROTECT(1);
    break;
  }
  case BUILTINSXP: {
    SEXP value = fun_ptr(rho, c_cp);
    RSH_PUSH_ARG(args_head, args_tail, value);
    break;
  }
  case SPECIALSXP:
    break;
  default:
    Rf_error("bad function");
  }
}

static INLINE void Rsh_MakeProm(Value *fun, Value *args_head, Value *args_tail,
                                SEXP code, SEXP rho) {
  switch (TYPEOF(VAL_SXP(*fun))) {
  case CLOSXP: {
    SEXP value = Rf_mkPROMISE(code, rho);
    RSH_PUSH_ARG(args_head, args_tail, value);
    break;
  }
  case BUILTINSXP:
    if (TYPEOF(code) == BCODESXP) {
      SEXP value = bcEval(code, rho);
      RSH_PUSH_ARG(args_head, args_tail, value);
    } else {
      /* uncommon but possible, the compiler may decide not
         to compile an argument expression */
      SEXP value = Rf_eval(code, rho);
      RSH_PUSH_ARG(args_head, args_tail, value);
    }
    break;
  case SPECIALSXP:
    break;
  default:
    Rf_error("bad function");
  }
}

static INLINE void Rsh_Dollar(Value *x_res, SEXP call, SEXP symbol, SEXP rho) {
  Value *res = x_res;
  Value x = *x_res;
  SEXP value_sxp;

  SEXP x_sxp = val_as_sexp(x);
  int dispatched = FALSE;

  if (isObject(x_sxp)) {
    SEXP ncall = PROTECT(Rf_duplicate(call));
    SETCAR(CDDR(ncall), Rf_ScalarString(PRINTNAME(symbol)));
    dispatched = tryDispatch("$", ncall, x_sxp, rho, &value_sxp);
    UNPROTECT(1);
  }

  if (!dispatched) {
    value_sxp = R_subset3_dflt(x_sxp, PRINTNAME(symbol), call);
  }

  R_Visible = TRUE;
  SET_VAL(res, value_sxp);
}

#define Rsh_StartSubsetN(value, call, rho)                                     \
  Rsh_start_subset_dispatch_n("[", value, call, rho)
#define Rsh_StartSubset2N(value, call, rho)                                    \
  Rsh_start_subset_dispatch_n("[[", value, call, rho)

static INLINE Rboolean Rsh_start_subset_dispatch_n(const char *generic,
                                                   Value *value, SEXP call,
                                                   SEXP rho) {
  SEXP value_sxp = val_as_sexp(*value);
  if (isObject(value_sxp) &&
      tryDispatch(generic, call, value_sxp, rho, &value_sxp)) {
    RSH_PC_INC(dispatched_subset);
    RSH_CHECK_SIGINT();
    SET_VAL(value, value_sxp);
    return TRUE;
  }

  return FALSE;
}

#define Rsh_StartSubset(value, call_val, args_head, args_tail, call, rho)      \
  Rsh_start_subset_dispatch("[", value, call_val, args_head, args_tail, call,  \
                            rho)
#define Rsh_StartSubset2(value, call_val, args_head, args_tail, call, rho)     \
  Rsh_start_subset_dispatch("[[", value, call_val, args_head, args_tail, call, \
                            rho)

static INLINE Rboolean Rsh_start_subset_dispatch(const char *generic,
                                                 Value *value, Value *call_val,
                                                 Value *args_head,
                                                 Value *args_tail, SEXP call,
                                                 SEXP rho) {
  SEXP value_sxp = val_as_sexp(*value);
  if (isObject(value_sxp) &&
      tryDispatch(generic, call, value_sxp, rho, &value_sxp)) {
    RSH_PC_INC(dispatched_subset);
    RSH_CHECK_SIGINT();
    SET_VAL(value, value_sxp);
    // FIXME: temporary stack
    POP_VAL(3);
    return TRUE;
  } else {
    SEXP tag = TAG(CDR(call));
    SET_SXP_VAL(call_val, call);
    // FIXME: these is a discrepancy between this code and what GNU-R does:
    //  In GNUR at this point we push additional R_NilValue onto the stack
    //  I just don't see why, or regardless why, who does pops it out?
    INIT_CALL_FRAME(args_head, args_tail);
    RSH_PUSH_ARG(args_head, args_tail, val_as_sexp(*value));
    RSH_SET_TAG(*args_tail, tag);
    return FALSE;
  }
}

#define Rsh_VecSubset(x, i, call, rho) Rsh_vec_subset(x, i, call, rho, FALSE)
#define Rsh_VecSubset2(x, i, call, rho) Rsh_vec_subset(x, i, call, rho, TRUE)

static INLINE void Rsh_vec_subset(Value *x, Value i, SEXP call, SEXP rho,
                                  Rboolean subset2) {
  SEXP vec = val_as_sexp(*x);
  R_xlen_t index = as_index(i) - 1;

  if (subset2 || FAST_VECELT_OK(vec)) {
    DO_FAST_VECELT(vec, index, subset2, x);
  }

  // slow path!
  RSH_PC_INC(slow_subset);
  SEXP args;
  args = CONS_NR(val_as_sexp(i), R_NilValue);
  args = CONS_NR(vec, args);
  PROTECT(args);

  SEXP value;
  if (subset2) {
    value = do_subset2_dflt(call, Rsh_Subset2Sym, args, rho);
  } else {
    value = do_subset_dflt(call, Rsh_SubsetSym, args, rho);
  }

  UNPROTECT(1);

  SET_VAL(x, value);
}

#define Rsh_MatSubset(sx, si, sj, call, rho)                                   \
  Rsh_mat_subset(sx, si, sj, call, rho, FALSE)
#define Rsh_MatSubset2(sx, si, sj, call, rho)                                  \
  Rsh_mat_subset(sx, si, sj, call, rho, TRUE)

static INLINE void Rsh_mat_subset(Value *sx, Value si, Value sj, SEXP call,
                                  SEXP rho, Rboolean subset2) {
  SEXP mat = val_as_sexp(*sx);

  if (subset2 || FAST_VECELT_OK(mat)) {
    SEXP dim = Rsh_get_mat_dim_attr(mat);
    if (dim != R_NilValue) {
      R_xlen_t i = as_index(si);
      R_xlen_t j = as_index(sj);
      R_xlen_t nrow = INTEGER(dim)[0];
      R_xlen_t ncol = INTEGER(dim)[1];
      if (i > 0 && j > 0 && i <= nrow && j <= ncol) {
        R_xlen_t k = i - 1 + nrow * (j - 1);
        DO_FAST_VECELT(mat, k, subset2, sx);
      }
    }
  }

  // slow path!
  RSH_PC_INC(slow_subset);

  SEXP idx = val_as_sexp(si);
  SEXP jdx = val_as_sexp(sj);

  SEXP args;
  args = CONS_NR(jdx, R_NilValue);
  args = CONS_NR(idx, args);
  args = CONS_NR(mat, args);
  PROTECT(args);

  SEXP value;
  if (subset2)
    value = do_subset2_dflt(call, Rsh_Subset2Sym, args, rho);
  else
    value = do_subset_dflt(call, Rsh_SubsetSym, args, rho);
  UNPROTECT(1);
  SET_VAL(sx, value);
}

static INLINE void Rsh_StartAssign(Value *rhs, Value *lhs_cell, Value *lhs_val,
                                   Value *rhs_dup, SEXP symbol, BCell *cache,
                                   SEXP rho) {
  // FIXME: INCLNK_stack_commit

  if (VAL_IS_SXP(*rhs)) {
    SEXP saverhs = VAL_SXP(*rhs);
    FIXUP_RHS_NAMED(saverhs);

    int refrhs = MAYBE_REFERENCED(saverhs);
    rhs->flags = refrhs;
    if (refrhs) {
      INCREMENT_REFCNT(saverhs);
    }
  }

  bcell_cache(symbol, rho, cache);
  SEXP value = bcell_value(*cache);
  R_varloc_t loc;
  if (value == R_UnboundValue || TYPEOF(value) == PROMSXP) {
    value = EnsureLocal(symbol, rho, &loc);
    if (loc.cell == NULL) {
      loc.cell = R_NilValue;
    }
  } else {
    loc.cell = *cache;
  }
  int maybe_in_assign = ASSIGNMENT_PENDING(loc.cell);
  SET_ASSIGNMENT_PENDING(loc.cell, TRUE);
  SET_SXP_VAL(lhs_cell, loc.cell);

  if (maybe_in_assign || MAYBE_SHARED(value)) {
    value = Rf_shallow_duplicate(value);
  }
  SET_SXP_VAL(lhs_val, value);
  *rhs_dup = *rhs;
}

static INLINE void Rsh_StartAssign2(Value *rhs, Value *lhs_cell, Value *lhs_val,
                                    Value *rhs_dup, SEXP symbol, SEXP rho) {
  R_varloc_t loc = R_findVarLoc(symbol, rho);
  if (loc.cell == NULL) {
    loc.cell = R_NilValue;
  }

  int maybe_in_assign = ASSIGNMENT_PENDING(loc.cell);
  SET_ASSIGNMENT_PENDING(loc.cell, TRUE);
  SET_SXP_VAL(lhs_cell, loc.cell);

  SEXP value_sxp = Rsh_do_get_var(symbol, ENCLOS(rho), FALSE, FALSE, NULL);
  if (maybe_in_assign || MAYBE_SHARED(value_sxp)) {
    value_sxp = Rf_shallow_duplicate(value_sxp);
  }
  SET_SXP_VAL(lhs_val, value_sxp);

  *rhs_dup = *rhs;
  if (VAL_IS_SXP(*rhs_dup)) {
    FIXUP_RHS_NAMED(VAL_SXP(*rhs_dup));
    INCREMENT_REFCNT(VAL_SXP(*rhs_dup));
  }
  // stack at the end:
  //         s3 - RHS value
  //         s2 - LHS cell
  //         s1 - LHS value
  //         s0 - RHS value
  // top -->
}

static INLINE void Rsh_EndAssign(Value *rhs, Value lhs_cell, Value value,
                                 SEXP symbol, BCell *cache, SEXP rho) {
  SEXP lhs_cell_sxp = VAL_SXP(lhs_cell);
  SET_ASSIGNMENT_PENDING(lhs_cell_sxp, FALSE);

  bcell_cache(symbol, rho, cache);
  SEXP value_sxp = val_as_sexp(value);

  // FIXME: try_unwrap ALTREP

  INCREMENT_NAMED(value_sxp);
  if (!bcell_set_value(*cache, value_sxp)) {
    Rf_defineVar(symbol, value_sxp, rho);
  }

  if (VAL_IS_SXP(*rhs)) {
    SEXP saverhs = VAL_SXP(*rhs);
    INCREMENT_NAMED(saverhs);
    if (rhs->flags) {
      DECREMENT_REFCNT(saverhs);
    }
  }
}

static INLINE void Rsh_EndAssign2(Value *rhs, Value lhs_cell, Value value,
                                  SEXP symbol, SEXP rho) {
  SEXP lhs_cell_sxp = VAL_SXP(lhs_cell);
  SET_ASSIGNMENT_PENDING(lhs_cell_sxp, FALSE);

  SEXP value_sxp = val_as_sexp(value);
  INCREMENT_NAMED(value_sxp);

  // FIXME: this is not what GNUR does, but
  // it feels logical. We have the binding cell so
  // why cannot we update it directly?
  BCELL_SET(lhs_cell_sxp, value_sxp);
  // instead this is what GNUR does:
  // Rf_setVar(symbol, value_sxp, ENCLOS(rho));

  if (VAL_IS_SXP(*rhs)) {
    SEXP rhs_sxp = VAL_SXP(*rhs);
    INCREMENT_NAMED(rhs_sxp);
    DECREMENT_REFCNT(rhs_sxp);
  }
}

#define Rsh_StartSubassignN(lhs, rhs, call, rho)                               \
  Rsh_start_subassign_dispatch_n("[<-", lhs, rhs, call, rho)
#define Rsh_StartSubassign2N(lhs, rhs, call, rho)                              \
  Rsh_start_subassign_dispatch_n("[[<-", lhs, rhs, call, rho)

static INLINE Rboolean Rsh_start_subassign_dispatch_n(const char *generic,
                                                      Value *lhs, Value *rhs,
                                                      SEXP call, SEXP rho) {
  SEXP lhs_sxp = val_as_sexp(*lhs);

  if (isObject(lhs_sxp)) {
    MARK_ASSIGNMENT_CALL(call);
    SEXP rhs_sxp = val_as_sexp(*rhs);
    if (MAYBE_SHARED(lhs_sxp)) {
      lhs_sxp = Rf_shallow_duplicate(lhs_sxp);
      SET_SXP_VAL(lhs, lhs_sxp);
      ENSURE_NAMED(lhs_sxp);
    }

    SEXP value = NULL;
    if (tryAssignDispatch(generic, call, lhs_sxp, rhs_sxp, rho, &value)) {
      RSH_PC_INC(dispatched_subassign);
      RSH_CHECK_SIGINT();
      SET_SXP_VAL(lhs, value);
      // FIXME: temporary
      POP_VAL(1);
      return TRUE;
    }
  }

  return FALSE;
}

#define Rsh_VecSubassign(sx, rhs, i, call, rho)                                \
  Rsh_vec_subassign(sx, rhs, i, call, rho, FALSE)
#define Rsh_VecSubassign2(sx, rhs, i, call, rho)                               \
  Rsh_vec_subassign(sx, rhs, i, call, rho, TRUE)

static INLINE void Rsh_vec_subassign(Value *sx, Value rhs, Value i, SEXP call,
                                     SEXP rho, Rboolean sub2) {
  SEXP vec = val_as_sexp(*sx);

  if (MAYBE_SHARED(vec)) {
    vec = Rf_shallow_duplicate(vec);
    SET_SXP_VAL(sx, vec);
  }

  // Fast case - INT index and RHS is scalar of the right type
  if (VAL_TAG(rhs) && VAL_IS_INT(i) && VAL_TAG(rhs) == TYPEOF(vec)) {
    Rboolean set = TRUE;
    R_xlen_t idx = VAL_INT(i);
    if (idx > 0 && idx <= XLENGTH(vec)) {
      switch (TYPEOF(vec)) {
      case REALSXP:
        REAL(vec)[idx - 1] = VAL_DBL(rhs);
        break;
      case INTSXP:
        INTEGER(vec)[idx - 1] = VAL_INT(rhs);
        break;
      case LGLSXP:
        LOGICAL(vec)[idx - 1] = VAL_INT(rhs);
        break;
      default:
        set = FALSE;
        break;
      }

      if (set) {
        R_Visible = TRUE;
        SETTER_CLEAR_NAMED(vec);
        return;
      }
    }
  }

  DO_FAST_SETVECELT(sx, vec, as_index(i) - 1, rhs, sub2);

  // slow path!
  RSH_PC_INC(slow_subassign);
  SEXP idx = val_as_sexp(i);
  SEXP value = val_as_sexp(rhs);

  SEXP args;
  args = CONS_NR(value, R_NilValue);
  SET_TAG(args, Rsh_ValueSym);
  args = CONS_NR(idx, args);
  args = CONS_NR(vec, args);
  PROTECT(args);

  MARK_ASSIGNMENT_CALL(call);
  if (sub2) {
    vec = do_subassign2_dflt(call, Rsh_Subassign2Sym, args, rho);
  } else {
    vec = do_subassign_dflt(call, Rsh_SubassignSym, args, rho);
  }
  UNPROTECT(1);

  SET_SXP_VAL(sx, vec);
}

#define Rsh_MatSubassign(sx, rhs, si, sj, call, rho)                           \
  Rsh_mat_subassign(sx, rhs, si, sj, call, rho, FALSE)
#define Rsh_MatSubassign2(sx, rhs, si, sj, call, rho)                          \
  Rsh_mat_subassign(sx, rhs, si, sj, call, rho, TRUE)

static INLINE void Rsh_mat_subassign(Value *sx, Value rhs, Value si, Value sj,
                                     SEXP call, SEXP rho, Rboolean subassign2) {
  SEXP mat = val_as_sexp(*sx);

  if (MAYBE_SHARED(mat)) {
    mat = Rf_shallow_duplicate(mat);
    SET_SXP_VAL(sx, mat);
  }

  SEXP dim = Rsh_get_mat_dim_attr(mat);

  if (dim != R_NilValue) {
    R_xlen_t i = as_index(si);
    R_xlen_t j = as_index(sj);
    R_xlen_t nrow = INTEGER(dim)[0];
    R_xlen_t ncol = INTEGER(dim)[1];
    if (i > 0 && j > 0 && i <= nrow && j <= ncol) {
      R_xlen_t k = i - 1 + nrow * (j - 1);
      DO_FAST_SETVECELT(sx, mat, k, rhs, subassign2);
    }
  }

  // slow path!
  RSH_PC_INC(slow_subassign);

  SEXP value = val_as_sexp(rhs);
  SEXP idx = val_as_sexp(si);
  SEXP jdx = val_as_sexp(sj);

  SEXP args;
  args = CONS_NR(value, R_NilValue);
  SET_TAG(args, Rsh_ValueSym);
  args = CONS_NR(jdx, args);
  args = CONS_NR(idx, args);
  args = CONS_NR(mat, args);
  PROTECT(args);

  MARK_ASSIGNMENT_CALL(call);
  if (subassign2) {
    mat = do_subassign2_dflt(call, Rsh_Subassign2Sym, args, rho);
  } else {
    mat = do_subassign_dflt(call, Rsh_SubassignSym, args, rho);
  }
  UNPROTECT(1);

  SET_SXP_VAL(sx, mat);
}

static INLINE void Rsh_GetIntlBuiltin(Value *call, Value *args_head,
                                      Value *args_tail, SEXP symbol) {
  SEXP value = INTERNAL(symbol);

  if (TYPEOF(value) != BUILTINSXP) {
    Rf_error("there is no .Internal function '%s'", CHAR(PRINTNAME(symbol)));
  }

  SET_SXP_VAL(call, value);
  INIT_CALL_FRAME(args_head, args_tail);
}

static INLINE void Rsh_SetTag(Value *fun, UNUSED Value *args_head,
                              Value *args_tail, SEXP tag) {
  if (TYPEOF(VAL_SXP(*fun)) != SPECIALSXP) {
    RSH_SET_TAG(*args_tail, tag);
  }
}

static INLINE void Rsh_Invisible() { R_Visible = FALSE; }

static INLINE void Rsh_Visible() { R_Visible = TRUE; }

static INLINE void Rsh_SetterCall(Value *lhs, Value rhs, Value fun,
                                  Value args_head, Value args_tail, SEXP call,
                                  SEXP vexpr, SEXP rho) {
  SEXP lhs_sxp = val_as_sexp(*lhs);
  SEXP fun_sxp = val_as_sexp(fun);
  SEXP args = val_as_sexp(args_head);

  SEXP value;

  MARK_ASSIGNMENT_CALL(call);
  if (MAYBE_SHARED(lhs_sxp)) {
    lhs_sxp = Rf_shallow_duplicate(lhs_sxp);
    SET_SXP_VAL(lhs, lhs_sxp);
    ENSURE_NAMED(lhs_sxp);
  }

  switch (TYPEOF(fun_sxp)) {
  case BUILTINSXP:
    // append RHS top arguments with value tag
    RSH_PUSH_ARG(&args_head, &args_tail, val_as_sexp(rhs));
    RSH_SET_TAG_SYMBOL(args_tail, R_valueSym);
    RSH_CALL_ARGS_DECREMENT_LINKS(args);
    // replace first argument with LHS value
    SETCAR(args, lhs_sxp);
    // call the builtin
    checkForMissings(args, call);
    value = PRIMFUN(fun_sxp)(call, fun_sxp, args, rho);
    break;
  case SPECIALSXP: {
    PROTECT(args = Rf_duplicate(CDR(call)));
    // replace the first argument with evaluated promise containing LHS
    // promise won't be captured so don't track references
    // that is why we have to use the _NR version of mkEVPROMISE
    SEXP prom = R_mkEVPROMISE_NR(Rsh_TmpvalSym, lhs_sxp);
    SETCAR(args, prom);
    // append the evalated promise for RHS as the last argument
    SEXP last = args;
    while (CDR(last) != R_NilValue) {
      last = CDR(last);
    }
    prom = R_mkEVPROMISE_NR(vexpr, val_as_sexp(rhs));
    SETCAR(last, prom);
    // call the special
    value = PRIMFUN(fun_sxp)(call, fun_sxp, args, rho);
    UNPROTECT(1);
    break;
  }
  case CLOSXP: {
    // unlike in SPECIALSXP case, we need to use a RC promise
    SEXP prom = R_mkEVPROMISE(vexpr, val_as_sexp(rhs));
    // append RHS to arguments with value tag
    RSH_PUSH_ARG(&args_head, &args_tail, prom);
    RSH_SET_TAG_SYMBOL(args_tail, R_valueSym);
    // replace first argument with LHS value as *tmp*
    args = Rsh_closure_call_args(args);
    prom = R_mkEVPROMISE(Rsh_TmpvalSym, lhs_sxp);
    SETCAR(args, prom);
    // call the closure
    value = Rf_applyClosure(call, fun_sxp, args, rho, R_NilValue, TRUE);
    break;
  }
  default:
    Rf_error("bad function");
  }

  SET_SXP_VAL(lhs, value);
}

// clang-format off
#define Rsh_StartSubassign(lhs, rhs, call_val, args_head, args_tail, call, rho)  \
  Rsh_start_subassign_dispatch("[<-", lhs, rhs, call_val, args_head, args_tail, call, rho)

#define Rsh_StartSubassign2(lhs, rhs, call_val, args_head, args_tail, call, rho) \
  Rsh_start_subassign_dispatch("[[<-", lhs, rhs, call_val, args_head, args_tail, call, rho)
// clang-format on

static INLINE Rboolean Rsh_start_subassign_dispatch(
    const char *generic, Value *lhs, Value *rhs, Value *call_val,
    Value *args_head, Value *args_tail, SEXP call, SEXP rho) {
  SEXP lhs_sxp = val_as_sexp(*lhs);

  MARK_ASSIGNMENT_CALL(call);
  if (MAYBE_SHARED(lhs_sxp)) {
    lhs_sxp = Rf_shallow_duplicate(lhs_sxp);
    SET_SXP_VAL(lhs, lhs_sxp);
    ENSURE_NAMED(lhs_sxp);
  }

  SEXP value;
  if (isObject(lhs_sxp) && tryAssignDispatch(generic, call, lhs_sxp,
                                             val_as_sexp(*rhs), rho, &value)) {
    RSH_PC_INC(dispatched_subassign);
    RSH_CHECK_SIGINT();
    SET_SXP_VAL(lhs, value);
    // FIXME: temporary
    POP_VAL(4);
    return TRUE;
  } else {
    SEXP tag = TAG(CDR(call));
    SET_SXP_VAL(call_val, call);
    INIT_CALL_FRAME(args_head, args_tail);
    RSH_PUSH_ARG(args_head, args_tail, lhs_sxp);
    RSH_SET_TAG(*args_tail, tag);
    // stack at the end:
    //         s4 - lhs
    //         s3 - rhs
    //         s2 - call
    //         s1 - args head
    //         s0 - args tail
    // top -->
    return FALSE;
  }
}

static INLINE void Rsh_DoMissing(Value *call, Value *args_head,
                                 Value *args_tail) {
  SEXP call_sxp = VAL_SXP(*call);
  if (TYPEOF(call_sxp) != SPECIALSXP) {
    RSH_PUSH_ARG(args_head, args_tail, R_MissingArg);
  }
}

#define Rsh_DfltSubassign(lhs, rhs, call_val, args_head, args_tail, rho)       \
  Rsh_dflt_subassign_dispatch(do_subassign_dflt, Rsh_SubassignSym, lhs, rhs,   \
                              call_val, args_head, args_tail, rho)
#define Rsh_DfltSubassign2(lhs, rhs, call_val, args_head, args_tail, rho)      \
  Rsh_dflt_subassign_dispatch(do_subassign2_dflt, Rsh_Subassign2Sym, lhs, rhs, \
                              call_val, args_head, args_tail, rho)

static INLINE void Rsh_dflt_subassign_dispatch(CCODE fun, SEXP symbol,
                                               Value *lhs, Value rhs,
                                               Value call_val, Value args_head,
                                               Value args_tail, SEXP rho) {
  // stack at the beginning:
  //         s4 - lhs
  //         s3 - rhs
  //         s2 - call
  //         s1 - args head
  //         s0 - args tail
  // top -->
  SEXP call_sxp = val_as_sexp(call_val);
  SEXP args = val_as_sexp(args_head);
  RSH_CALL_ARGS_DECREMENT_LINKS(args);
  MARK_ASSIGNMENT_CALL(call_sxp);
  RSH_PUSH_ARG(&args_head, &args_tail, val_as_sexp(rhs));
  SEXP value = fun(call_sxp, symbol, args, rho);
  SET_VAL(lhs, value);
}

#define Rsh_DfltSubset(value, call_val, args_head, args_tail, rho)             \
  Rsh_dflt_subset(do_subset_dflt, Rsh_SubassignSym, value, call_val,           \
                  args_head, args_tail, rho)
#define Rsh_DfltSubset2(value, call_val, args_head, args_tail, rho)            \
  Rsh_dflt_subset(do_subset2_dflt, Rsh_Subassign2Sym, value, call_val,         \
                  args_head, args_tail, rho)

static INLINE void Rsh_dflt_subset(CCODE fun, SEXP symbol, Value *value,
                                   Value call_val, Value args_head,
                                   Value args_tail, SEXP rho) {
  SEXP call_sxp = val_as_sexp(call_val);
  SEXP args = val_as_sexp(args_head);
  RSH_CALL_ARGS_DECREMENT_LINKS(args);
  SEXP value_sxp = fun(call_sxp, symbol, args, rho);
  SET_VAL(value, value_sxp);
  R_Visible = TRUE;
}

#define Rsh_SubsetN(stack, n, call, rho)                                       \
  Rsh_do_subset_n((stack), n, call, rho, FALSE)
#define Rsh_Subset2N(stack, n, call, rho)                                      \
  Rsh_do_subset_n((stack), n, call, rho, TRUE)

static INLINE void Rsh_do_subset_n(Value *stack, int rank, SEXP call, SEXP rho,
                                   Rboolean subset2) {
  Value *sx = stack - rank - 1;
  Value *ix = stack - rank;
  SEXP vec = val_as_sexp(*sx);

  if (subset2 || FAST_VECELT_OK(vec)) {
    SEXP dim = Rsh_get_array_dim_attr(vec);
    if (dim != R_NilValue) {
      R_xlen_t k = Rsh_compute_index(dim, ix, rank);
      if (k >= 0) {
        DO_FAST_VECELT(vec, k, subset2, sx);
      }
    }
  }

  // slow path!
  RSH_PC_INC(slow_subset);

  SEXP args =
      PROTECT(CONS_NR(vec, Rsh_append_values_to_args(ix, rank, R_NilValue)));
  SEXP value;

  if (subset2) {
    value = do_subset2_dflt(call, Rsh_Subset2Sym, args, rho);
  } else {
    value = do_subset_dflt(call, Rsh_SubsetSym, args, rho);
  }

  UNPROTECT(1);

  SET_VAL(sx, value);
}

#define Rsh_SubassignN(stack, n, call, rho)                                    \
  Rsh_do_subassign_n((stack), n, call, rho, FALSE)
#define Rsh_Subassign2N(stack, n, call, rho)                                   \
  Rsh_do_subassign_n((stack), n, call, rho, TRUE)

static INLINE void Rsh_do_subassign_n(Value *stack, int rank, SEXP call,
                                      SEXP rho, Rboolean subassign2) {
  Value *sx = stack - rank - 2;
  Value *sv = stack - rank - 2;
  Value *rhs = stack - rank - 1;
  Value *ix = stack - rank;

  SEXP vec = val_as_sexp(*sx);

  if (MAYBE_SHARED(vec)) {
    vec = Rf_shallow_duplicate(vec);
    SET_SXP_VAL(sx, vec);
  }

  SEXP dim = Rsh_get_array_dim_attr(vec);
  if (dim != R_NilValue) {
    R_xlen_t k = Rsh_compute_index(dim, ix, rank);
    if (k >= 0) {
      DO_FAST_SETVECELT(sv, vec, k, *rhs, subassign2);
    }
  }

  // slow path!
  RSH_PC_INC(slow_subassign);

  SEXP rhs_sxp = val_as_sexp(*rhs);
  SEXP args = CONS_NR(rhs_sxp, R_NilValue);
  SET_TAG(args, Rsh_ValueSym);
  args = PROTECT(CONS_NR(vec, Rsh_append_values_to_args(ix, rank, args)));
  MARK_ASSIGNMENT_CALL(call);
  if (subassign2) {
    vec = do_subassign2_dflt(call, Rsh_Subassign2Sym, args, rho);
  } else {
    vec = do_subassign_dflt(call, Rsh_SubassignSym, args, rho);
  }

  UNPROTECT(1);

  SET_SXP_VAL(sv, vec);
}

static INLINE void Rsh_GetterCall(Value *lhs, Value *fun, Value args_head,
                                  Value args_tail, SEXP call, SEXP rho) {

  SEXP lhs_sxp = val_as_sexp(*lhs);
  SEXP fun_sxp = val_as_sexp(*fun);
  SEXP args = val_as_sexp(args_head);

  SEXP value;

  switch (TYPEOF(fun_sxp)) {
  case BUILTINSXP:
    RSH_CALL_ARGS_DECREMENT_LINKS(args);
    // replace first argument with LHS value
    SETCAR(args, lhs_sxp);
    // call the builtin
    checkForMissings(args, call);
    value = PRIMFUN(fun_sxp)(call, fun_sxp, args, rho);
    break;
  case SPECIALSXP: {
    /* duplicate arguments and put into stack for GC protection */
    args = PROTECT(Rf_duplicate(CDR(call)));
    SEXP prom = R_mkEVPROMISE_NR(Rsh_TmpvalSym, lhs_sxp);
    SETCAR(args, prom);
    // call the special
    value = PRIMFUN(fun_sxp)(call, fun_sxp, args, rho);
    UNPROTECT(1);
    break;
  }
  case CLOSXP: {
    // unlike in SPECIALSXP case, we need to use a RC promise
    SEXP prom = R_mkEVPROMISE(Rsh_TmpvalSym, lhs_sxp);
    SETCAR(args, prom);
    // call the closure
    value = Rf_applyClosure(call, fun_sxp, args, rho, R_NilValue, TRUE);
    break;
  }
  default:
    Rf_error("bad function");
  }

  SET_VAL(fun, value);
}

static INLINE void Rsh_SpecialSwap(Value *s3, Value *s2, Value *s1) {

#define VAL_MAYBE_REFERENCED(v) (VAL_IS_SXP(v) && MAYBE_REFERENCED(VAL_SXP(v)))
#define VAL_MAYBE_SHARED(v) (VAL_IS_SXP(v) && MAYBE_SHARED(VAL_SXP(v)))

  if (VAL_MAYBE_REFERENCED(*s1) &&
      (VAL_MAYBE_SHARED(*s1) || VAL_MAYBE_SHARED(*s3))) {
    SET_SXP_VAL(s1, Rf_shallow_duplicate(VAL_SXP(*s1)));
  }

  Value tmp = *s1;
  *s1 = *s2;
  *s2 = tmp;
}

typedef struct {
  R_xlen_t idx;
  R_xlen_t len;
  SEXPTYPE type;
  SEXP symbol;
} RshLoopInfo;

#define SET_FOR_LOOP_VAR(value, cell, symbol, rho)                             \
  do {                                                                         \
    if (BCELL_IS_UNBOUND(cell) || !bcell_set_value(cell, value)) {             \
      Rf_defineVar(symbol, value, rho);                                        \
    }                                                                          \
  } while (0)

static INLINE void Rsh_StartFor(Value *s2, Value *s1, Value *s0, SEXP call,
                                SEXP symbol, BCell *cell, SEXP rho) {
  SEXP seq;
  Rboolean isq = FALSE;

  if (VAL_IS_SXP(*s2)) {
    seq = VAL_SXP(*s2);

    if (Rf_inherits(seq, "factor")) {
      seq = Rf_asCharacterFactor(seq);
      SET_SXP_VAL(s2, seq);
    }
  } else if (VAL_IS_ISQ(*s2)) {
    isq = TRUE;
    seq = VAL_SXP(*s2);
  } else {
    seq = val_as_sexp(*s2);
    SET_SXP_VAL(s2, seq);
  }

  // FIXME: BCPROT?

  SEXP info_sxp = Rf_allocVector(RAWSXP, sizeof(RshLoopInfo));
  RshLoopInfo *info = (RshLoopInfo *)RAW0(info_sxp);
  SET_SXP_VAL(s1, info_sxp);

  info->idx = -1;

  if (isq) {
    int n1 = INTEGER(seq)[0];
    int n2 = INTEGER(seq)[1];
    info->len = n1 <= n2 ? n2 - n1 + 1 : n1 - n2 + 1;
  } else if (Rf_isVector(seq)) {
    info->len = XLENGTH(seq);
  } else if (Rf_isList(seq) || isNull(seq)) {
    info->len = Rf_length(seq);
  } else {
    Rf_errorcall(call, "invalid for() loop sequence");
  }

  info->type = isq ? ISQSXP : TYPEOF(seq);
  info->symbol = symbol;

  // bump up links count of seq to avoid modification by loop code
  INCREMENT_LINKS(seq);

  // place initial loop variable value object on stack
  SEXP value;
  switch (TYPEOF(seq)) {
  case LGLSXP:
  case INTSXP:
  case REALSXP:
  case CPLXSXP:
  case STRSXP:
  case RAWSXP:
    value = Rf_allocVector(TYPEOF(seq), 1);
    INCREMENT_NAMED(value);
    break;
  default:
    value = R_NilValue;
  }
  SET_SXP_VAL(s0, value);

  Rsh_SetVar(s0, symbol, cell, rho);

  // stack at the end:
  //         s2 - sequence
  //         s1 - casted pointer for the RshLoopInfo
  //         s0 - the initial value
  // top -->
}

#define FAST_STEP_NEXT(cell, value, v, s, ctype, rtype, btype)                 \
  do {                                                                         \
    SEXP __c__ = *(cell);                                                      \
    ctype __v__ = (v);                                                         \
    if (!BINDING_IS_LOCKED(__c__)) {                                           \
      if (BCELL_TAG(__c__) == rtype) {                                         \
        BCELL_##btype##_SET(__c__, __v__);                                     \
      } else if (!IS_ACTIVE_BINDING(__c__)) {                                  \
        BCELL_##btype##_NEW(__c__, __v__);                                     \
      }                                                                        \
      return TRUE;                                                             \
    } else {                                                                   \
      value = VAL_SXP(*(s));                                                   \
      SET_SCALAR_##btype((value), __v__);                                      \
    }                                                                          \
  } while (0)

static INLINE Rboolean Rsh_StepFor(Value *s2, Value *s1, Value *s0, BCell *cell,
                                   SEXP rho) {
  SEXP seq = VAL_SXP(*s2);
  RshLoopInfo *info = (RshLoopInfo *)RAW0(VAL_SXP(*s1));
  R_xlen_t i = ++(info->idx);

  if (i >= info->len) {
    return FALSE;
  }

  RSH_CHECK_SIGINT();

  SEXP value;
  // it is important to use info->type and not TYPEOF(seq)
  // as it could be the ISQSXP
  switch (info->type) {
  case INTSXP: {
    int v = INTEGER_ELT(seq, i);
    FAST_STEP_NEXT(cell, value, v, s0, int, INTSXP, IVAL);
    break;
  }
  case ISQSXP: {
    int *info = INTEGER(seq);
    int n1 = info[0];
    int n2 = info[1];
    int ii = (int)i;
    int v = n1 <= n2 ? n1 + ii : n1 - ii;
    RSH_PC_INC(isq_for);
    FAST_STEP_NEXT(cell, value, v, s0, int, INTSXP, IVAL);
    break;
  }
  case REALSXP: {
    double v = REAL_ELT(seq, i);
    FAST_STEP_NEXT(cell, value, v, s0, double, REALSXP, DVAL);
    break;
  }
  case LGLSXP: {
    int v = LOGICAL_ELT(seq, i);
    FAST_STEP_NEXT(cell, value, v, s0, int, LGLSXP, LVAL);
    break;
  }
  case CPLXSXP:
    value = VAL_SXP(*s0);
    SET_SCALAR_CVAL(value, COMPLEX_ELT(seq, i));
    break;
  case STRSXP:
    value = VAL_SXP(*s0);
    SET_STRING_ELT(value, 0, STRING_ELT(seq, i));
    break;
  case RAWSXP:
    value = VAL_SXP(*s0);
    SET_SCALAR_BVAL(value, RAW(seq)[i]);
    break;
  case EXPRSXP:
  case VECSXP:
    value = VECTOR_ELT(seq, i);
    ENSURE_NAMEDMAX(value);
    break;
  case LISTSXP:
    value = CAR(seq);
    ENSURE_NAMEDMAX(value);
    SET_SXP_VAL(s2, CDR(seq));
  default:
    Rf_error("invalid sequence argument in for loop");
  }

  SET_FOR_LOOP_VAR(value, *cell, info->symbol, rho);
  return TRUE;
}

static INLINE void Rsh_EndFor(Value *s2, Value s1, Value s0, SEXP rho) {
  // FIXME: missing stack protection stuff
  SET_SXP_VAL(s2, R_NilValue);
}

#define ISQ_NEW(/* int */ x, /* int */ y, /* Value* */ res)                    \
  do {                                                                         \
    SEXP __v__ = Rf_allocVector(INTSXP, 2);                                    \
    INTEGER(__v__)[0] = (int)(x);                                              \
    INTEGER(__v__)[1] = (int)(y);                                              \
    SET_SXP_VAL(res, __v__);                                                   \
    res->tag = ISQSXP;                                                         \
    RSH_PC_INC(isq);                                                           \
  } while (0)

static INLINE void Rsh_Colon(Value *s1, Value s0, SEXP call, SEXP rho) {
  if (VAL_IS_DBL(*s1) && VAL_IS_DBL(s0)) {
    double rn1 = VAL_DBL(*s1);
    double rn2 = VAL_DBL(s0);
    if (R_FINITE(rn1) && R_FINITE(rn2) && INT_MIN <= rn1 && INT_MAX >= rn1 &&
        INT_MIN <= rn2 && INT_MAX >= rn2 && rn1 == (int)rn1 &&
        rn2 == (int)rn2) {
      ISQ_NEW(rn1, rn2, s1);
      R_Visible = TRUE;
    }
    return;
  }

  // slow path!
  DO_BUILTIN2(do_colon, call, Rsh_ColonOp, *s1, s0, rho, s1);
}

static INLINE void Rsh_SeqAlong(Value *v, SEXP call, SEXP rho) {
  SEXP s = val_as_sexp(*v);
  if (!isObject(s)) {
    R_xlen_t len = Rf_xlength(s);
    if (len > 0 && len <= INT_MAX) {
      ISQ_NEW(1, len, v);
      R_Visible = TRUE;
      return;
    }
  }
  DO_BUILTIN1(do_seq_along, call, Rsh_SeqAlongSym, *v, rho, v);
}

static INLINE void Rsh_SeqLen(Value *v, SEXP call, SEXP rho) {
  double len = NAN;

  if (VAL_IS_DBL(*v)) {
    len = VAL_DBL(*v);
  } else if (VAL_IS_INT(*v)) {
    len = VAL_INT(*v);
  }

  if (len > 0 && len < INT_MAX && len == (int)len) {
    ISQ_NEW(1, len, v);
    R_Visible = TRUE;
    return;
  }

  DO_BUILTIN1(do_seq_len, call, Rsh_SeqLenSym, *v, rho, v);
}

#define RSH_IS_TEST(v, p)                                                      \
  do {                                                                         \
    Value *__v__ = v;                                                          \
    SET_LGL_VAL(__v__, p(val_as_sexp(*__v__)));                                \
  } while (0)

#define RSH_IS_TYPE(v, t)                                                      \
  do {                                                                         \
    Value *__v__ = v;                                                          \
    int __tag__ = VAL_TAG(*__v__);                                             \
    int __type__ = (t);                                                        \
    SET_LGL_VAL(__v__, __tag__ == 0 ? (TYPEOF(VAL_SXP(*__v__)) == __type__)    \
                                    : __tag__ == __type__);                    \
  } while (0)

static INLINE void Rsh_IsNull(Value *v) { RSH_IS_TYPE(v, NILSXP); }

static INLINE void Rsh_IsObject(Value *v) { RSH_IS_TEST(v, isObject); }

static INLINE void Rsh_IsNumeric(Value *v) { RSH_IS_TEST(v, isNumericOnly); }

static INLINE void Rsh_IsLogical(Value *v) { RSH_IS_TYPE(v, LGLSXP); }

static INLINE void Rsh_IsDouble(Value *v) { RSH_IS_TYPE(v, REALSXP); }

static INLINE void Rsh_IsComplex(Value *v) { RSH_IS_TYPE(v, CPLXSXP); }

static INLINE void Rsh_IsCharacter(Value *v) { RSH_IS_TYPE(v, STRSXP); }

static INLINE void Rsh_IsSymbol(Value *v) { RSH_IS_TYPE(v, SYMSXP); }

static INLINE void Rsh_IsInteger(Value *v) {
  switch (VAL_TAG(*v)) {
  case INTSXP:
  case ISQSXP:
    SET_LGL_VAL(v, TRUE);
    break;
  case 0: // some SEXP
  {
    SEXP s = VAL_SXP(*v);
    SET_LGL_VAL(v, (TYPEOF(s) == INTSXP) && !Rf_inherits(s, "factor"));
    break;
  }
  default:
    SET_LGL_VAL(v, FALSE);
  }
}

static inline void fixup_scalar_logical(Value *v, SEXP call, const char *arg,
                                        const char *op) {
  if (VAL_IS_LGL(*v)) {
    return;
  }

  // FIXME: does it make sense to optimize LGL / DBL?

  SEXP s = val_as_sexp(*v);
  if (IS_SIMPLE_SCALAR(s, LGLSXP)) {
    SET_LGL_VAL(v, SCALAR_LVAL(s));
  } else {
    if (!Rf_isNumber(s)) {
      Rf_errorcall(call, "invalid %s type in 'x %s y'", arg, op);
    }

    SET_LGL_VAL(v, Rf_asLogical2(s, 1, call));
  }
}

static INLINE Rboolean Rsh_And1st(Value *v, SEXP call) {
  fixup_scalar_logical(v, call, "'x'", "&&");
  R_Visible = TRUE;
  return VAL_INT(*v) == FALSE ? TRUE : FALSE;
}

static INLINE void Rsh_And2nd(Value *v2, Value v1, SEXP call) {
  // v2 is the result of Rsh_And1St
  fixup_scalar_logical(&v1, call, "'y'", "&&");
  R_Visible = TRUE;
  // Note: ‘NA’ is a valid logical object.  Where a component of ‘x’ or ‘y’
  //       is ‘NA’, the result will be ‘NA’ if the outcome is ambiguous.  In
  //       other words ‘NA & TRUE’ evaluates to ‘NA’, but ‘NA & FALSE’
  //       evaluates to ‘FALSE’.  See the examples below.
  //
  // Therefore:
  // The first argument is TRUE or NA.
  // If the second argument is not TRUE then its value is the result.
  // If the second argument is TRUE, then the first argument's value is the
  // result.
  if (VAL_INT(v1) == FALSE || VAL_INT(v1) == NA_LOGICAL) {
    *v2 = v1;
  }
  R_Visible = TRUE;
}

static INLINE Rboolean Rsh_Or1st(Value *v, SEXP call) {
  fixup_scalar_logical(v, call, "'x'", "||");
  R_Visible = TRUE;
  int r = VAL_INT(*v) != FALSE && VAL_INT(*v) != NA_LOGICAL;
  return r ? TRUE : FALSE;
}

static INLINE void Rsh_Or2nd(Value *v2, Value v1, SEXP call) {
  // v2 is the result of Rsh_And1St
  fixup_scalar_logical(&v1, call, "'y'", "||");
  R_Visible = TRUE;
  // The first argument is FALSE or NA.
  // If the second argument is not FALSE then its value is the result.
  // If the second argument is FALSE, then the first argument's value is the
  // result.
  if (VAL_INT(v1) != FALSE) {
    *v2 = v1;
  }
  R_Visible = TRUE;
}

static INLINE void Rsh_Log(Value *val, SEXP call, SEXP rho) {
  if (VAL_IS_DBL(*val)) {
    double d = VAL_DBL(*val);
    double r = R_log(d);
    if (ISNAN(r)) {
      if (ISNAN(d)) {
        r = d;
      } else {
        Rf_warningcall(call, R_MSG_NA);
      }
    }
    R_Visible = TRUE;
    SET_DBL_VAL(val, r);
    return;
  }

  // slow path
  SEXP args = CONS_NR(val_as_sexp(*val), R_NilValue);
  SET_SXP_VAL(val, args); // to protect
  R_Visible = TRUE;
  SET_SXP_VAL(val, do_log_builtin(call, LOG_OP, args, rho));
  RSH_PC_INC(slow_math1);
}

static INLINE void Rsh_LogBase(Value *val, Value base, SEXP call, SEXP rho) {
  if (VAL_IS_DBL(*val) && VAL_IS_DBL(base)) {
    double d = VAL_DBL(*val);
    double b = VAL_DBL(base);
    double r = R_logbase(d, b);
    if (ISNAN(r)) {
      if (ISNAN(d)) {
        r = d;
      } else if (ISNAN(b)) {
        r = b;
      } else {
        Rf_warningcall(call, R_MSG_NA);
      }
    }
    R_Visible = TRUE;
    SET_DBL_VAL(val, r);
    return;
  }

  // slow path
  SEXP args = CONS_NR(val_as_sexp(base), R_NilValue);
  args = CONS_NR(val_as_sexp(*val), args);
  SET_SXP_VAL(val, args); // to protect
  R_Visible = TRUE;
  SET_SXP_VAL(val, do_log_builtin(call, LOG_OP, args, rho));
  RSH_PC_INC(slow_math1);
}

static INLINE Rsh_Math1Fun Rsh_get_math1_fun(int i, SEXP call) {
  if (CAR(call) != R_MATH1_EXT_SYMS[i]) {
    Rf_error("math1 compiler/interpreter mismatch");
  } else {
    return R_MATH1_EXT_FUNS[i];
  }
}

static INLINE void Rsh_Math1(Value *v, SEXP call, int op, SEXP rho) {
  if (VAL_IS_DBL(*v)) {
    Rsh_Math1Fun fun = Rsh_get_math1_fun(op, call);
    double d = VAL_DBL(*v);
    double r = fun(d);
    if (ISNAN(r)) {
      if (ISNAN(d)) {
        r = d;
      } else {
        Rf_warningcall(call, R_MSG_NA);
      }
    }
    R_Visible = TRUE;
    SET_DBL_VAL(v, r);
    return;
  }

  // slow path
  SEXP args = CONS_NR(val_as_sexp(*v), R_NilValue);
  SET_SXP_VAL(v, args); // to protect
  R_Visible = TRUE;
  SET_VAL(v, do_math1(call, R_MATH1_EXT_OPS[op], args, rho));
  RSH_PC_INC(slow_math1);
}

#define Rsh_Dup(a, b) *(b) = *(a)
#define Rsh_Dup2nd(a, b, c) *(c) = *(a)

static INLINE void Rsh_DoDots(Value *call, Value *args_head, Value *args_tail,
                              SEXP rho) {
  SEXPTYPE ftype = TYPEOF(VAL_SXP(*call));
  if (ftype == SPECIALSXP) {
    return;
  }

  SEXP h = R_findVar(R_DotsSymbol, rho);
  // FIXME: the h == R_NilValue -- does it make sense? eval.c:8028
  if (TYPEOF(h) == DOTSXP || h == R_NilValue) {
    PROTECT(h);
    for (; h != R_NilValue; h = CDR(h)) {
      SEXP val;
      if (ftype == BUILTINSXP) {
        val = Rf_eval(CAR(h), rho);
      } else if (CAR(h) == R_MissingArg) {
        val = CAR(h);
      } else {
        val = Rf_mkPROMISE(CAR(h), rho);
      }
      RSH_PUSH_ARG(args_head, args_tail, val);
      RSH_SET_TAG(*args_tail, TAG(h));
    }
    UNPROTECT(1); /* h */
  } else if (h != R_MissingArg) {
    Rf_error("'...' used in an incorrect context");
  }
}

static INLINE void Rsh_CallSpecial(Value *value, SEXP call, SEXP rho) {
  SEXP symbol = CAR(call);
  SEXP fun = getPrimitive(symbol, SPECIALSXP);

  const void *vmax = vmaxget();
  int flag = PRIMPRINT(fun);
  // FIXME: create a macro for the Rboolean -> bool conversion for C++
  R_Visible = (flag != 1) ? TRUE : FALSE;
  SEXP v = PRIMFUN(fun)(call, fun, markSpecialArgs(CDR(call)), rho);
  if (flag < 2) {
    R_Visible = (flag != 1) ? TRUE : FALSE;
  }
  vmaxset(vmax);
  SET_VAL(value, v);
}

#endif // RUNTIME_H
