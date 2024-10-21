#ifndef RUNTIME_H
#define RUNTIME_H

// THIS HEADER NEEDS TO BE A C-compatible HEADER
// IT IS USED BY THE SERVER COMPILER

// MAKE SURE Rinternals.h is not listed!
#include "R_ext/Boolean.h"
#include "runtime_internals.h"
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

typedef int32_t i32;
typedef uint64_t u64;
typedef uint32_t u32;
typedef u64 Value;

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
#endif

#define RSH_R_SYMBOLS                                                          \
  X([, Rsh_SubsetSym)                                                        \
  X([[, Rsh_Subset2Sym)                                                      \
  X(value, Rsh_ValueSym)                                                     \
  X([<-, Rsh_SubassignSym)                                                   \
  X([[<-, Rsh_Subassign2Sym)                                                 \
  X(.External2, Rsh_DotExternal2Sym)                                         \
  X(*tmp*, Rsh_TmpvalSym) \
  X(:, Rsh_ColonSym) \
  X(seq_along, Rsh_SeqAlongSym) \
  X(seq_len, Rsh_SeqLenSym)

#ifndef RSH_TESTS
#define X(a, b) extern SEXP b;
RSH_R_SYMBOLS
#undef X
#endif

// clang-format off
//
// VALUE REPRESENTATION
// --------------------
//
// IEEE 754 double-precision float:
//
// 1 Sign bit
// | 11 Exponent bits
// | |          52 Mantissa bits
// | |          |
// S[Exponent-][Mantissa------------------------------------------]
//
// Our QNAN - 13 bits:
//   NaN bits
//  +---------+ v Intel’s QNaN Floating-Point Indefinite
// -1111111111111--------------------------------------------------
//             ^ NaN type (1 - quiet (QNAN), 0 - signalling)
//
// Our NaN boxing:
//
//          63              49
//           v               v
//      QNAN 0|1111111111111|00|000000000000000000000000000000000000000000000000
//      MASK 1|1111111111111|11|000000000000000000000000000000000000000000000000
//  MASK_INT 0|1111111111111|00|000000000000000000000000000000000000000000000000
//  MASK_SXP 1|1111111111111|00|000000000000000000000000000000000000000000000000
//  MASK_LGL 0|1111111111111|11|000000000000000000000000000000000000000000000000
//  MASK_ISQ 1|1111111111111|01|000000000000000000000000000000000000000000000000
//      TRUE 0|1111111111111|11|000000000000000000000000000000000000000000000001
//     FALSE 0|1111111111111|11|000000000000000000000000000000000000000000000000
//                            ^
//                            48
//
// The 49. bit in SEXP is used to mark MAYBE_REFERENCED
//
// clang-format on

// the 13 bits of the NaN boxing
#define QNAN ((u64)0x7ffc000000000000)
#define SIGN_BIT ((u64)1 << 63)
#define MASK ((SIGN_BIT | QNAN | ((u64)3 << 48)))
#define MASK_INT QNAN
#define MASK_SXP (SIGN_BIT | QNAN)
#define MASK_LGL (QNAN | ((u64)3 << 48))
#define MASK_ISQ (MASK_SXP | ((u64)1 << 48))

#define VAL_TRUE ((Value)(MASK_LGL | 1))
#define VAL_FALSE ((Value)(MASK_LGL | 0))

#define VAL_INT(v) (int)(v)
#define VAL_SXP(v) (SEXP)((v) & (((u64)1 << 48) - 1))

static INLINE double VAL_DBL(Value v) {
  double d;
  // type punning
  memcpy(&d, &v, sizeof(double));
  return d;
}

#define VAL_IS_INT(v) (((v) & MASK) == MASK_INT)
#define VAL_IS_INT_NOT_NA(v) (VAL_IS_INT(v) && VAL_INT(v) != NA_INTEGER)
#define VAL_IS_SXP(v) (((v) & MASK) == MASK_SXP)
#define VAL_IS_DBL(v) (((v) & QNAN) != QNAN)
#define VAL_IS_DBL_NOT_NAN(v) VAL_IS_DBL(v) && !ISNAN(VAL_DBL(v))
#define VAL_IS_LGL(v) (((v) & MASK) == MASK_LGL)
#define VAL_IS_LGL_NOT_NA(v) (VAL_IS_LGL(v) && VAL_INT(v) != NA_LOGICAL)
#define VAL_IS_ISQ(v) (((v) & MASK) == MASK_ISQ)

#define SXP_TO_VAL(v) (Value)(MASK_SXP | ((u64)(v)))
#define ISQ_TO_VAL(v) (Value)(MASK_ISQ | ((u64)(v)))
// this is to prevent the NA value to change all the bits to 1
#define INT_TO_VAL(v) (Value)(MASK_INT | ((u64)(u32)(v)))
#define LGL_TO_VAL(v) (Value)(MASK_LGL | ((u64)(u32)(v)))

static INLINE Value DBL_TO_VAL(double d) {
  Value v;
  // type punning
  memcpy(&v, &d, sizeof(double));
  return v;
}

#define ISQSXP 9999

#define VAL_TAG(v)                                                             \
  ((VAL_IS_DBL(v) ? REALSXP                                                    \
                  : (VAL_IS_INT(v) ? INTSXP                                    \
                                   : (VAL_IS_LGL(v)   ? LGLSXP                 \
                                      : VAL_IS_ISQ(v) ? ISQSXP                 \
                                                      : 0))))

// TODO: can we share this bcell expand?
static INLINE SEXP val_as_sexp(Value v) {
  switch (VAL_TAG(v)) {
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

static INLINE Value sexp_as_val(SEXP s) {
  if (IS_SCALAR(s, REALSXP)) {
    return DBL_TO_VAL(REAL(s)[0]);
  } else if (IS_SCALAR(s, INTSXP)) {
    return INT_TO_VAL(INTEGER(s)[0]);
  } else if (IS_SCALAR(s, LGLSXP)) {
    return LGL_TO_VAL(INTEGER(s)[0]);
  } else {
    return SXP_TO_VAL(s);
  }
}

#define VAL_MAYBE_REFERENCED(v) ((v) & ((u64)1 << 49))
#define VAL_SET_MAYBE_REFERENCED(v) ((v) |= ((u64)1 << 49))
#define VAL_CLEAR_MAYBE_REFERENCED(v) ((v) &= ~((u64)1 << 49))
#define VAL_MAYBE_SHARED(v) (VAL_IS_SXP(v) && (REFCNT(VAL_SXP(v)) > 1))

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

#define BCELL_IS_UNBOUND(v) (BCELL_TAG(v) == 0 && CAR0(v) == R_UnboundValue)
#define BCELL_TAG(cell) ((cell)->sxpinfo.extra)
#define BCELL_TAG_SET(cell, tag) BCELL_TAG(cell) = tag
#define BCELL_VAL(cell) ((cell) != R_NilValue ? CAR(cell) : R_UnboundValue)
#define BCELL_DVAL(v) ((R_bndval_t *)&CAR0(v))->dval
#define BCELL_IVAL(v) ((R_bndval_t *)&CAR0(v))->ival
#define BCELL_LVAL(v) ((R_bndval_t *)&CAR0(v))->ival

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

// Returns a binding cell or R_UnboundValue if the symbol is not bound
static INLINE BCell bcell_get(SEXP symbol, SEXP rho) {
  if (rho == R_BaseEnv || rho == R_BaseNamespace || IS_USER_DATABASE(rho)) {
    return R_NilValue;
  } else {
    R_varloc_t loc = R_findVarLocInFrame(rho, symbol);
    SEXP cell = loc.cell;

    if (cell == NULL || cell == R_UnboundValue) {
      return R_UnboundValue;
    } else if (TYPEOF(cell) == SYMSXP) {
      return SYMVALUE(cell);
    } else {
      // FIXME: shouldn't this be BINDING_VALUE? (cf. envir.c:956)
      return cell;
    }
  }
}

static INLINE SEXP bcell_get_cache(SEXP symbol, SEXP rho, BCell *cache) {
  if (TAG(*cache) == symbol && !BCELL_IS_UNBOUND(*cache)) {
    return *cache;
  } else {
    SEXP ncell = bcell_get(symbol, rho);
    if (ncell != R_UnboundValue) {
      *cache = ncell;
    } else if (*cache != R_NilValue && BCELL_IS_UNBOUND(*cache)) {
      *cache = R_NilValue;
    }
    return ncell;
  }
}

static INLINE SEXP bcell_value(SEXP cell) {
  if (cell == R_UnboundValue) {
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

static INLINE Rboolean bcell_set_value(BCell cell, SEXP value) {
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

#define Rsh_const(env, idx) ((SEXP *)STDVEC_DATAPTR((env)))[(idx)]
#define Rsh_const_sxp(env, idx) SXP_TO_VAL(Rsh_const(env, idx))
#define Rsh_const_dbl(env, idx) DBL_TO_VAL(REAL(Rsh_const(env, idx))[0])
#define Rsh_const_int(env, idx) INT_TO_VAL(INTEGER(Rsh_const(env, idx))[0])
#define Rsh_const_lgl(env, idx) LGL_TO_VAL(INTEGER(Rsh_const(env, idx))[0])

// CLOSURE REPRESENTATION
// ----------------------
//
// Closure (CLOSXP) whose budy is a BCODESXP are compiled into C functions.
// At runtime, these closures are represented as regular R closures with
// BCODESXP body containing code that calls a trampoline functions which in turn
// calls the compiled C function.
//
// Each closure has the same body:
//
// .External2(Rsh_call_trampoline, <fun>, <c_cp>)
//
// <fun> the EXTERNALPTR of the compiled C function
// <c_cp> the C constant pool (c_cp) used by the compiled C function
//
// The trampoline extracts these two elements from the extra pool entry and
// calls the function using the environment passed to the .External2 call.
//
// The C functions have the following signature (Rsh_closure):
//
// SEXP compiled_function(SEXP rho, SEXP c_cp)
//
// where rho is the environment created for the call of the function (passed
// from .External2), and c_cp the C constant pool.

typedef SEXP (*Rsh_closure)(SEXP, SEXP);

// RUNTIME CONSTANTS
// -----------------

JIT_DECL Value Rsh_NilValue;
JIT_DECL Value Rsh_UnboundValue;
JIT_DECL SEXP NOT_OP;
JIT_DECL SEXP BC2C_CALL_TRAMPOLINE_SXP;

#ifdef RSH_TESTS
#include "runtime_impl.h"
#else
JIT_DECL SEXP Rsh_initialize_runtime(void);
JIT_DECL SEXP Rsh_call_trampoline(SEXP call, SEXP op, SEXP args, SEXP rho);
JIT_DECL SEXP Rsh_pc_get(void);
JIT_DECL SEXP Rsh_pc_reset(void);
JIT_DECL SEXP create_wrapper_body(SEXP body, SEXP fun_ptr, SEXP c_cp);
#endif

#define BCELL_INLINE(cell, v)                                                  \
  do {                                                                         \
    if (BCELL_WRITABLE(cell)) {                                                \
      switch (VAL_TAG(v)) {                                                    \
      case REALSXP:                                                            \
        BCELL_DVAL_NEW(cell, VAL_DBL(v));                                      \
        break;                                                                 \
      case INTSXP:                                                             \
        BCELL_IVAL_NEW(cell, VAL_INT(v));                                      \
        break;                                                                 \
      case LGLSXP:                                                             \
        BCELL_LVAL_NEW(cell, VAL_INT(v));                                      \
        break;                                                                 \
      }                                                                        \
    }                                                                          \
  } while (0)

// UTILITIES
// ---------

#define INIT_CALL_FRAME(head, tail)                                            \
  *(head) = Rsh_NilValue;                                                      \
  *(tail) = Rsh_NilValue;

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

static INLINE R_xlen_t Rsh_compute_index(SEXP dim, Value *ix[], int rank) {
  if (rank != LENGTH(dim)) {
    return -1;
  }

  int *idim = INTEGER(dim);
  R_xlen_t mul = 1;
  R_xlen_t k = 0;

  for (int i = 0; i < rank; i++) {
    R_xlen_t j = as_index(*ix[i]) - 1;

    if (j < 0 || j >= idim[i]) {
      return -1;
    }

    k += mul * j;
    mul *= idim[i];
  }

  return k;
}

static INLINE SEXP Rsh_append_values_to_args(Value *vals[], int n, SEXP args) {
  Value **v = vals + n - 1;

  // we are building the list from tge end\
  // so we have to protect it.
  SEXP p = PROTECT(CONS_NR(args, R_NilValue));

  for (int i = 0; i < n; i++, v--) {
    args = CONS_NR(val_as_sexp(**v), args);
    SETCAR(p, args);
  }

  UNPROTECT(1);

  return args;
}

// INSTRUCTIONS
// ------------

#define Rsh_Pop(x)

static INLINE Value Rsh_do_get_var(SEXP symbol, SEXP rho, Rboolean dd,
                                   Rboolean keepmiss, BCell *cache) {
  SEXP value;
  Rboolean has_cell = FALSE;

  if (dd) {
    value = ddfindVar(symbol, rho);
  } else {
    SEXP cell = bcell_get_cache(symbol, rho, cache);
    value = bcell_value(cell);
    if (value == R_UnboundValue) {
      value = Rf_findVar(symbol, rho);
    } else {
      has_cell = TRUE;
    }
  }

  if (!keepmiss && TYPEOF(value) == PROMSXP) {
    forcePromise(value);
  }

  if (value == R_UnboundValue) {
    UNBOUND_VARIABLE_ERROR(symbol, rho);
  } else if (value == R_MissingArg) {
    MAYBE_MISSING_ARGUMENT_ERROR(symbol, keepmiss, rho);
  } else if (TYPEOF(value) == PROMSXP) {
    if (PROMISE_IS_EVALUATED(value))
      value = PRVALUE(value);
    else {
      /**** R_isMissing is inefficient */
      if (keepmiss && R_isMissing(symbol, rho))
        value = R_MissingArg;
      else {
        forcePromise(value);
        value = PRVALUE(value);
      }
    }
  } else {
    ENSURE_NAMEDMAX(value);
  }

  Value v = sexp_as_val(value);
  if (has_cell) {
    BCELL_INLINE(*cache, v);
  }

  return v;
}

#define Rsh_GetVar(res, symbol, cell, rho)                                     \
  Rsh_get_var(res, symbol, cell, rho, FALSE, FALSE)
#define Rsh_GetVarMissOk(res, symbol, cell, rho)                               \
  Rsh_get_var(res, symbol, cell, rho, FALSE, TRUE)

static INLINE void Rsh_get_var(Value *res, SEXP symbol, BCell *cell, SEXP rho,
                               Rboolean dd, Rboolean keepmiss) {
  switch (BCELL_TAG(*cell)) {
  case REALSXP:
    *res = DBL_TO_VAL(BCELL_DVAL(*cell));
    return;
  case INTSXP:
    *res = INT_TO_VAL(BCELL_IVAL(*cell));
    return;
  case LGLSXP:
    *res = LGL_TO_VAL(BCELL_IVAL(*cell));
    return;
  }

  SEXP value = CAR(*cell);
  int type = TYPEOF(value);
  /* extract value of forced promises */
  // FIXME: sync with bc
  if (type == PROMSXP) {
    SEXP pv = PRVALUE(value);
    if (pv != R_UnboundValue) {
      value = pv;
      type = TYPEOF(value);
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
    *res = SXP_TO_VAL(value);
    return;
  case SYMSXP:
  case PROMSXP:
    break;
  default:
    if (*cell != R_NilValue && !IS_ACTIVE_BINDING(*cell)) {
      *res = SXP_TO_VAL(value);
      return;
    }
  }

  *res = Rsh_do_get_var(symbol, rho, dd, keepmiss, cell);
}

static INLINE void Rsh_SetVar(Value *v, SEXP symbol, BCell *cell, SEXP rho) {
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
    bcell_get_cache(symbol, rho, cell);
    BCELL_INLINE(*cell, value);
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
                                  Value *args_tail, const char *name) {
  *call = SXP_TO_VAL(R_Primitive(name));
  INIT_CALL_FRAME(args_head, args_tail);
}

static INLINE void Rsh_GetFun(Value *fun, Value *args_head, Value *args_tail,
                              SEXP symbol, SEXP rho) {
  // TODO: optimize with bcell
  SEXP fun_sxp = Rf_findFun(symbol, rho);
  *fun = SXP_TO_VAL(fun_sxp);
  INIT_CALL_FRAME(args_head, args_tail);
}

#define Rsh_CallBuiltin Rsh_Call

#define Rsh_PushArg(h, t, v) RSH_LIST_APPEND(*(h), *(t), v)
#define Rsh_PushConstArg(h, t, v) RSH_LIST_APPEND(*(h), *(t), v)
#define Rsh_PushNullArg(h, t) Rsh_PushConstArg(h, t, Rsh_NilValue)
#define Rsh_PushTrueArg(h, t) Rsh_PushConstArg(h, t, VAL_TRUE)
#define Rsh_PushFalseArg(h, t) Rsh_PushConstArg(h, t, VAL_FALSE)

#define Rsh_LdTrue(d) Rsh_LdConst(d, VAL_TRUE)
#define Rsh_LdFalse(d) Rsh_LdConst(d, VAL_FALSE)
#define Rsh_LdNull(d) Rsh_LdConst(d, Rsh_NilValue)
#define Rsh_LdConst(d, v)                                                      \
  R_Visible = TRUE;                                                            \
  *(d) = (v)

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
  case CLOSXP:
    args_sxp = Rsh_closure_call_args(args_sxp);
    value = Rf_applyClosure(call, fun_sxp, args_sxp, rho, R_NilValue, TRUE);
    break;
  default:
    Rf_error("bad function");
  }

  *fun = sexp_as_val(value);
}

static INLINE Rboolean Rsh_BrIfNot(Value value, SEXP call, SEXP rho) {
  if (VAL_IS_LGL_NOT_NA(value)) {
    return (Rboolean)!VAL_INT(value);
  } else if (VAL_IS_INT_NOT_NA(value)) {
    return (Rboolean)(VAL_INT(value) == 0);
  } else if (VAL_IS_DBL_NOT_NAN(value)) {
    return (Rboolean)(VAL_DBL(value) == 0.0);
  }

  SEXP value_sxp = VAL_SXP(value);

  if (IS_SCALAR(value_sxp, LGLSXP)) {
    Rboolean lval = (Rboolean)LOGICAL0(value_sxp)[0];
    if (lval != NA_LOGICAL) {
      return (Rboolean)!lval;
    }
  }

  PROTECT(value_sxp);
  Rboolean ans = asLogicalNoNA(value_sxp, call, rho);
  UNPROTECT(1);
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
      *(r) = (a) == 2.0 ? (a) * (a) : R_pow((a), (b));                         \
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
    *(r) = LGL_TO_VAL(__res__);                                                \
  } while (0)

// calls R internal function which takes two arguments
// it is like a second level builtin - called itself from do_* functions
#define DO_BINARY_BUILTIN(fun, call, op, opSym, lsh, rhs, rho, res)            \
  do {                                                                         \
    SEXP __res_sxp__ = fun((call), (op), (opSym), val_as_sexp((lhs)),          \
                           val_as_sexp((rhs)), (rho));                         \
    *(res) = sexp_as_val(__res_sxp__);                                         \
  } while (0)

static INLINE Value Rsh_arith(Value lhs, Value rhs, SEXP call, RshArithOp op,
                              SEXP rho) {
  double res_dbl = 0;

  if (VAL_IS_DBL(lhs)) {
    double lhs_dbl = VAL_DBL(lhs);
    if (VAL_IS_DBL(rhs)) {
      DO_ARITH(op, lhs_dbl, VAL_DBL(rhs), &res_dbl);
      return DBL_TO_VAL(res_dbl);
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      DO_ARITH(op, lhs_dbl, VAL_INT(rhs), &res_dbl);
      return DBL_TO_VAL(res_dbl);
    }
  }

  if (VAL_IS_INT_NOT_NA(lhs)) {
    int lhs_int = VAL_INT(lhs);

    if (VAL_IS_DBL(rhs)) {
      DO_ARITH(op, lhs_int, VAL_DBL(rhs), &res_dbl);
      return DBL_TO_VAL(res_dbl);
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      if (op == DIV_OP || op == EXPT_OP) {
        DO_ARITH(op, (double)lhs_int, (double)VAL_INT(rhs), &res_dbl);
        return DBL_TO_VAL(res_dbl);
      } else {
        int res_int = 0;
        DO_ARITH(op, lhs_int, VAL_INT(rhs), &res_int);
        return INT_TO_VAL(res_int);
      }
    }
  }

  // Slow path!
  Value res;
  RSH_PC_INC(slow_arith);
  DO_BINARY_BUILTIN(arith2, call, R_ARITH_OPS[op], R_ARITH_OP_SYMS[op], lsh,
                    rhs, rho, &res);
  return res;
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *lhs_res, Value rhs, SEXP call, SEXP rho) { \
    *lhs_res = Rsh_arith(*lhs_res, rhs, call, b, rho);                         \
  }
X_ARITH_OPS
#undef X

static INLINE Value Rsh_relop(Value lhs, Value rhs, SEXP call, RshRelOp op,
                              SEXP rho) {
  Value res;

  if (VAL_IS_DBL_NOT_NAN(lhs)) {
    double lhs_dbl = VAL_DBL(lhs);
    if (VAL_IS_DBL_NOT_NAN(rhs)) {
      DO_RELOP(op, lhs_dbl, VAL_DBL(rhs), &res);
      return res;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      DO_RELOP(op, lhs_dbl, VAL_INT(rhs), &res);
      return res;
    }
  }

  if (VAL_IS_INT_NOT_NA(lhs)) {
    int lhs_int = VAL_INT(lhs);

    if (VAL_IS_DBL_NOT_NAN(rhs)) {
      DO_RELOP(op, lhs_int, VAL_DBL(rhs), &res);
      return res;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      DO_RELOP(op, lhs_int, VAL_INT(rhs), &res);
      return res;
    }
  }

  // Slow path!
  RSH_PC_INC(slow_relop);
  DO_BINARY_BUILTIN(relop, call, R_REL_OPS[op], R_REL_OP_SYMS[op], lhs, rhs,
                    rho, &res);

  return res;
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *lhs_res, Value rhs, SEXP call, SEXP rho) { \
    *lhs_res = Rsh_relop(*lhs_res, rhs, call, b, rho);                         \
  }
X_REL_OPS
#undef X

// calls R builtin function do_* with 1 argument
#define DO_BUILTIN1(/* PRIMFUN */ fun, /* SEXP */ call, /* SEXP */ op,         \
                    /* Value */ arg, /* SEXP */ rho, /* Value* */ res)         \
  do {                                                                         \
    SEXP __res_sxp__ =                                                         \
        fun((call), (op), CONS_NR(val_as_sexp((arg)), R_NilValue), (rho));     \
    *(res) = sexp_as_val(__res_sxp__);                                         \
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
    *(res) = sexp_as_val(__res_sxp__);                                         \
    R_Visible = TRUE;                                                          \
  } while (0)

static INLINE Value Rsh_math1(Value arg, SEXP call, RshMath1Op op, SEXP rho) {
  Value res;

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

    res = DBL_TO_VAL(d);
    R_Visible = TRUE;
  } else if (VAL_IS_INT_NOT_NA(arg)) {
    double d = (double)VAL_INT(arg);
    d = op == SQRT_OP ? sqrt(d) : exp(d);

    if (ISNAN(d)) {
      Rf_warningcall(call, R_MSG_NA);
    }

    res = DBL_TO_VAL(d);
    R_Visible = TRUE;
  } else {
    // Slow path!
    RSH_PC_INC(slow_math1);
    DO_BUILTIN1(do_math1, call, R_MATH1_OPS[op], arg, rho, &res);
  }

  return res;
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *v, SEXP call, SEXP rho) {                  \
    *v = Rsh_math1(*v, call, b, rho);                                          \
  }
X_MATH1_OPS
#undef X

static INLINE Value Rsh_unary(Value arg, SEXP call, RshUnaryOp op, SEXP rho) {
  Value res = arg;

  if (VAL_IS_DBL(arg)) {
    if (op == UMINUS_OP) {
      double d = VAL_DBL(arg);
      double e = -d;
      res = DBL_TO_VAL(e);
    }
  } else if (VAL_IS_INT_NOT_NA(arg)) {
    if (op == UMINUS_OP) {
      int i = VAL_INT(arg);
      int j = -i;
      res = INT_TO_VAL(VAL_INT(j));
    }
  } else {
    // Slow path!
    RSH_PC_INC(slow_unary);
    res = sexp_as_val(arith1(call, R_UNARY_OPS[op], R_UNARY_OP_SYMS[op],
                             val_as_sexp(arg), rho));
  }

  R_Visible = TRUE;
  return res;
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *v, SEXP call, SEXP rho) {                  \
    *v = Rsh_unary(*v, call, b, rho);                                          \
  }
X_UNARY_OPS
#undef X

static INLINE void Rsh_Not(Value *arg_res, SEXP call, SEXP rho) {
  Value *res = arg_res;
  Value arg = *arg_res;

  if (VAL_IS_LGL_NOT_NA(arg) || VAL_IS_INT_NOT_NA(arg)) {
    *res = LGL_TO_VAL(!VAL_INT(arg));
  } else {
    // Slow path!
    DO_BUILTIN1(do_logic, call, NOT_OP, arg, rho, res);
  }
}

static INLINE Value Rsh_logic(Value lhs, Value rhs, SEXP call, RshLogic2Op op,
                              SEXP rho) {
  Value res;

  // TODO: not optimized
  // Slow path!
  DO_BUILTIN2(do_logic, call, R_LOGIC2_OPS[op], lhs, rhs, rho, &res);

  return res;
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *lhs_res, Value rhs, SEXP call, SEXP rho) { \
    *lhs_res = Rsh_logic(*lhs_res, rhs, call, b, rho);                         \
  }
X_LOGIC2_OPS
#undef X

static INLINE void Rsh_MakeClosure(Value *res, SEXP mkclos_arg,
                                   Rsh_closure fun_ptr, SEXP consts, SEXP rho) {

  SEXP forms = VECTOR_ELT(mkclos_arg, 0);
  SEXP original_body = VECTOR_ELT(mkclos_arg, 1);
  SEXP closure = PROTECT(Rf_mkCLOSXP(forms, original_body, rho));

  // this is because ISO C forbids conversion of function pointer to object
  // pointer type with -Wpedantic
  _Pragma("GCC diagnostic push");
  _Pragma("GCC diagnostic ignored \"-Wpedantic\"");
  SEXP fun_ptr_sxp =
      PROTECT(R_MakeExternalPtr((void *)fun_ptr, R_NilValue, R_NilValue));
  _Pragma("GCC diagnostic pop");

  SEXP body = PROTECT(create_wrapper_body(original_body, fun_ptr_sxp, consts));
  SET_BODY(closure, body);

  if (LENGTH(mkclos_arg) > 2) {
    SEXP srcref = VECTOR_ELT(mkclos_arg, 2);
    if (TYPEOF(srcref) != NILSXP)
      // FIXME: expose R_SrcrefSymbol
      Rf_setAttrib(closure, Rf_install("srcref"), srcref);
  }
  R_Visible = TRUE;

  UNPROTECT(3);
  *res = SXP_TO_VAL(closure);
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

static INLINE void Rsh_MakeProm(Value *fun, Value *args_head, Value *args_tail,
                                SEXP code, SEXP rho) {
  Value value;

  switch (TYPEOF(VAL_SXP(*fun))) {
  case CLOSXP:
    value = SXP_TO_VAL(Rf_mkPROMISE(code, rho));
    break;
  case BUILTINSXP:
    if (TYPEOF(code) == BCODESXP) {
      value = sexp_as_val(bcEval(code, rho));
    } else {
      /* uncommon but possible, the compiler may decide not
         to compile an argument expression */
      value = sexp_as_val(Rf_eval(code, rho));
    }
    break;
  case SPECIALSXP:
    value = Rsh_UnboundValue;
    break;
  default:
    Rf_error("bad function");
  }

  if (value != Rsh_UnboundValue) {
    RSH_LIST_APPEND(*args_head, *args_tail, value);
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
    SETCAR(CDDR(ncall), Rf_ScalarString(symbol));
    dispatched = tryDispatch("$", ncall, x_sxp, rho, &value_sxp);
    UNPROTECT(1);
  }

  if (!dispatched) {
    value_sxp = R_subset3_dflt(x_sxp, PRINTNAME(symbol), call);
  }

  R_Visible = TRUE;
  *res = sexp_as_val(value_sxp);
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
    *value = sexp_as_val(value_sxp);
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
    *value = sexp_as_val(value_sxp);
    return TRUE;
  } else {
    SEXP tag = TAG(CDR(call));
    *call_val = SXP_TO_VAL(call);
    // FIXME: these is a discrepancy between this code and what GNU-R does:
    //  In GNUR at this point we push additional R_NilValue onto the stack
    //  I just don't see why, or regardless why, who does pops it out?
    INIT_CALL_FRAME(args_head, args_tail);
    RSH_LIST_APPEND_EX(*args_head, *args_tail, *value, FALSE);
    RSH_SET_TAG(*args_tail, SXP_TO_VAL(tag));
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

  *x = sexp_as_val(value);
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
  *sx = sexp_as_val(value);
}

static INLINE void Rsh_StartAssign(Value *rhs, Value *lhs_cell, Value *lhs_val,
                                   Value *rhs_dup, SEXP symbol, BCell *cache,
                                   SEXP rho) {
  if (VAL_IS_SXP(*rhs)) {
    SEXP saverhs = VAL_SXP(*rhs);
    FIXUP_RHS_NAMED(saverhs);

    if (MAYBE_REFERENCED(saverhs)) {
      VAL_SET_MAYBE_REFERENCED(*rhs);
      INCREMENT_REFCNT(saverhs);
    } else {
      VAL_CLEAR_MAYBE_REFERENCED(*rhs);
    }
  }

  SEXP cell = bcell_get_cache(symbol, rho, cache);
  SEXP value = bcell_value(cell);
  R_varloc_t loc;
  if (value == R_UnboundValue || TYPEOF(value) == PROMSXP) {
    value = EnsureLocal(symbol, rho, &loc);
    if (loc.cell == NULL) {
      loc.cell = R_NilValue;
    }
  } else {
    loc.cell = cell;
  }
  int maybe_in_assign = ASSIGNMENT_PENDING(loc.cell);
  SET_ASSIGNMENT_PENDING(loc.cell, TRUE);
  *lhs_cell = SXP_TO_VAL(loc.cell);

  if (maybe_in_assign || MAYBE_SHARED(value)) {
    value = Rf_shallow_duplicate(value);
  }
  *lhs_val = SXP_TO_VAL(value);
  *rhs_dup = *rhs;
}

// TODO: do we need the cache here?
static INLINE void Rsh_StartAssign2(Value *rhs, Value *lhs_cell, Value *lhs_val,
                                    Value *rhs_dup, SEXP symbol, BCell *cache,
                                    SEXP rho) {
  SEXP cell = bcell_get_cache(symbol, rho, cache);
  R_varloc_t loc;
  if (cell == R_UnboundValue) {
    loc.cell = R_NilValue;
  }

  int maybe_in_assign = ASSIGNMENT_PENDING(loc.cell);
  SET_ASSIGNMENT_PENDING(loc.cell, TRUE);
  *lhs_cell = SXP_TO_VAL(loc.cell);

  Value value = Rsh_do_get_var(symbol, ENCLOS(rho), FALSE, FALSE, cache);
  SEXP value_sxp = val_as_sexp(value);
  if (maybe_in_assign || MAYBE_SHARED(value_sxp)) {
    value_sxp = Rf_shallow_duplicate(value_sxp);
  }
  *lhs_val = SXP_TO_VAL(value_sxp);

  *rhs_dup = *rhs;
  /* top four stack entries are now
     RHS value, LHS cell, LHS value, RHS value */
  if (VAL_IS_SXP(*rhs_dup)) {
    FIXUP_RHS_NAMED(VAL_SXP(*rhs_dup));
    INCREMENT_REFCNT(VAL_SXP(*rhs_dup));
  }
}

static INLINE void Rsh_EndAssign(Value *rhs, Value lhs_cell, Value value,
                                 SEXP symbol, BCell *cache, SEXP rho) {
  SEXP lhs_cell_sxp = VAL_SXP(lhs_cell);
  SET_ASSIGNMENT_PENDING(lhs_cell_sxp, FALSE);

  SEXP cell = bcell_get_cache(symbol, rho, cache);
  SEXP value_sxp = val_as_sexp(value);

  // FIXME: try_unwrap ALTREP

  INCREMENT_NAMED(value_sxp);
  if (!bcell_set_value(cell, value_sxp)) {
    Rf_defineVar(symbol, value_sxp, rho);
  }

  if (VAL_IS_SXP(*rhs)) {
    SEXP saverhs = VAL_SXP(*rhs);
    INCREMENT_NAMED(saverhs);
    if (VAL_MAYBE_REFERENCED(*rhs)) {
      DECREMENT_REFCNT(saverhs);
    }
  }
}

static INLINE void Rsh_EndAssign2(Value *rhs, Value lhs_cell, Value value,
                                  SEXP symbol, BCell *cache, SEXP rho) {
  SEXP lhs_cell_sxp = VAL_SXP(lhs_cell);
  SET_ASSIGNMENT_PENDING(lhs_cell_sxp, FALSE);

  SEXP cell = bcell_get_cache(symbol, rho, cache);
  SEXP value_sxp = val_as_sexp(value);

  INCREMENT_NAMED(value_sxp);
  if (!bcell_set_value(cell, value_sxp)) {
    Rf_defineVar(symbol, value_sxp, rho);
  }

  SEXP rhs_sxp = val_as_sexp(*rhs);
  INCREMENT_NAMED(rhs_sxp);
  DECREMENT_REFCNT(rhs_sxp);
}

#define Rsh_StartSubassignN(lhs, rhs, call, rho)                               \
  Rsh_start_subassign_dispatch_n("[<-", lhs, rhs, call, rho)
#define Rsh_StartSubassign2N(lhs, rhs, call, rho)                              \
  Rsh_start_subassign_dispatch_n("[[<-", lhs, rhs, call, rho)

static INLINE Rboolean Rsh_start_subassign_dispatch_n(const char *generic,
                                                      Value *lhs_res,
                                                      Value *rhs, SEXP call,
                                                      SEXP rho) {
  Value lhs = *lhs_res;
  SEXP lhs_sxp = val_as_sexp(lhs);

  if (isObject(lhs_sxp)) {
    MARK_ASSIGNMENT_CALL(call);
    SEXP rhs_sxp = val_as_sexp(*rhs);
    if (MAYBE_SHARED(lhs_sxp)) {
      lhs_sxp = Rf_shallow_duplicate(lhs_sxp);
      *lhs_res = SXP_TO_VAL(lhs_sxp);
      ENSURE_NAMED(lhs_sxp);
    }

    SEXP value = NULL;
    if (tryAssignDispatch(generic, call, lhs_sxp, rhs_sxp, rho, &value)) {
      RSH_PC_INC(dispatched_subassign);
      RSH_CHECK_SIGINT();
      *lhs_res = sexp_as_val(value);
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
    *sx = SXP_TO_VAL(vec);
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

  DO_FAST_SETVECELT(vec, as_index(i) - 1, rhs, sub2);

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

  *sx = SXP_TO_VAL(vec);
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
    *sx = SXP_TO_VAL(mat);
  }

  SEXP dim = Rsh_get_mat_dim_attr(mat);

  if (dim != R_NilValue) {
    R_xlen_t i = as_index(si);
    R_xlen_t j = as_index(sj);
    R_xlen_t nrow = INTEGER(dim)[0];
    R_xlen_t ncol = INTEGER(dim)[1];
    if (i > 0 && j > 0 && i <= nrow && j <= ncol) {
      R_xlen_t k = i - 1 + nrow * (j - 1);
      DO_FAST_SETVECELT(mat, k, rhs, subassign2);
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

  *sx = SXP_TO_VAL(mat);
}

static INLINE void Rsh_GetIntlBuiltin(Value *call, Value *args_head,
                                      Value *args_tail, SEXP symbol) {
  SEXP value = INTERNAL(symbol);

  if (TYPEOF(value) != BUILTINSXP) {
    Rf_error("there is no .Internal function '%s'", CHAR(PRINTNAME(symbol)));
  }

  *call = SXP_TO_VAL(value);
  INIT_CALL_FRAME(args_head, args_tail);
}

static INLINE void Rsh_SetTag(Value *fun, UNUSED Value *args_head,
                              Value *args_tail, Value tag) {
  if (TYPEOF(VAL_SXP(*fun)) != SPECIALSXP) {
    RSH_SET_TAG(*args_tail, tag);
  }
}

static INLINE void Rsh_Invisible() { R_Visible = FALSE; }

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
    *lhs = SXP_TO_VAL(lhs_sxp);
    ENSURE_NAMED(lhs_sxp);
  }

  switch (TYPEOF(fun_sxp)) {
  case BUILTINSXP:
    // append RHS top arguments with value tag
    RSH_LIST_APPEND_EX(args_head, args_tail, rhs, FALSE);
    RSH_SET_TAG(args_tail, SXP_TO_VAL(Rsh_ValueSym));
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
    RSH_LIST_APPEND_EX(args_head, args_tail, SXP_TO_VAL(prom), FALSE);
    RSH_SET_TAG(args_tail, SXP_TO_VAL(Rsh_ValueSym));
    // replace first argument with LHS value as *tmp*
    prom = R_mkEVPROMISE(Rsh_TmpvalSym, lhs_sxp);
    SETCAR(args, prom);
    // call the closure
    value = Rf_applyClosure(call, fun_sxp, args, rho, R_NilValue, TRUE);
    break;
  }
  default:
    Rf_error("bad function");
  }

  *lhs = sexp_as_val(value);
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
    *lhs = SXP_TO_VAL(lhs_sxp);
    ENSURE_NAMED(lhs_sxp);
  }

  SEXP value;
  if (isObject(lhs_sxp) && tryAssignDispatch(generic, call, lhs_sxp,
                                             val_as_sexp(*rhs), rho, &value)) {
    RSH_PC_INC(dispatched_subassign);
    RSH_CHECK_SIGINT();
    *lhs = sexp_as_val(value);
    return TRUE;
  } else {
    SEXP tag = TAG(CDR(call));
    *call_val = SXP_TO_VAL(call);
    INIT_CALL_FRAME(args_head, args_tail);
    RSH_LIST_APPEND_EX(*args_head, *args_tail, SXP_TO_VAL(lhs_sxp), FALSE);
    RSH_SET_TAG(*args_tail, SXP_TO_VAL(tag));
    return FALSE;
  }
}

static INLINE void Rsh_DoMissing(Value *call, Value *args_head,
                                 Value *args_tail) {
  SEXP call_sxp = VAL_SXP(*call);
  if (TYPEOF(call_sxp) != SPECIALSXP) {
    RSH_LIST_APPEND_EX(*args_head, *args_tail, SXP_TO_VAL(R_MissingArg), FALSE);
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
  SEXP call_sxp = val_as_sexp(call_val);
  SEXP args = val_as_sexp(args_head);
  RSH_CALL_ARGS_DECREMENT_LINKS(args);
  MARK_ASSIGNMENT_CALL(call_sxp);
  RSH_LIST_APPEND_EX(args_head, args_tail, rhs, FALSE);
  SEXP value = fun(call_sxp, symbol, args, rho);
  *lhs = sexp_as_val(value);
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
  *value = sexp_as_val(value_sxp);
  R_Visible = TRUE;
}

#define Rsh_SubsetN(stack, n, call, rho)                                       \
  Rsh_do_subset_n((stack), n, call, rho, FALSE)
#define Rsh_Subset2N(stack, n, call, rho)                                      \
  Rsh_do_subset_n((stack), n, call, rho, TRUE)

static INLINE void Rsh_do_subset_n(Value *stack[], int n, SEXP call, SEXP rho,
                                   Rboolean subset2) {
  Value *sx = stack[0];
  Value **ix = stack + 1;
  SEXP vec = val_as_sexp(*sx);
  int rank = n - 1;

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

  *sx = sexp_as_val(value);
}

#define Rsh_SubassignN(stack, n, call, rho)                                    \
  Rsh_do_subassign_n((stack), n, call, rho, FALSE)
#define Rsh_Subassign2N(stack, n, call, rho)                                   \
  Rsh_do_subassign_n((stack), n, call, rho, TRUE)

static INLINE void Rsh_do_subassign_n(Value *stack[], int n, SEXP call,
                                      SEXP rho, Rboolean subassign2) {
  Value *sx = stack[0];
  Value rhs = *stack[1];
  Value **ix = stack + 2;

  SEXP vec = val_as_sexp(*sx);
  int rank = n - 2;

  if (MAYBE_SHARED(vec)) {
    vec = Rf_shallow_duplicate(vec);
    *sx = SXP_TO_VAL(vec);
  }

  SEXP dim = Rsh_get_array_dim_attr(vec);
  if (dim != R_NilValue) {
    R_xlen_t k = Rsh_compute_index(dim, ix, rank);
    if (k >= 0) {
      DO_FAST_SETVECELT(vec, k, rhs, subassign2);
    }
  }

  // slow path!
  RSH_PC_INC(slow_subassign);

  SEXP rhs_sxp = val_as_sexp(rhs);
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

  *sx = sexp_as_val(vec);
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

  *fun = sexp_as_val(value);
}

static INLINE void Rsh_SpecialSwap(Value *s3, Value *s2, Value *s1) {
  if (VAL_MAYBE_REFERENCED(*s1) &&
      (VAL_MAYBE_SHARED(*s1) || VAL_MAYBE_SHARED(*s3))) {
    *s1 = SXP_TO_VAL(Rf_shallow_duplicate(VAL_SXP(*s1)));
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

static INLINE void Rsh_StartFor(Value *s2, Value *s1, Value *s0, SEXP call,
                                SEXP symbol, BCell *cell, SEXP rho) {
  SEXP seq;
  Rboolean isq = FALSE;

  if (VAL_IS_ISQ(*s2)) {
    isq = TRUE;
    seq = VAL_SXP(*s2);
  } else {
    seq = val_as_sexp(*s2);
  }
  *s2 = SXP_TO_VAL(seq);

  if (Rf_inherits(seq, "factor")) {
    seq = Rf_asCharacterFactor(seq);
    *s2 = SXP_TO_VAL(seq);
  }

  // FIXME: BCPROT?

  RshLoopInfo *info = (RshLoopInfo *)malloc(sizeof(RshLoopInfo));
  *s1 = (Value)info;

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
    // FIXME: who will protect this?
    value = Rf_allocVector(TYPEOF(seq), 1);
    INCREMENT_NAMED(value);
    break;
  default:
    value = R_NilValue;
  }
  *s0 = SXP_TO_VAL(value);

  Rsh_SetVar(s0, symbol, cell, rho);

  // stack at the end:
  //         s2 - sequence
  //         s1 - casted pointer for the RshLoopInfo
  // top --> s0 - the initial value
}

#define SET_FOR_LOOP_VAR(value, cell, symbol, rho)                             \
  do {                                                                         \
    if (BCELL_IS_UNBOUND(cell) || !bcell_set_value(cell, value)) {             \
      Rf_defineVar(symbol, value, rho);                                        \
    }                                                                          \
  } while (0)

static INLINE Rboolean Rsh_StepFor(Value *s2, Value *s1, Value *s0, BCell *cell,
                                   SEXP rho) {
  SEXP seq = val_as_sexp(*s2);
  RshLoopInfo *info = (RshLoopInfo *)*s1;
  R_xlen_t i = ++(info->idx);

  if (i >= info->len) {
    return FALSE;
  }

  RSH_CHECK_SIGINT();

  SEXP value;

  // it is important to use info->type and not TYPEOF(seq)
  // as it could be the ISQSXP
  switch (info->type) {
  case INTSXP:
  case ISQSXP: {
    int v;
    if (info->type == INTSXP) {
      v = INTEGER_ELT(seq, i);
    } else {
      int *info = INTEGER(seq);
      int n1 = info[0];
      int n2 = info[1];
      int ii = (int)i;
      v = n1 <= n2 ? n1 + ii : n1 - ii;
      RSH_PC_INC(isq_for);
    }

    if (BCELL_TAG_WR(*cell) == INTSXP) {
      BCELL_IVAL_SET(*cell, v);
      return TRUE;
    } else if (BCELL_WRITABLE(*cell)) {
      BCELL_IVAL_NEW(*cell, v);
      return TRUE;
    } else {
      value = VAL_SXP(*s0);
      SET_SCALAR_IVAL(value, v);
    }
    break;
  }
  case REALSXP: {
    double v = REAL_ELT(seq, i);

    if (BCELL_TAG_WR(*cell) == REALSXP) {
      BCELL_DVAL_SET(*cell, v);
      return TRUE;
    } else if (BCELL_WRITABLE(*cell)) {
      BCELL_DVAL_NEW(*cell, v);
      return TRUE;
    } else {
      value = VAL_SXP(*s0);
      SET_SCALAR_DVAL(value, v);
    }
    break;
  }
  case LGLSXP: {
    int v = LOGICAL_ELT(seq, i);

    if (BCELL_TAG_WR(*cell) == LGLSXP) {
      BCELL_LVAL_SET(*cell, v);
      return TRUE;
    } else if (BCELL_WRITABLE(*cell)) {
      BCELL_LVAL_NEW(*cell, v);
      return TRUE;
    } else {
      value = VAL_SXP(*s0);
      SET_SCALAR_LVAL(value, v);
    }
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
    *s2 = SXP_TO_VAL(CDR(seq));
  default:
    Rf_error("invalid sequence argument in for loop");
  }

  SET_FOR_LOOP_VAR(value, *cell, info->symbol, rho);
  return TRUE;
}

static INLINE void Rsh_EndFor(Value *s2, Value s1, Value s0, SEXP rho) {
  RshLoopInfo *info = (RshLoopInfo *)s1;
  free(info);
  *s2 = Rsh_NilValue;
}

#define ISQ_NEW(/* int */ x, /* int */ y, /* Value */ res)                     \
  do {                                                                         \
    SEXP __v__ = Rf_allocVector(INTSXP, 2);                                    \
    INTEGER(__v__)[0] = (int)(x);                                              \
    INTEGER(__v__)[1] = (int)(y);                                              \
    (res) = ISQ_TO_VAL(__v__);                                                 \
    RSH_PC_INC(isq);                                                           \
  } while (0)

static INLINE void Rsh_Colon(Value *s1, Value s0, SEXP call, SEXP rho) {
  if (VAL_IS_DBL(*s1) && VAL_IS_DBL(s0)) {
    double rn1 = VAL_DBL(*s1);
    double rn2 = VAL_DBL(s0);
    if (R_FINITE(rn1) && R_FINITE(rn2) && INT_MIN <= rn1 && INT_MAX >= rn1 &&
        INT_MIN <= rn2 && INT_MAX >= rn2 && rn1 == (int)rn1 &&
        rn2 == (int)rn2) {
      ISQ_NEW(rn1, rn2, *s1);
      R_Visible = TRUE;
    }
  } else {
    DO_BUILTIN2(do_colon, call, Rsh_ColonSym, *s1, s0, rho, s1);
  }
}

static INLINE void Rsh_SeqAlong(Value *v, SEXP call, SEXP rho) {
  SEXP s = val_as_sexp(*v);
  if (!isObject(s)) {
    R_xlen_t len = Rf_xlength(s);
    if (len > 0 && len <= INT_MAX) {
      ISQ_NEW(1, len, *v);
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
    ISQ_NEW(1, len, *v);
    R_Visible = TRUE;
    return;
  }

  DO_BUILTIN1(do_seq_len, call, Rsh_SeqLenSym, *v, rho, v);
}

#define RSH_IS_TEST(v, p)                                                      \
  do {                                                                         \
    *(v) = p(val_as_sexp(*(v))) ? VAL_TRUE : VAL_FALSE;                        \
  } while (0)

#define RSH_IS_TYPE(v, t)                                                      \
  do {                                                                         \
    *(v) = VAL_TAG(*(v)) == t || TYPEOF(val_as_sexp(*(v))) == t ? VAL_TRUE     \
                                                                : VAL_FALSE;   \
  } while (0)

static INLINE void Rsh_IsNull(Value *v) { RSH_IS_TEST(v, isNull); }

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
    *v = VAL_TRUE;
    break;
  case 0: // some SXP
  {
    SEXP s = VAL_SXP(*v);
    *v = (TYPEOF(s) == INTSXP) && !Rf_inherits(s, "factor") ? VAL_TRUE
                                                            : VAL_FALSE;
    break;
  }
  default:
    *v = VAL_FALSE;
  }
}

#endif // RUNTIME_H
