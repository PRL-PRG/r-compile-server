#include "Rinternals.h"

#define Rsh_error(msg, ...)                                                    \
  {                                                                            \
    Rf_error(msg, __VA_ARGS__);                                                \
    return R_NilValue;                                                         \
  }

typedef enum { ADD } BINARY_OP;

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
