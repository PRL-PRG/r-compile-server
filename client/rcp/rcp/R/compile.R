.onLoad <- function(libname, pkgname) {
  .Call("rcp_init");
}

#' Compile a function
#'
#' This function compiles another function with optional settings.
#' @param f The function to compile.
#' @param options Optional settings for compilation.
#' @return A compiled function.
#' @export
rcp_cmpfun <- function(f, options = NULL) {
  .Call("C_rcp_cmpfun", f, options, PACKAGE = "rcp")
}


#' Check if the closure is natively compiled
#'
#' @param f closure to be checked
#' @return TRUE if the closure is compiled, FALSE otherwise
#' @export
is_compiled <- function(f) {
  .Call(C_is_compiled, f)
}

#' Activate the RCP JIT
#'
#' @export
rcp_jit_enable <- function() {
  .Call(C_rcp_jit_enable)
}

#' Deactivate the RCP JIT
#'
#' @export
rcp_jit_disable <- function() {
  .Call(C_rcp_jit_disable)
}

#' Compile all functions in a package to native code
#'
#' This function compiles all functions in a specified package namespace
#' in-place using RCP JIT compilation.
#'
#' @param package Character string naming the package to compile
#' @return A list with counts of successfully compiled and failed functions
#' @export
rcp_cmppkg <- function(package) {
  .Call(C_rcp_cmppkg, package)
}

#' Get profiling data from RCP
#'
#' @export
rcp_get_profiling <- function() {
  .Call(C_rcp_get_profiling)
}

#' Calculate test coverage for a specific function.
#'
#' @param fun name of the function.
#' @param code expressions to run.
#' @param env environment the function is defined in.
#' @param enc the enclosing environment which to run the expressions.
#' @examples
#' add <- function(x, y) { x + y }
#' function_coverage(fun = add, code = NULL) # 0% coverage
#' function_coverage(fun = add, code = add(1, 2) == 3) # 100% coverage
#' @export
rcp_function_coverage <- function(fun, code = NULL, env = NULL, enc = parent.frame()) {
  .Call(C_rcp_function_coverage, fun, code, env, enc)
}
