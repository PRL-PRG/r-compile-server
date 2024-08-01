#ifndef RSH_H
#define RSH_H

#define HAVE_DECL_SIZE_MAX 1
#define R_USE_SIGNALS

#include "Rinternals.h"
#include "Rsh_internals.h"

#define Rsh_error(msg, ...)                                                    \
  {                                                                            \
    error(msg, __VA_ARGS__);                                                   \
    return R_NilValue;                                                         \
  }

#ifdef RSH_TESTS
#define JIT_EXTERN
#else
#define JIT_EXTERN extern
#endif

JIT_EXTERN CCODE Rex_do_arith;
JIT_EXTERN SEXP R_AddOp;

static INLINE void Rsh_initialize_runtime(void) {
  R_AddOp = PROTECT(Rif_Primitive("+"));
  R_PreserveObject(R_AddOp);
  UNPROTECT(1);

  Rex_do_arith = PRIMFUN(R_AddOp);
}

// IEEE 754 double-precision float:
//
// 1 Sign bit
// | 11 Exponent bits
// | |          52 Mantissa bits
// | |          |
// S[Exponent-][Mantissa------------------------------------------]
//
//   NaN bits
//  +---------+
// -111111111111---------------------------------------------------
//             ^ NaN type (1 - quiet (QNAN), 0 - signalling)
//
// Our NaN boxing:
// int: 0111111111111-------------------[------------------------------]
//      32 bits for the payload
// sxp: 1111111111111---[----------------------------------------------]
//      48 bits for the payload
// dbl: no encoding needed

typedef uint64_t Value;

#define QNAN ((uint64_t)0x7ffc000000000000)
#define SIGN_BIT ((uint64_t)1 << 63)

#define VAL_SXP(v) (SEXP)((v) & (((uint64_t)1 << 48) - 1))
#define VAL_INT(v) (int)((v) & (((uint64_t)1 << 32) - 1))
#define VAL_DBL(v) (double)(v)

#define SXP_TO_VAL(v)                                                          \
  (Value)(QNAN | SIGN_BIT | (((uint64_t)v) & (((uint64_t)1 << 48) - 1)))
#define INT_TO_VAL(v) (Value)(QNAN | (v))
#define DBL_TO_VAL(v) (Value)((v))

#define VAL_IS_SXP(v) (((v) & (QNAN | SIGN_BIT)) == (QNAN | SIGN_BIT))
#define VAL_IS_INT(v) (((v) & (QNAN | SIGN_BIT)) == ((QNAN | SIGN_BIT) << 1))
#define VAL_IS_DBL(v) (((v) & QNAN) != QNAN)
#define VAL_TAG(v) ((VAL_IS_DBL(v) ? REALSXP : (VAL_IS_INT(v) ? INTSXP : 0)))

// TODO: can we share this bcell expand?
static INLINE SEXP val_as_sexp(Value v) {
  switch (VAL_TAG(v)) {
  case REALSXP:
    return ScalarReal(VAL_DBL(v));
  case INTSXP:
    return ScalarInteger(VAL_INT(v));
  case LGLSXP:
    return ScalarLogical(VAL_INT(v));
  default:
    return VAL_SXP(v);
  }
}

static INLINE Value sexp_as_val(SEXP s) {
  if (IS_SCALAR(s, REALSXP)) {
    return DBL_TO_VAL(REAL(s)[0]);
  } else if (IS_SCALAR(s, INTSXP)) {
    return INT_TO_VAL(INTEGER(s)[0]);
  } else {
    // TODO: logical
    return SXP_TO_VAL(s);
  }
}

// TODO: add logicals contants and some other singletons?

// BINDING CELLS (bcell) implementation
//
// A binding cell is a hack that R BC interpreter uses to gain some performance
// in the number of environment lookups for GETVAR and SETVAR.
// It also help with scalar doubles, intergers and logicals.
// The problem with R BNDCELLs is that its implementation is private,
// scattered over buch of files. Bringing it over is not easy as it brings
// a whole bunch of other stuff.
//
// Essentially a binding cell is a LISTSXP pointing to the frame in which
// the binding is stored. The CAR of the cell is the value of the binding
// (BCellVal). The tag of the cell identifies whether it is a scalar or a full
// SEXP. The BCELL_TAG(cell) is one of:
// - REALSXP, INTSXP, LGLSXP for scalars
// - 0 for any other type
// The BCELL_VAL(cell) is the value of the binding.

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
      val = ScalarReal(vv.dval);
      BCELL_SET(b, val);
      INCREMENT_NAMED(val);
      UNPROTECT(1);
      break;
    case INTSXP:
      PROTECT(b);
      val = ScalarInteger(vv.ival);
      BCELL_SET(b, val);
      INCREMENT_NAMED(val);
      UNPROTECT(1);
      break;
    case LGLSXP:
      PROTECT(b);
      val = ScalarLogical(vv.ival);
      BCELL_SET(b, val);
      INCREMENT_NAMED(val);
      UNPROTECT(1);
      break;
    }
  }
}

