#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

// Declare the function
SEXP cmpfun(SEXP fun, SEXP options);

// Register the function
static const R_CallMethodDef CallEntries[] = {
    {"cmpfun", (DL_FUNC) &cmpfun, 2},
    {NULL, NULL, 0}
};

// Initialization function
void R_init_mypackage(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}