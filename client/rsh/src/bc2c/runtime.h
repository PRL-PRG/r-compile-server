#ifndef RUNTIME_H
#define RUNTIME_H

// THIS HEADER NEEDS TO BE A C-compatible HEADER
// IT IS USED BY THE SERVER COMPILER

#include "runtime_internals.h"
#include <assert.h>
#include <math.h>
#include <stdint.h>

#define Rsh_error(msg, ...)                                                    \
  {                                                                            \
    error(msg, __VA_ARGS__);                                                   \
    return R_NilValue;                                                         \
  }

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

#define X_MATH1_OPS                                                            \
  X(sqrt, SQRT_OP)                                                             \
  X(exp, EXP_OP)

#define X_ARITH_OPS                                                            \
  X(+, ADD_OP)                                                                 \
  X(-, SUB_OP)                                                                 \
  X(*, MUL_OP)                                                                 \
  X(/, DIV_OP)                                                                 \
  X(^, POW_OP)

#define X_REL_OPS                                                              \
  X(==, EQ_OP)                                                                 \
  X(!=, NE_OP)                                                                 \
  X(<, LT_OP)                                                                  \
  X(<=, LE_OP)                                                                 \
  X(>, GT_OP)                                                                  \
  X(>=, GE_OP)

#define X_UNARY_OPS                                                            \
  X(+, UPLUS_OP)                                                               \
  X(-, UMINUS_OP)

#define X_LOGIC2_OPS                                                           \
  X(&, AND_OP)                                                                 \
  X(|, OR_OP)

#define X(a, b) b,
typedef enum { X_ARITH_OPS } RshArithOp;
typedef enum { X_REL_OPS } RshRelOp;
typedef enum { X_MATH1_OPS } RshMath1Op;
typedef enum { X_UNARY_OPS } RshUnaryOp;
typedef enum { X_LOGIC2_OPS } RshLogic2Op;
#undef X

// while a little cumbersome, it allows us to keep everything just
// in the header file, simplifying the standalone (test) mode.
#ifdef RSH_TESTS
#define X(a, b) NULL,
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
//          63              49 0
//           v               v v
//      QNAN
//      0|1111111111111|00|000000000000000000000000000000000000000000000000
//      MASK
//      1|1111111111111|11|000000000000000000000000000000000000000000000000
//  MASK_INT
//  0|1111111111111|00|000000000000000000000000000000000000000000000000
//  MASK_SXP
//  1|1111111111111|00|000000000000000000000000000000000000000000000000
//  MASK_LGL
//  0|1111111111111|11|000000000000000000000000000000000000000000000000
//      TRUE
//      0|1111111111111|11|000000000000000000000000000000000000000000000001
//     FALSE
//     0|1111111111111|11|000000000000000000000000000000000000000000000000

typedef int32_t i32;
typedef uint64_t u64;
typedef uint32_t u32;
typedef u64 Value;

// the 13 bits of the NaN boxing
#define QNAN ((u64)0x7ffc000000000000)
#define SIGN_BIT ((u64)1 << 63)
#define MASK ((SIGN_BIT | QNAN | ((u64)3 << 48)))
#define MASK_INT QNAN
#define MASK_SXP (SIGN_BIT | QNAN)
#define MASK_LGL (QNAN | ((u64)3 << 48))

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

#define SXP_TO_VAL(v) (Value)(MASK_SXP | ((u64)(v)))
// this is to prevent the NA value to change all the bits to 1
#define INT_TO_VAL(v) (Value)(MASK_INT | ((u64)(u32)(v)))
#define LGL_TO_VAL(v) (Value)(MASK_LGL | ((u64)(u32)(v)))

static INLINE Value DBL_TO_VAL(double d) {
  Value v;
  // type punning
  memcpy(&v, &d, sizeof(double));
  return v;
}

#define VAL_TAG(v)                                                             \
  ((VAL_IS_DBL(v) ? REALSXP                                                    \
                  : (VAL_IS_INT(v) ? INTSXP : (VAL_IS_LGL(v) ? LGLSXP : 0))))

