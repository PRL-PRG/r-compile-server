#pragma once

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

// For copy-and-patch. Possibly for Rsh as well.
// To allow patching of internal symbols without unnecessary indirection
#ifdef RCP
#define EXTERN_ATTRIBUTES                                                      \
__attribute__((section(".data"), visibility("hidden")))
#else
#define EXTERN_ATTRIBUTES
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
EXTERN_ATTRIBUTES extern SEXP R_ARITH_OPS[];
EXTERN_ATTRIBUTES extern SEXP R_ARITH_OP_SYMS[];
EXTERN_ATTRIBUTES extern SEXP R_REL_OPS[];
EXTERN_ATTRIBUTES extern SEXP R_REL_OP_SYMS[];

EXTERN_ATTRIBUTES extern SEXP R_MATH1_OPS[];
EXTERN_ATTRIBUTES extern SEXP R_UNARY_OPS[];
EXTERN_ATTRIBUTES extern SEXP R_UNARY_OP_SYMS[];
EXTERN_ATTRIBUTES extern SEXP R_LOGIC2_OPS[];

EXTERN_ATTRIBUTES extern SEXP R_MATH1_EXT_OPS[];
EXTERN_ATTRIBUTES extern SEXP R_MATH1_EXT_SYMS[];
#ifndef RCP
extern Rsh_Math1Fun R_MATH1_EXT_FUNS[];
#endif
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
  EXTERN_ATTRIBUTES extern SEXP b##Sym EXTERN_ATTRIBUTES;                      \
  EXTERN_ATTRIBUTES extern SEXP b##Op EXTERN_ATTRIBUTES;

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
  int ival;
  double dval;
  SEXP sxpval;
} BCellVal;

// FIXME: remove
#define DEFINE_BCELL(name)                                                     \
  R_BCNodeStackTop->tag = 0;                                                   \
  R_BCNodeStackTop->flags = 0;                                                 \
  R_BCNodeStackTop->u.sxpval = R_NilValue;                                     \
  BCell *name = &(R_BCNodeStackTop++)->u.sxpval;

#define DEFINE_BCELL2(name) BCell name = R_NilValue;

#define DEFINE_VAL(name)                                                       \
  R_BCNodeStackTop->tag = INTSXP;                                              \
  R_BCNodeStackTop->flags = 0;                                                 \
  Value *name = R_BCNodeStackTop++;

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

// Returns a binding cell of the given symbol in rho or R_NilValue if the symbol
// is not bound or not bindable
static INLINE BCell bcell_get(SEXP symbol, SEXP rho) {
  if (rho == R_BaseEnv || rho == R_BaseNamespace || IS_USER_DATABASE(rho)) {
    return R_NilValue;
  }

  R_varloc_t loc = R_findVarLocInFrame(rho, symbol);
  SEXP cell = loc.cell;

  return cell == NULL ? R_NilValue : cell;
}

// Ensures that the symbol from rho is bound in the given cell as long
// as the symbol in rho is bindable. If not, it sets the cell to R_NilValue
static ALWAYS_INLINE void bcell_ensure_cached(SEXP symbol, SEXP rho,
                                              BCell *const cell) {
  if (TAG(*cell) == symbol && !BCELL_IS_UNBOUND(*cell)) {
    return;
  }

  SEXP ncell = bcell_get(symbol, rho);
  if (ncell != R_NilValue) {
    *cell = ncell;
  } else if (*cell != R_NilValue && BCELL_IS_UNBOUND(*cell)) {
    *cell = R_NilValue;
  }
}

// Returns the bound value in the case it is bound or Rsh_UnboundValue
// otherwise.
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

static ALWAYS_INLINE Rboolean bcell_set_value(BCell cell, SEXP value) {
  if (cell != R_NilValue && !BINDING_IS_LOCKED(cell) &&
      !IS_ACTIVE_BINDING(cell)) {
    if (BNDCELL_TAG(cell) || CAR(cell) != value) {
      BCELL_SET(cell, value);
      if (MISSING(cell)) {
        SET_MISSING(cell, 0);
      } else {
        BCELL_INLINE(cell, value);
      }
    }
    return TRUE;
  }

  return FALSE;
}

// CONSTANTS

// FIXME: use the SCALAR_ macros
#define Rsh_const(pool, idx) ((SEXP *) STDVEC_DATAPTR((pool)))[(idx)]
#define Rsh_set_const(pool, idx, value) ((SEXP *) STDVEC_DATAPTR((pool)))[(idx)] = (value)

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

// RUNTIME FUNCTIONS
// -----------------

#ifdef RSH_TESTS
#include "runtime_impl.h"
#else
JIT_DECL SEXP Rsh_initialize_runtime(void);
JIT_DECL SEXP Rsh_pc_get(void);
JIT_DECL SEXP Rsh_pc_reset(void);
#endif
