typedef struct SEXPREC SEXPREC;
typedef SEXPREC *SEXP;

SEXP Rf_ScalarInteger(int x);

#line 6 "example-2.pir"
SEXP jit_f() {
#line 11 "example-2.pir"
  SEXP _1 = Rf_ScalarInteger(42);
  return _1;
}
