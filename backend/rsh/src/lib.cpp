#include "lib.h"

// SEXP Rsh_fast_binary(BINARY_OP op, SEXP x, SEXP y) {
//
//     if (TYPEOF(x) == REALSXP && TYPEOF(y) == REALSXP) {
//         return Rf_ScalarReal(REAL(x)[0] + REAL(y)[0]);
//     }
//
//     Rf_error("Unsupported type");
//     return R_NilValue;
//
// }
