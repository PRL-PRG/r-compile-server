#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

// Declare the function
extern SEXP C_rcp_cmpfun(SEXP f, SEXP options);
extern SEXP C_rcp_is_compiled(SEXP closure);
extern SEXP C_rcp_jit_enable(void);
extern SEXP C_rcp_jit_disable(void);
extern SEXP C_rcp_cmppkg(SEXP pkg);
extern SEXP C_rcp_get_profiling(void);
extern SEXP C_rcp_s3_generics_deactivated(void);
extern SEXP C_rcp_get_types(void);
extern SEXP C_rcp_get_types_df(SEXP func_name);
extern SEXP C_rcp_dwarf_support(void);
extern SEXP C_rcp_gdb_jit_support(void);
extern SEXP C_rcp_perf_jit_support(void);
extern SEXP rcp_init(void);
extern void rcp_destr(void);
extern SEXP C_rcp_build_info(void);
extern SEXP __rcp_throw_exception(void);
extern SEXP __rcp_test_catch(SEXP expr, SEXP env);

// Register the function
static const R_CallMethodDef CallEntries[] = {
	{"C_rcp_cmpfun", (DL_FUNC)&C_rcp_cmpfun, 2},
	{"rcp_is_compiled", (DL_FUNC)&C_rcp_is_compiled, 1},
	{"rcp_jit_enable", (DL_FUNC)&C_rcp_jit_enable, 0},
	{"rcp_jit_disable", (DL_FUNC)&C_rcp_jit_disable, 0},
	{"rcp_cmppkg", (DL_FUNC)&C_rcp_cmppkg, 1},
	{"rcp_get_profiling", (DL_FUNC)&C_rcp_get_profiling, 0},
	{"rcp_s3_generics_deactivated", (DL_FUNC)&C_rcp_s3_generics_deactivated, 0},
	{"rcp_get_types", (DL_FUNC)&C_rcp_get_types, 0},
	{"rcp_get_types_df", (DL_FUNC)&C_rcp_get_types_df, 1},
	{"rcp_dwarf_support", (DL_FUNC)&C_rcp_dwarf_support, 0},
	{"rcp_gdb_jit_support", (DL_FUNC)&C_rcp_gdb_jit_support, 0},
	{"rcp_perf_jit_support", (DL_FUNC)&C_rcp_perf_jit_support, 0},
	{"C_rcp_build_info", (DL_FUNC)&C_rcp_build_info, 0},
	{"rcp_init", (DL_FUNC)&rcp_init, 0},
	{"__rcp_throw_exception", (DL_FUNC)&__rcp_throw_exception, 0},
	{"__rcp_test_catch", (DL_FUNC)&__rcp_test_catch, 2},
	{NULL, NULL, 0}};

// Initialization function
void R_init_rcp(DllInfo *dll)
{
	R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
	R_useDynamicSymbols(dll, FALSE);
}

// Unloading function
void R_unload_rcp(DllInfo *dll)
{
	rcp_destr();
}
