#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

// Declare the function
extern SEXP C_rcp_cmpfun(SEXP f, SEXP options);
extern SEXP C_rcp_tryCmpfun(SEXP f);
extern SEXP C_is_compiled(SEXP closure);
extern SEXP C_rcp_jit_enable(void);
extern SEXP C_rcp_jit_disable(void);
extern SEXP C_rcp_cmppackage(SEXP pkg);
extern void rcp_init(void);
extern void rcp_destr(void);

// Register the function
static const R_CallMethodDef CallEntries[] = {
    {"C_rcp_cmpfun", (DL_FUNC) &C_rcp_cmpfun, 2},
    {"C_rcp_tryCmpfun", (DL_FUNC) &C_rcp_tryCmpfun, 1},
    {"is_compiled", (DL_FUNC) &C_is_compiled, 1},
    {"rcp_jit_enable", (DL_FUNC) &C_rcp_jit_enable, 0},
    {"rcp_jit_disable", (DL_FUNC) &C_rcp_jit_disable, 0},
    {"rcp_cmppackage", (DL_FUNC) &C_rcp_cmppackage, 0},
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