// TODO: can we share this bcell expand?
static INLINE SEXP val_as_sexp(Value v) {
  switch (VAL_TAG(v)) {
  case REALSXP:
    return Rf_ScalarReal(VAL_DBL(v));
  case INTSXP:
    return Rf_ScalarInteger(VAL_INT(v));
  case LGLSXP:
    return Rf_ScalarLogical(VAL_INT(v));
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
// .External2(Rsh_call_trampoline, <closure>)
//
// the <closure> is the closure itself.
// The constant pool of the BCODESXP constants an extra element - extra pool
// entry, which is  a VECSXP with two elements:
//
// [0] the EXTERNALPTR of the compiled C function
// [1] the C constant pool (c_cp) used by the compiled C function
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
JIT_DECL SEXP DOTEXTERNAL2_SYM;
JIT_DECL SEXP BC2C_CALL_TRAMPOLINE_SXP;

#ifdef RSH_TESTS
#include "runtime_impl.h"
#else
JIT_DECL SEXP Rsh_initialize_runtime(void);
JIT_DECL SEXP Rsh_call_trampoline(SEXP call, SEXP op, SEXP args, SEXP rho);
#endif

// INSTRUCTIONS
// ------------

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

static INLINE Value Rsh_get_var(SEXP symbol, SEXP rho, Rboolean dd,
                                Rboolean keepmiss, BCell *cell) {
  switch (BCELL_TAG(*cell)) {
  case REALSXP:
    return DBL_TO_VAL(BCELL_DVAL(*cell));
  case INTSXP:
    return INT_TO_VAL(BCELL_IVAL(*cell));
  case LGLSXP:
    return LGL_TO_VAL(BCELL_IVAL(*cell));
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
    return SXP_TO_VAL(value);
  case SYMSXP:
  case PROMSXP:
    break;
  default:
    if (*cell != R_NilValue && !IS_ACTIVE_BINDING(*cell)) {
      return SXP_TO_VAL(value);
    }
  }

  Value v = Rsh_do_get_var(symbol, rho, dd, keepmiss, cell);
  return v;
}

static INLINE void Rsh_set_var(SEXP symbol, Value value, SEXP rho,
                               BCell *cell) {
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

  SEXP sexp_value = val_as_sexp(value);
  INCREMENT_NAMED(sexp_value);

  if (!bcell_set_value(*cell, sexp_value)) {
    PROTECT(sexp_value);
    Rf_defineVar(symbol, sexp_value, rho);
    UNPROTECT(1);
    bcell_get_cache(symbol, rho, cell);
    BCELL_INLINE(*cell, value);
  }
}

static INLINE void Rsh_set_var2(SEXP symbol, Value value, SEXP rho) {
  INCREMENT_NAMED(value);
  Rf_setVar(symbol, val_as_sexp(value), rho);
}

static INLINE SEXP Rsh_return(Value v) { return val_as_sexp(v); }

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

static INLINE Value Rsh_get_builtin(const char *name) {
  return SXP_TO_VAL(R_Primitive(name));
}

static INLINE Value Rsh_getFun(SEXP symbol, SEXP rho) {
  SEXP fun = Rf_findFun(symbol, rho);
  return SXP_TO_VAL(fun);
}

static INLINE Value Rsh_call(SEXP call, Value fun, Value args, SEXP rho) {
  SEXP value = NULL;
  int flag;

  SEXP fun_sxp = VAL_SXP(fun);
  SEXP args_sxp = VAL_SXP(args);

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

  return sexp_as_val(value);
}

static INLINE Rboolean Rsh_is_true(Value value, SEXP call, SEXP rho) {
  if (VAL_IS_LGL_NOT_NA(value)) {
    return (Rboolean)VAL_INT(value);
  } else if (VAL_IS_INT_NOT_NA(value)) {
    return (Rboolean)(VAL_INT(value) != 0);
  } else if (VAL_IS_DBL_NOT_NAN(value)) {
    return (Rboolean)(VAL_DBL(value) != 0.0);
  }

  SEXP value_sxp = VAL_SXP(value);

  if (IS_SCALAR(value_sxp, LGLSXP)) {
    Rboolean lval = (Rboolean)LOGICAL0(value_sxp)[0];
    if (lval != NA_LOGICAL)
      return lval;
  }

  PROTECT(value_sxp);
  Rboolean ans = asLogicalNoNA(value_sxp, call, rho);
  UNPROTECT(1);
  return ans;
}

#define RSH_LIST_APPEND(/* Value */ head, /* Value */ tail, /* Value */ value) \
  do {                                                                         \
    SEXP __elem__ = CONS(val_as_sexp(value), R_NilValue);                      \
    if (head == Rsh_NilValue) {                                                \
      head = SXP_TO_VAL(__elem__);                                             \
    } else {                                                                   \
      SETCDR(VAL_SXP(tail), __elem__);                                         \
    }                                                                          \
    tail = SXP_TO_VAL(__elem__);                                               \
    INCREMENT_LINKS(CAR(__elem__));                                            \
  } while (0)

#define RSH_SET_TAG(/* SEXP */ v, /* SEXP */ t)                                \
  do {                                                                         \
    SEXP __tag__ = (t);                                                        \
    if (__tag__ != R_NilValue) {                                               \
      if (v != R_NilValue)                                                     \
        SET_TAG(v, CreateTag(__tag__));                                        \
    }                                                                          \
  } while (0)

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
    case POW_OP:                                                               \
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
    res = sexp_as_val(__res_sxp__);                                            \
  } while (0)

static INLINE Value Rsh_arith(SEXP call, RshArithOp op, Value lhs, Value rhs,
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
      if (op == DIV_OP || op == POW_OP) {
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
  DO_BINARY_BUILTIN(arith2, call, R_ARITH_OPS[op], R_ARITH_OP_SYMS[op], lsh,
                    rhs, rho, res);
  return res;
}

static INLINE Value Rsh_relop(SEXP call, RshRelOp op, Value lhs, Value rhs,
                              SEXP rho) {
  Value res;

  if (VAL_IS_DBL_NOT_NAN(lhs)) {
    double lhs_dbl = VAL_DBL(lhs);
    if (VAL_IS_DBL_NOT_NAN(rhs)) {
      DO_RELOP(op, lhs_dbl, rhs, &res);
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
  DO_BINARY_BUILTIN(relop, call, R_REL_OPS[op], R_REL_OP_SYMS[op], lhs, rhs,
                    rho, res);

  return res;
}

// FIXME: refactor the builtin calls

// calls R builtin function do_* with 1 argument
#define DO_BUILTIN1(fun, call, op, arg, rho, res)                              \
  do {                                                                         \
    SEXP __res_sxp__ =                                                         \
        fun((call), (op), CONS_NR(val_as_sexp((arg)), R_NilValue), (rho));     \
    res = sexp_as_val(__res_sxp__);                                            \
    R_Visible = TRUE;                                                          \
  } while (0)

// calls R builtin function do_* with 2 arguments
#define DO_BUILTIN2(fun, call, op, arg1, arg2, rho, res)                       \
  do {                                                                         \
    SEXP __tmp__ = CONS_NR(val_as_sexp((arg1)),                                \
                           CONS_NR(val_as_sexp((arg2)), R_NilValue));          \
    SEXP __res_sxp__ = fun((call), (op), __tmp__, (rho));                      \
    res = sexp_as_val(__res_sxp__);                                            \
    R_Visible = TRUE;                                                          \
  } while (0)

static INLINE Value Rsh_math1(SEXP call, RshMath1Op op, Value arg, SEXP rho) {
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
    DO_BUILTIN1(do_math1, call, R_MATH1_OPS[op], arg, rho, res);
  }

  return res;
}

static INLINE Value Rsh_unary(SEXP call, RshUnaryOp op, Value arg, SEXP rho) {
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
    res = sexp_as_val(arith1(call, R_UNARY_OPS[op], R_UNARY_OP_SYMS[op],
                             val_as_sexp(arg), rho));
  }

  R_Visible = TRUE;
  return res;
}

static INLINE Value Rsh_not(SEXP call, Value arg, SEXP rho) {
  Value res;

  if (VAL_IS_LGL_NOT_NA(arg) || VAL_IS_INT_NOT_NA(arg)) {
    res = LGL_TO_VAL(!VAL_INT(arg));
  } else {
    // Slow path!
    DO_BUILTIN1(do_logic, call, NOT_OP, arg, rho, res);
  }

  return res;
}

static INLINE Value Rsh_logic(SEXP call, RshLogic2Op op, Value lhs, Value rhs,
                              SEXP rho) {
  Value res;

  // TODO: not optimized
  // Slow path!
  DO_BUILTIN2(do_logic, call, R_LOGIC2_OPS[op], lhs, rhs, rho, res);

  return res;
}

#define PUSHCONSTARG_OP 34
#define BASEGUARD_OP 123
#define GETBUILTIN_OP 26
#define CALLBUILTIN_OP 39
#define RETURN_OP 1

#define BCODE_CODE(x) CAR(x)
#define BCODE_CONSTS(x) CDR(x)
#define IS_BYTECODE(x) (TYPEOF(x) == BCODESXP)

static INLINE SEXP create_constant_pool(Rsh_closure fun_ptr, SEXP c_cp) {
  SEXP pool = PROTECT(Rf_allocVector(VECSXP, 2));

  // this is because ISO C forbids conversion of function pointer to object
  // pointer type with -Wpedantic
  _Pragma("GCC diagnostic push");
  _Pragma("GCC diagnostic ignored \"-Wpedantic\"");
  SEXP p = R_MakeExternalPtr((void *)fun_ptr, R_NilValue, R_NilValue);
  _Pragma("GCC diagnostic pop");

  // slot 0: the pointer to the compiled function
  SET_VECTOR_ELT(pool, 0, p);

  // slot 1: the contants used by the compiled function
  SET_VECTOR_ELT(pool, 1, c_cp);

  UNPROTECT(1); // consts

  return pool;
}

static INLINE SEXP create_wrapper_body(SEXP closure, SEXP rho, SEXP c_cp) {

  // clang-format off
  static i32 CALL_FUN_BC[] = {
    12,
    GETBUILTIN_OP,   1,
    PUSHCONSTARG_OP, 2,
    PUSHCONSTARG_OP, 3,
    CALLBUILTIN_OP,  0,
    RETURN_OP
  };
  // clang-format on

  SEXP original_body = BODY(closure);
  assert(IS_BYTECODE(original_body));

  SEXP original_cp = BCODE_CONSTS(original_body);

  i32 bc_size = sizeof(CALL_FUN_BC) / sizeof(i32);

  SEXP bc = PROTECT(Rf_allocVector(INTSXP, bc_size));
  memcpy(INTEGER(bc), CALL_FUN_BC, sizeof(CALL_FUN_BC));
  bc = R_bcEncode(bc);

  SEXP expr_index = PROTECT(Rf_allocVector(INTSXP, bc_size));
  INTEGER(expr_index)[0] = NA_INTEGER;
  memset(INTEGER(expr_index) + 1, 0, (bc_size - 1) * sizeof(i32));

  SEXP cp = PROTECT(Rf_allocVector(VECSXP, 6));
  int i = 0;

  // store the original AST (consequently it will not correspond to the AST)
  SET_VECTOR_ELT(cp, i++, VECTOR_ELT(original_cp, 0));
  SET_VECTOR_ELT(cp, i++, DOTEXTERNAL2_SYM);
  SET_VECTOR_ELT(cp, i++, BC2C_CALL_TRAMPOLINE_SXP);
  SET_VECTOR_ELT(cp, i++, closure);
  SET_VECTOR_ELT(cp, i++, c_cp);
  SET_VECTOR_ELT(cp, i++, expr_index);

  // properly name the expression index (the last element of the constant pool)
  SEXP cp_names = Rf_allocVector(STRSXP, 6);
  Rf_setAttrib(cp, R_NamesSymbol, cp_names);
  for (i = 0; i < 5; i++) {
    SET_STRING_ELT(cp_names, i, R_BlankString);
  }
  SET_STRING_ELT(cp_names, 5, Rf_mkChar("expressionIndex"));

  SEXP body = Rf_cons(bc, cp);
  SET_TYPEOF(body, BCODESXP);

  UNPROTECT(3);
  return body;
}

static INLINE Value Rsh_native_closure(SEXP mkclos_arg, Rsh_closure fun_ptr,
                                       SEXP consts, SEXP rho) {

  SEXP forms = VECTOR_ELT(mkclos_arg, 0);
  SEXP original_body = VECTOR_ELT(mkclos_arg, 1);
  SEXP closure = PROTECT(Rf_mkCLOSXP(forms, original_body, rho));

  SEXP c_cp = PROTECT(create_constant_pool(fun_ptr, consts));
  SEXP body = PROTECT(create_wrapper_body(closure, rho, c_cp));
  SET_BODY(closure, body);

  if (LENGTH(mkclos_arg) > 2) {
    SEXP srcref = VECTOR_ELT(mkclos_arg, 2);
    if (TYPEOF(srcref) != NILSXP)
      // FIXME: expose R_SrcrefSymbol
      Rf_setAttrib(closure, Rf_install("srcref"), srcref);
  }
  R_Visible = TRUE;

  UNPROTECT(3);
  return SXP_TO_VAL(closure);
}

static INLINE void Rsh_check_fun(Value v) {
  int is_fun = FALSE;

  if (VAL_IS_SXP(v)) {
    SEXP fun = VAL_SXP(v);
    is_fun = TYPEOF(fun) == CLOSXP || TYPEOF(fun) == BUILTINSXP ||
             TYPEOF(fun) == SPECIALSXP;
  }

  if (!is_fun) {
    Rf_error("attempt to apply non-function");
  }
}

static INLINE void Rsh_make_prom(Value fun, Value *args_head, Value *args_tail,
                                 SEXP code, SEXP rho) {
  Value value;

  switch (TYPEOF(VAL_SXP(fun))) {
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

#endif // RUNTIME_H
