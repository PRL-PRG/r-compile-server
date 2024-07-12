#ifndef RSH_H
#define RSH_H

#define COMPILING_R 1

#include "Rsh_internals.h"

#define Rsh_error(msg, ...)                                                    \
  {                                                                            \
    Rf_error(msg, __VA_ARGS__);                                                \
    return R_NilValue;                                                         \
  }

// TODO: use the getvar from eval.c instead
static INLINE SEXP Rsh_get_var(SEXP sym, SEXP env) {
  SEXP v = Rf_findVar(sym, env);

  if (v == R_UnboundValue) {
    Rsh_error("'%s' not found", CHAR(PRINTNAME(sym)));
  } else if (v == R_MissingArg) {
    Rsh_error("'%s' is missing", CHAR(PRINTNAME(sym)));
  } else if (TYPEOF(v) == PROMSXP) {
    PROTECT(v);
    v = Rf_eval(v, env);
    UNPROTECT(1);
  }

  return v;
}

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
    value = Rf_applyClosure(call, fun, args, rho, R_NilValue);
    break;
  default:
    Rf_error("bad function");
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
    SEXP __elem__ = Rf_cons(value, R_NilValue);                                \
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
        SET_TAG(v, Rf_CreateTag(__tag__));                                     \
    }                                                                          \
  } while (0)

typedef enum { ADD, LT } BINARY_OP;

static INLINE SEXP Rsh_fast_binary(BINARY_OP op, SEXP x, SEXP y) {
  switch (op) {
  case ADD:
    if (TYPEOF(x) == REALSXP && TYPEOF(y) == REALSXP) {
      // FIXME: NA, ...
      return Rf_ScalarReal(REAL(x)[0] + REAL(y)[0]);
    }
    Rf_error("Unsupported type");
    break;
  case LT:
    if (TYPEOF(x) == REALSXP && TYPEOF(y) == REALSXP) {
      // FIXME: NA, ...
      return Rf_ScalarLogical(REAL(x)[0] < REAL(y)[0]);
    }
    Rf_error("Unsupported type");
    break;
  default:
    Rf_error("Unsupported op: %d", op);
  }

  // FIXME: pull in the arith
  return R_NilValue;
}

static INLINE void Rsh_set_var(SEXP symbol, SEXP value, SEXP env) {
  INCREMENT_NAMED(value);
  // FIXME: shouldn't it be caller protected?
  PROTECT(value);
  Rf_defineVar(symbol, value, env);
  UNPROTECT(1);
}

#endif // RSH_H
