#ifndef RSH_INTERNALS_H
#define RSH_INTERNALS_H

#include <stdlib.h>
#define USE_RINTERNALS

#include "Rinternals.h"
#include <string.h>

// this file contains some internal functions that are not exported

extern FUNTAB R_FunTab[];
extern Rboolean R_Visible; /* Value visibility flag */

#define INLINE inline __attribute__((always_inline))

// static INLINE SEXP Rif_mkPRIMSXP(int offset, int eval) {
//   SEXP result;
//   SEXPTYPE type = eval ? BUILTINSXP : SPECIALSXP;
//   static SEXP PrimCache = NULL;
//   static int FunTabSize = 0;
//
//   if (PrimCache == NULL) {
//     /* compute the number of entries in R_FunTab */
//     while (R_FunTab[FunTabSize].name)
//       FunTabSize++;
//
//     /* allocate and protect the cache */
//     PrimCache = allocVector(VECSXP, FunTabSize);
//     R_PreserveObject(PrimCache);
//   }
//
//   if (offset < 0 || offset >= FunTabSize)
//     error("offset is out of R_FunTab range");
//
//   result = VECTOR_ELT(PrimCache, offset);
//
//   if (result == R_NilValue) {
//     result = allocSExp(type);
//     SET_PRIMOFFSET(result, offset);
//     SET_VECTOR_ELT(PrimCache, offset, result);
//   } else if (TYPEOF(result) != type)
//     error("requested primitive type is not consistent with cached value");
//
//   return result;
// }
//
// static INLINE SEXP Rif_Primitive(const char *primname) {
//   for (int i = 0; R_FunTab[i].name; i++)
//     if (strcmp(primname, R_FunTab[i].name) == 0) { /* all names are ASCII */
//       if ((R_FunTab[i].eval % 100) / 10)
//         return R_NilValue; /* it is a .Internal */
//       else
//         return mkPRIMSXP(i, R_FunTab[i].eval % 10);
//     }
//   return R_NilValue;
// }

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

// static INLINE Rboolean Rif_asLogicalNoNA(SEXP s, SEXP call) {
//   // TODO: i18n
//   Rboolean cond = NA_LOGICAL;
//
//   /* handle most common special case directly */
//   if (IS_SCALAR(s, LGLSXP)) {
//     cond = SCALAR_LVAL(s);
//     if (cond != NA_LOGICAL)
//       return cond;
//   } else if (IS_SCALAR(s, INTSXP)) {
//     int val = SCALAR_IVAL(s);
//     if (val != NA_INTEGER)
//       return val != 0;
//   }
//
//   int len = length(s);
//   if (len > 1)
//     errorcall(call, "the condition has length > 1");
//   if (len > 0) {
//     /* inline common cases for efficiency */
//     switch (TYPEOF(s)) {
//     case LGLSXP:
//       cond = LOGICAL(s)[0];
//       break;
//     case INTSXP:
//       cond = INTEGER(s)[0]; /* relies on NA_INTEGER == NA_LOGICAL */
//       break;
//     default:
//       cond = asLogical(s);
//     }
//   }
//
//   if (cond == NA_LOGICAL) {
//     char *msg =
//         len ? (isLogical(s) ? "missing value where TRUE/FALSE needed"
//                             : "argument is not interpretable as logical")
//             : "argument is of length zero";
//     errorcall(call, msg);
//   }
//   return cond;
// }

// static INLINE void Rif_signalMissingArgError(SEXP args, SEXP call) {
//   SEXP a, c;
//   int n, k;
//   for (a = args, n = 1; a != R_NilValue; a = CDR(a), n++)
//     if (CAR(a) == R_MissingArg) {
//       /* check for an empty argument in the call -- start from
//          the beginning in case of ... arguments */
//       if (call != R_NilValue) {
//         for (k = 1, c = CDR(call); c != R_NilValue; c = CDR(c), k++)
//           if (CAR(c) == R_MissingArg)
//             errorcall(call, "argument %d is empty", k);
//       }
//       /* An error from evaluating a symbol will already have
//          been signaled.  The interpreter, in evalList, does
//          _not_ signal an error for a call expression that
//          produces an R_MissingArg value; for example
//
//              c(alist(a=)$a)
//
//          does not signal an error. If we decide we do want an
//          error in this case we can modify evalList for the
//          interpreter and here use the code below. */
// #ifdef NO_COMPUTED_MISSINGS
//       /* otherwise signal a 'missing argument' error */
//       errorcall(call, "argument %d is missing", n);
// #endif
//     }
// }
//
// static INLINE void Rif_checkForMissings(SEXP args, SEXP call) {
//   Rboolean found = FALSE;
//   for (SEXP a = args; a != R_NilValue; a = CDR(a))
//     if (CAR(a) == R_MissingArg) {
//       found = TRUE;
//       break;
//     }
//   if (found)
//     Rif_signalMissingArgError(args, call);
// }
//
// static INLINE SEXP Rif_markSpecialArgs(SEXP args) {
//   SEXP arg;
//   for (arg = args; arg != R_NilValue; arg = CDR(arg))
//     MARK_NOT_MUTABLE(CAR(arg));
//   return args;
// }
//
// static int ddVal(SEXP symbol) {
//   const char *buf;
//   char *endp;
//   int rval;
//
//   buf = CHAR(PRINTNAME(symbol));
//   if (!strncmp(buf, "..", 2) && strlen(buf) > 2) {
//     buf += 2;
//     rval = (int)strtol(buf, &endp, 10);
//     if (*endp != '\0')
//       return 0;
//     else
//       return rval;
//   }
//   return 0;
// }

#endif
