#ifndef RSH_INTERNALS_H
#define RSH_INTERNALS_H

#define HAVE_DECL_SIZE_MAX 1

#include "Defn.h"
#include <string.h>

// this file contains some internal functions that are not exported

#define INLINE inline __attribute__((always_inline))

static INLINE SEXP Rif_mkPRIMSXP(int offset, int eval) {
  SEXP result;
  SEXPTYPE type = eval ? BUILTINSXP : SPECIALSXP;
  static SEXP PrimCache = NULL;
  static int FunTabSize = 0;

  if (PrimCache == NULL) {
    /* compute the number of entries in R_FunTab */
    while (R_FunTab[FunTabSize].name)
      FunTabSize++;

    /* allocate and protect the cache */
    PrimCache = Rf_allocVector(VECSXP, FunTabSize);
    R_PreserveObject(PrimCache);
  }

  if (offset < 0 || offset >= FunTabSize)
    Rf_error("offset is out of R_FunTab range");

  result = VECTOR_ELT(PrimCache, offset);

  if (result == R_NilValue) {
    result = Rf_allocSExp(type);
    SET_PRIMOFFSET(result, offset);
    SET_VECTOR_ELT(PrimCache, offset, result);
  } else if (TYPEOF(result) != type)
    Rf_error("requested primitive type is not consistent with cached value");

  return result;
}

static INLINE SEXP Rif_Primitive(const char *primname) {
  for (int i = 0; R_FunTab[i].name; i++)
    if (strcmp(primname, R_FunTab[i].name) == 0) { /* all names are ASCII */
      if ((R_FunTab[i].eval % 100) / 10)
        return R_NilValue; /* it is a .Internal */
      else
        return Rif_mkPRIMSXP(i, R_FunTab[i].eval % 10);
    }
  return R_NilValue;
}

static INLINE Rboolean Rif_asLogicalNoNA(SEXP s, SEXP call) {
  // TODO: i18n
  Rboolean cond = NA_LOGICAL;

  /* handle most common special case directly */
  if (IS_SCALAR(s, LGLSXP)) {
    cond = SCALAR_LVAL(s);
    if (cond != NA_LOGICAL)
      return cond;
  } else if (IS_SCALAR(s, INTSXP)) {
    int val = SCALAR_IVAL(s);
    if (val != NA_INTEGER)
      return val != 0;
  }

  int len = Rf_length(s);
  if (len > 1)
    Rf_errorcall(call, "the condition has length > 1");
  if (len > 0) {
    /* inline common cases for efficiency */
    switch (TYPEOF(s)) {
    case LGLSXP:
      cond = LOGICAL(s)[0];
      break;
    case INTSXP:
      cond = INTEGER(s)[0]; /* relies on NA_INTEGER == NA_LOGICAL */
      break;
    default:
      cond = Rf_asLogical(s);
    }
  }

  if (cond == NA_LOGICAL) {
    char *msg =
        len ? (Rf_isLogical(s) ? "missing value where TRUE/FALSE needed"
                               : "argument is not interpretable as logical")
            : "argument is of length zero";
    Rf_errorcall(call, msg);
  }
  return cond;
}

static INLINE void Rif_signalMissingArgError(SEXP args, SEXP call) {
  SEXP a, c;
  int n, k;
  for (a = args, n = 1; a != R_NilValue; a = CDR(a), n++)
    if (CAR(a) == R_MissingArg) {
      /* check for an empty argument in the call -- start from
         the beginning in case of ... arguments */
      if (call != R_NilValue) {
        for (k = 1, c = CDR(call); c != R_NilValue; c = CDR(c), k++)
          if (CAR(c) == R_MissingArg)
            Rf_errorcall(call, "argument %d is empty", k);
      }
      /* An error from evaluating a symbol will already have
         been signaled.  The interpreter, in evalList, does
         _not_ signal an error for a call expression that
         produces an R_MissingArg value; for example

             c(alist(a=)$a)

         does not signal an error. If we decide we do want an
         error in this case we can modify evalList for the
         interpreter and here use the code below. */
#ifdef NO_COMPUTED_MISSINGS
      /* otherwise signal a 'missing argument' error */
      Rf_errorcall(call, "argument %d is missing", n);
#endif
    }
}

static INLINE void Rif_checkForMissings(SEXP args, SEXP call) {
  Rboolean found = FALSE;
  for (SEXP a = args; a != R_NilValue; a = CDR(a))
    if (CAR(a) == R_MissingArg) {
      found = TRUE;
      break;
    }
  if (found)
    Rif_signalMissingArgError(args, call);
}

static INLINE SEXP Rif_markSpecialArgs(SEXP args) {
  SEXP arg;
  for (arg = args; arg != R_NilValue; arg = CDR(arg))
    MARK_NOT_MUTABLE(CAR(arg));
  return args;
}

#endif
