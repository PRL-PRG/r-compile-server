#ifndef RUNTIME_INTENALS_H
#define RUNTIME_INTENALS_H

// THIS HEADER NEEDS TO BE A C-compatible HEADER
// IT IS USED BY THE SERVER COMPILER

// The USE_RINTERNALS needs to be set
#ifndef USE_RINTERNALS
#define USE_RINTERNALS
#endif
#include <Rinternals.h>

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

extern FUNTAB R_FunTab[];
extern Rboolean R_Visible; /* Value visibility flag */
extern SEXP R_valueSym;
extern R_bcstack_t *R_BCNodeStackTop, *R_BCNodeStackEnd, *R_BCProtTop;
extern SEXP R_TrueValue;
extern SEXP R_LogicalNAValue;
extern SEXP R_FalseValue;

#define ALWAYS_INLINE inline __attribute__((always_inline))
#ifdef RSH_INLINE
#define INLINE ALWAYS_INLINE
#else
#define INLINE
#endif

#define UNUSED __attribute__((unused))

#define R_MSG_NA "NaNs produced"

void forcePromise(SEXP e);
SEXP Rf_mkPROMISE(SEXP expr, SEXP rho);
SEXP bcEval(SEXP call, SEXP rho);
double R_pow(double x, double y);
SEXP R_bcDecode(SEXP);
SEXP R_bcEncode(SEXP);
SEXP R_Primitive(const char *primname);
Rboolean asLogicalNoNA(SEXP s, SEXP call, SEXP rho);
NORET void MISSING_ARGUMENT_ERROR(SEXP symbol, SEXP rho);
NORET void UNBOUND_VARIABLE_ERROR(SEXP symbol, SEXP rho);
void checkForMissings(SEXP args, SEXP call);
SEXP markSpecialArgs(SEXP args);
Rboolean asLogicalNoNA(SEXP s, SEXP call, SEXP rho);
int DispatchGroup(const char *group, SEXP call, SEXP op, SEXP args, SEXP rho,
                  SEXP *ans);
