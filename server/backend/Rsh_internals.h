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

#endif
