#include <R.h>
#include <Rinternals.h>
#include <stdexcept>

extern "C" {

// Throws a C++ exception. Called from JIT code via .Call.
SEXP __rcp_throw_exception(void)
{
	throw std::runtime_error("rcp test exception");
	return R_NilValue; // unreachable
}

// Evaluates expr in env inside try-catch. Returns TRUE if a C++ exception
// was caught (meaning unwinding through JIT frames succeeded).
SEXP __rcp_test_catch(SEXP expr, SEXP env)
{
	try {
		Rf_eval(expr, env);
		return ScalarLogical(FALSE); // no exception
	} catch (const std::exception& e) {
		return ScalarLogical(TRUE);  // caught!
	} catch (...) {
		return ScalarLogical(TRUE);
	}
}

} // extern "C"
