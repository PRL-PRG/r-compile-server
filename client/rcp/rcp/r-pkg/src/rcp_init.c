#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

// Declare the function
extern SEXP C_rcp_cmpfun(SEXP fun, SEXP options);
extern void rcp_init();
extern void rcp_destr();

// Register the function
static const R_CallMethodDef CallEntries[] = {
    {"C_rcp_cmpfun", (DL_FUNC) &C_rcp_cmpfun, 2},
    {NULL, NULL, 0}
};

// Initialization function
void R_init_rcp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    rcp_init();
}

// Unloading function
void R_unload_rcp(DllInfo *dll) {
    rcp_destr();
}