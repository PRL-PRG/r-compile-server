#include <Rsh.h>

SEXP jit_f(SEXP ENV) {
  SEXP CP[] = {NULL, NULL};

  SEXP _0 = NULL, _1 = NULL;

  // begin: GetVar[name=1]
  _0 = PROTECT(Rf_findVar(CP[0] == NULL ? Rf_install("x") : CP[0], ENV));
  // end: GetVar[name=1]

  // begin: LdConst[constant=2]
  _1 = PROTECT(CP[1] == NULL ? PROTECT(Rf_ScalarInteger(42)) : CP[1]);
  // end: LdConst[constant=2]

  // begin: Add[ast=0]
  UNPROTECT(1); // _1
  UNPROTECT(1); // _0
  _0 = PROTECT(Rsh_fast_binary(ADD, _1, _0));
  // end: Add[ast=0]

  // begin: Return[]
  UNPROTECT(1); // _0
  return _0;
  // end: Return[]
}