#define IS_USER_DATABASE(rho)                                                  \
  (OBJECT((rho)) && inherits((rho), "UserDefinedDatabase"))

// Returns a binding cell
static INLINE BCell bcell_get(SEXP symbol, SEXP rho) {
  if (rho == R_BaseEnv || rho == R_BaseNamespace || IS_USER_DATABASE(rho)) {
    return R_NilValue;
  } else {
    R_varloc_t loc = R_findVarLocInFrame(rho, symbol);
    return (!R_VARLOC_IS_NULL(loc) && !IS_ACTIVE_BINDING(loc.cell))
               ? loc.cell
               : R_NilValue;
  }
}

static INLINE SEXP bcell_get_cache(SEXP symbol, SEXP rho, BCell *cache) {
  if (TAG(*cache) == symbol && !BCELL_IS_UNBOUND(*cache)) {
    return *cache;
  } else {
    SEXP ncell = bcell_get(symbol, rho);
    if (ncell != R_NilValue) {
      *cache = ncell;
    } else if (*cache != R_NilValue && BCELL_IS_UNBOUND(*cache)) {
      *cache = R_NilValue;
    }
    return ncell;
  }
}

static INLINE SEXP bcell_value(SEXP loc) {
  if (BCELL_TAG(loc)) {
    bcell_expand(loc);
    return CAR0(loc);
  } else if (loc != R_NilValue && !IS_ACTIVE_BINDING(loc))
    return CAR0(loc);
  else
    return R_UnboundValue;
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

// TODO: move to internal
static INLINE SEXP FORCE_PROMISE(SEXP value, SEXP symbol, SEXP rho,
                                 Rboolean keepmiss) {
  if (PRVALUE(value) == R_UnboundValue) {
    /**** R_isMissing is inefficient */
    if (keepmiss && R_isMissing(symbol, rho)) {
      value = R_MissingArg;
    } else {
      // FIXME: port the forcePromise from eval.c
      value = eval(value, rho);
    }
  } else {
    value = PRVALUE(value);
  }
  ENSURE_NAMEDMAX(value);
  return value;
}

// TODO: move to internal
// FIXME: this is not the same as in eval.c
static void MISSING_ARGUMENT_ERROR(SEXP symbol, SEXP rho) {
  const char *n = CHAR(PRINTNAME(symbol));
  if (*n) {
    error("argument \"%s\" is missing, with no default", n);
  } else {
    error("argument is missing, with no default");
  }
}

// TODO: move to internal
#define MAYBE_MISSING_ARGUMENT_ERROR(symbol, keepmiss, rho)                    \
  do {                                                                         \
    if (!keepmiss)                                                             \
      MISSING_ARGUMENT_ERROR(symbol, rho);                                     \
  } while (0)

// TODO: move to internal
// FIXME: this is not the same as in eval.c
static void UNBOUND_VARIABLE_ERROR(SEXP symbol, SEXP rho) {
  error("object '%s' not found", EncodeChar(PRINTNAME(symbol)));
}

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
      // TODO: the original is calling FIND_VAR_NO_CACHE which in turn calls
      // R_GetVarLocValue which is private
      value = findVar(symbol, rho);
    } else {
      has_cell = TRUE;
    }
  }

  if (value == R_UnboundValue) {
    // FIXME: make my own
    UNBOUND_VARIABLE_ERROR(symbol, rho);
  } else if (value == R_MissingArg) {
    // FIXME: make my own
    MAYBE_MISSING_ARGUMENT_ERROR(symbol, keepmiss, rho);
  } else if (TYPEOF(value) == PROMSXP) {
    SEXP pv = PRVALUE(value);
    if (pv == R_UnboundValue) {
      PROTECT(value);
      // FIXME: make my own
      value = FORCE_PROMISE(value, symbol, rho, keepmiss);
      UNPROTECT(1);
    } else {
      ENSURE_NAMEDMAX(pv);
      value = pv;
    }
  } else {
    ENSURE_NAMED(value); /* needed for .Last.value - LT */
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
  }

  SEXP value = CAR(*cell);
  int type = TYPEOF(value);
  /* extract value of forced promises */
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
    defineVar(symbol, sexp_value, rho);
    UNPROTECT(1);
    bcell_get_cache(symbol, rho, cell);
    BCELL_INLINE(*cell, value);
  }
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

