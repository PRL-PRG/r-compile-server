#ifndef RSH_INTERNALS_H
#define RSH_INTERNALS_H

#include <stdlib.h>
#define USE_RINTERNALS

#include <Rinternals.h>
#include <string.h>

// this file contains some internal functions that are not exported

extern FUNTAB R_FunTab[];
extern Rboolean R_Visible; /* Value visibility flag */

#define INLINE inline __attribute__((always_inline))

SEXP R_Primitive(const char *primname);
Rboolean asLogicalNoNA(SEXP s, SEXP call, SEXP rho);
NORET void MISSING_ARGUMENT_ERROR(SEXP symbol, SEXP rho);
NORET void UNBOUND_VARIABLE_ERROR(SEXP symbol, SEXP rho);
#define MAYBE_MISSING_ARGUMENT_ERROR(symbol, keepmiss, rho)                    \
  do {                                                                         \
    if (!keepmiss)                                                             \
      MISSING_ARGUMENT_ERROR(symbol, rho);                                     \
  } while (0)

void checkForMissings(SEXP args, SEXP call);
SEXP markSpecialArgs(SEXP args);
Rboolean asLogicalNoNA(SEXP s, SEXP call, SEXP rho);
int DispatchGroup(const char *group, SEXP call, SEXP op, SEXP args, SEXP rho,
                  SEXP *ans);
SEXP CONS_NR(SEXP car, SEXP cdr);
SEXP R_binary(SEXP call, SEXP op, SEXP x, SEXP y);
SEXP do_relop_dflt(SEXP call, SEXP op, SEXP x, SEXP y);
SEXP do_math1(SEXP call, SEXP op, SEXP args, SEXP env);

#define R_MSG_NA "NaNs produced"

// from: eval.c modified version of cmp_arith2
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
//
#endif
