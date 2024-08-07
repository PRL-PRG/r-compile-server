#include "util.h"
SEXP append_vec(SEXP v1, SEXP v2) {
  int n1 = LENGTH(v1);
  int n2 = LENGTH(v2);

  SEXP v = PROTECT(Rf_allocVector(VECSXP, n1 + n2));

  for (int i = 0; i < n1; i++) {
    SET_VECTOR_ELT(v, i, VECTOR_ELT(v1, i));
  }

  for (int i = 0; i < n2; i++) {
    SET_VECTOR_ELT(v, n1 + i, VECTOR_ELT(v2, i));
  }

  SEXP ns1 = Rf_getAttrib(v1, R_NamesSymbol);
  SEXP ns2 = Rf_getAttrib(v2, R_NamesSymbol);

  if (ns1 != R_NilValue || ns2 != R_NilValue) {
    SEXP ns = PROTECT(Rf_allocVector(STRSXP, n1 + n2));

    for (int i = 0; i < n1; i++) {
      if (ns1 != R_NilValue) {
        SET_STRING_ELT(ns, i, STRING_ELT(ns1, i));
      } else {
        SET_STRING_ELT(ns, i, R_BlankString);
      }
    }

    for (int i = 0; i < n2; i++) {
      if (ns2 != R_NilValue) {
        SET_STRING_ELT(ns, n1 + i, STRING_ELT(ns2, i));
      } else {
        SET_STRING_ELT(ns, n1 + i, R_BlankString);
      }
    }

    Rf_setAttrib(v, R_NamesSymbol, ns);
    UNPROTECT(1);
  }

  UNPROTECT(1);
  return v;
}

SEXP append_elem(SEXP vec, SEXP element) {
  int n = LENGTH(vec);
  SEXP v = PROTECT(Rf_allocVector(VECSXP, n + 1));

  for (int i = 0; i < n; i++) {
    SET_VECTOR_ELT(v, i, VECTOR_ELT(vec, i));
  }

  SET_VECTOR_ELT(v, n, element);

  SEXP names = Rf_getAttrib(vec, R_NamesSymbol);
  if (names != R_NilValue) {
    SEXP ns = PROTECT(Rf_allocVector(STRSXP, n + 1));
    for (int i = 0; i < n; i++) {
      SET_STRING_ELT(ns, i, STRING_ELT(names, i));
    }
    SET_STRING_ELT(ns, n, R_BlankString);
    Rf_setAttrib(v, R_NamesSymbol, ns);
    UNPROTECT(1);
  }

  UNPROTECT(1);
  return v;
}
