#ifndef RSH_H
#define RSH_H

#include "Rsh_internals.h"

extern Rboolean R_Visible;

#define Rsh_error(msg, ...)                                                    \
  {                                                                            \
    Rf_error(msg, __VA_ARGS__);                                                \
    return R_NilValue;                                                         \
  }

typedef enum { ADD } BINARY_OP;

// this is just a try to link to functions defined in the rsh package
SEXP Rsh_fast_binary(BINARY_OP, SEXP, SEXP);

static inline SEXP Rsh_get_var(SEXP sym, SEXP env) {
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

static inline SEXP Rsh_get_builtin(const char *name) {
  return Rif_Primitive(name);
}

static inline SEXP Rsh_call_builtin(SEXP call, SEXP fun, SEXP args, SEXP env) {
  int flag = PRIMPRINT(fun);
  R_Visible = (Rboolean)(flag != 1);
  SEXP value = PRIMFUN(fun)(call, fun, args, env);
  if (flag < 2) {
    R_Visible = (Rboolean)(flag != 1);
  }
  return value;
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
        SET_TAG(v, Rf_CreateTag(__tag__));                                        \
    }                                                                          \
  } while (0)

#endif // RSH_H