SEXP CONS_NR(SEXP car, SEXP cdr);
SEXP R_binary(SEXP call, SEXP op, SEXP x, SEXP y);
SEXP do_relop_dflt(SEXP call, SEXP op, SEXP x, SEXP y);
SEXP do_math1(SEXP call, SEXP op, SEXP args, SEXP env);
SEXP R_unary(SEXP call, SEXP op, SEXP s1);
SEXP do_logic(SEXP call, SEXP op, SEXP args, SEXP env);
int tryDispatch(const char *generic, SEXP call, SEXP x, SEXP rho, SEXP *pv);
SEXP R_subset3_dflt(SEXP x, SEXP input, SEXP call);
SEXP Rf_CreateTag(SEXP x);
SEXP do_subset2_dflt(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP do_subset_dflt(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP EnsureLocal(SEXP symbol, SEXP rho, R_varloc_t *ploc);
int tryAssignDispatch(const char *generic, SEXP call, SEXP lhs, SEXP rhs,
                      SEXP rho, SEXP *pv);
SEXP do_subassign_dflt(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP do_subassign2_dflt(SEXP call, SEXP op, SEXP args, SEXP rho);
// creates a new evaluated promise without reference counting
SEXP R_mkEVPROMISE_NR(SEXP expr, SEXP val);
// creates a new evaluated promise with reference counting
SEXP R_mkEVPROMISE(SEXP expr, SEXP val);
SEXP do_colon(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP R_compact_intrange(R_xlen_t n1, R_xlen_t n2);
SEXP do_seq_along(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP do_seq_len(SEXP call, SEXP op, SEXP args, SEXP rho);
R_varloc_t R_findVarLoc(SEXP rho, SEXP symbol);
SEXP do_log_builtin(SEXP call, SEXP op, SEXP args, SEXP env);
NORET void nodeStackOverflow(void);
SEXP R_findVar(SEXP symbol, SEXP rho);
SEXP getPrimitive(SEXP symbol, SEXPTYPE type);

SEXP make_applyClosure_env(SEXP call, SEXP op, SEXP arglist, SEXP rho,
                           SEXP suppliedvars);
void Rf_begincontext(RCNTXT *cptr, int flags, SEXP syscall, SEXP env, SEXP sysp,
                     SEXP promargs, SEXP callfun);
void Rf_endcontext(RCNTXT *cptr);

SEXP rcpEval(SEXP body, SEXP rho);

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
  SEXP dim =
      TAG(attr) == R_DimSymbol ? CAR(attr) : Rf_getAttrib(v, R_DimSymbol);
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

#define DO_FAST_VECELT(/* SEXP */ vec, /* R_xlen_t */ i,                       \
                       /* Rboolean */ subset2, /* Value* */ res)               \
  do {                                                                         \
    switch (TYPEOF(vec)) {                                                     \
    case REALSXP:                                                              \
      if (i < 0 || XLENGTH(vec) <= i) {                                        \
        break;                                                                 \
      }                                                                        \
      SET_DBL_VAL(res, REAL_ELT(vec, i));                                      \
      return;                                                                  \
    case INTSXP:                                                               \
      if (i < 0 || XLENGTH(vec) <= i) {                                        \
        break;                                                                 \
      }                                                                        \
      SET_INT_VAL(res, INTEGER_ELT(vec, i));                                   \
      return;                                                                  \
    case LGLSXP:                                                               \
      if (i < 0 || XLENGTH(vec) <= i) {                                        \
        break;                                                                 \
      }                                                                        \
      SET_LGL_VAL(res, LOGICAL_ELT(vec, i));                                   \
      return;                                                                  \
    case CPLXSXP:                                                              \
      if (i < 0 || XLENGTH(vec) <= i) {                                        \
        break;                                                                 \
      }                                                                        \
      SET_SXP_VAL(res, Rf_ScalarComplex(COMPLEX_ELT(vec, i)));                 \
      return;                                                                  \
    case RAWSXP:                                                               \
      if (i < 0 || XLENGTH(vec) <= i) {                                        \
        break;                                                                 \
      }                                                                        \
      SET_SXP_VAL(res, Rf_ScalarRaw(RAW(vec)[i]));                             \
      return;                                                                  \
    case VECSXP:                                                               \
      if (i < 0 || XLENGTH(vec) <= i) {                                        \
        break;                                                                 \
      }                                                                        \
      SEXP elt = VECTOR_ELT(vec, i);                                           \
      RAISE_NAMED(elt, NAMED(vec));                                            \
      if (subset2) {                                                           \
        SET_SXP_VAL(res, elt);                                                 \
      } else {                                                                 \
        SEXP v = Rf_allocVector(VECSXP, 1);                                    \
        SET_VECTOR_ELT(v, 0, elt);                                             \
        SET_SXP_VAL(res, v);                                                   \
      }                                                                        \
      return;                                                                  \
    }                                                                          \
  } while (0)

#define DO_FAST_SETVECELT(/* Value* */ target, /* SEXP */ vec,                 \
                          /* R_xlen_t */ i, /* Value */ rhs,                   \
                          /* Rboolean */ subassign2)                           \
  do {                                                                         \
    if (i >= 0 && XLENGTH(vec) > i) {                                          \
      if (TYPEOF(vec) == REALSXP) {                                            \
        switch (VAL_TAG(rhs)) {                                                \
        case REALSXP:                                                          \
          REAL(vec)[i] = VAL_DBL(rhs);                                         \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        case INTSXP:                                                           \
          REAL(vec)[i] = INTEGER_TO_REAL(VAL_INT(rhs));                        \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        case LGLSXP:                                                           \
          REAL(vec)[i] = LOGICAL_TO_REAL(VAL_INT(rhs));                        \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        }                                                                      \
      } else if (VAL_TAG(rhs) == TYPEOF(vec)) {                                \
        switch (VAL_TAG(rhs)) {                                                \
        case INTSXP:                                                           \
          INTEGER(vec)[i] = VAL_INT(rhs);                                      \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
        case LGLSXP:                                                           \
          LOGICAL(vec)[i] = VAL_INT(rhs);                                      \
          SET_SXP_VAL(target, vec);                                            \
          SETTER_CLEAR_NAMED(vec);                                             \
          return;                                                              \
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
                           /* SEXP */ value, /* RBoolean */ RC)                \
  do {                                                                         \
    SEXP __elem__ =                                                            \
        (RC) ? CONS((value), R_NilValue) : CONS_NR(value, R_NilValue);         \
                                                                               \
    if (VAL_SXP(*head) == R_NilValue) {                                        \
      SET_SXP_VAL(head, __elem__);                                             \
    } else {                                                                   \
      SETCDR(VAL_SXP(*(tail)), __elem__);                                      \
    }                                                                          \
    SET_SXP_VAL(tail, __elem__);                                               \
    if (RC) {                                                                  \
      INCREMENT_NAMED(CAR(__elem__));                                          \
    } else {                                                                   \
      INCREMENT_LINKS(CAR(__elem__));                                          \
    }                                                                          \
  } while (0)

#define RSH_PUSH_ARG(/* Value* */ head, /* Value* */ tail, /* SEXP */ value)   \
  RSH_LIST_APPEND_EX(head, tail, value, FALSE)

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
      DECREMENT_LINKS(CAR(__a__));                                             \
      __a__ = CDR(__a__);                                                      \
    }                                                                          \
  } while (0)

#define SET_SCALAR_IVAL(s, v) INTEGER((s))[0] = (v)
#define SET_SCALAR_DVAL(s, v) REAL((s))[0] = (v)
#define SET_SCALAR_CVAL(s, v) COMPLEX((s))[0] = (v)
#define SET_SCALAR_BVAL(s, v) RAW((s))[0] = (v)

#define BCODE_CODE(x) CAR(x)
#define BCODE_CONSTS(x) CDR(x)
#define IS_BYTECODE(x) (TYPEOF(x) == BCODESXP)

// FIXME: implement signal checking
#define RSH_CHECK_SIGINT()

#endif // RUNTIME_INTENALS_H