static INLINE SEXP Rsh_get_builtin(const char *name) {
  return Rif_Primitive(name);
}

static INLINE SEXP Rsh_call(SEXP call, SEXP fun, SEXP args, SEXP rho) {
  SEXP value = NULL;
  int flag;

  switch (TYPEOF(fun)) {
  case BUILTINSXP:
    args = Rsh_builtin_call_args(args);
    Rif_checkForMissings(args, call);
    flag = PRIMPRINT(fun);
    R_Visible = flag != 1;
    value = PRIMFUN(fun)(call, fun, args, rho);
    if (flag < 2) {
      R_Visible = flag != 1;
    }
    break;
  case SPECIALSXP:
    flag = PRIMPRINT(fun);
    R_Visible = flag != 1;
    value = PRIMFUN(fun)(call, fun, Rif_markSpecialArgs(CDR(call)), rho);
    if (flag < 2) {
      R_Visible = flag != 1;
    }
    break;
  case CLOSXP:
    args = Rsh_closure_call_args(args);
    value = applyClosure(call, fun, args, rho, R_NilValue);
    break;
  default:
    error("bad function");
  }
  return value;
}

static INLINE Rboolean Rsh_is_true(SEXP value, SEXP call) {
  if (IS_SCALAR(value, LGLSXP)) {
    Rboolean lval = LOGICAL0(value)[0];
    if (lval != NA_LOGICAL)
      return lval;
  }

  PROTECT(value);
  Rboolean ans = Rif_asLogicalNoNA(value, call);
  UNPROTECT(1);
  return ans;
}

#define RSH_LIST_APPEND(head, tail, value)                                     \
  do {                                                                         \
    SEXP __elem__ = cons(value, R_NilValue);                                   \
    if (head == R_NilValue) {                                                  \
      head = __elem__;                                                         \
    } else {                                                                   \
      SETCDR(tail, __elem__);                                                  \
    }                                                                          \
    tail = __elem__;                                                           \
  } while (0)

#define RSH_SET_TAG(v, t)                                                      \
  do {                                                                         \
    SEXP __tag__ = (t);                                                        \
    if (__tag__ != R_NilValue) {                                               \
      if (v != R_NilValue)                                                     \
        SET_TAG(v, CreateTag(__tag__));                                        \
    }                                                                          \
  } while (0)

#define DO_BINARY(op, a, b, r)                                                 \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    switch (op) {                                                              \
    case PLUSOP:                                                               \
      *(r) = (a) + (b);                                                        \
      break;                                                                   \
    case MINUSOP:                                                              \
      *(r) = (a) - (b);                                                        \
      break;                                                                   \
    case TIMESOP:                                                              \
      *(r) = (a) * (b);                                                        \
      break;                                                                   \
    case DIVOP:                                                                \
      *(r) = (a) / (b);                                                        \
      break;                                                                   \
    }                                                                          \
  } while (0)

static INLINE Value Rsh_binary(ARITHOP_TYPE type, Value lhs, Value rhs,
                               SEXP call, SEXP op, SEXP rho) {
  Value res;

  if (VAL_IS_DBL(lhs)) {
    if (VAL_IS_DBL(rhs)) {
      DO_BINARY(type, lhs, rhs, &res);
      return res;
    } else if (VAL_IS_INT(rhs) && VAL_INT(rhs) != NA_INTEGER) {
      DO_BINARY(type, lhs, VAL_INT(rhs), &res);
      return res;
    }
  }

  if (VAL_IS_INT(lhs) && VAL_INT(lhs) != NA_INTEGER) {
    int l = VAL_INT(lhs);
    if (VAL_IS_DBL(rhs)) {
      DO_BINARY(type, l, rhs, &res);
      return res;
    } else if (VAL_IS_INT(rhs) && VAL_INT(rhs) != NA_INTEGER) {
      int res_int;
      DO_BINARY(type, l, VAL_INT(rhs), &res_int);
      return INT_TO_VAL(res_int);
    }
  }

  // Slow path!
  // We could have made it somewhat faster iff we could get our hands on the
  // R_Binary from arithmetics.c it is not exported, so we have to go through
  // from the do_arith which we can leak via the BUILTINSXP
  SEXP args = list2(val_as_sexp(lhs), val_as_sexp(rhs));
  PROTECT(args);
  SEXP res_sexp = Rex_do_arith(call, op, args, rho);
  UNPROTECT(1);
  return sexp_as_val(res_sexp);
}

#endif // RSH_H
