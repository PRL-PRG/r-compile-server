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
rcp_cmppackage <- function(package) {
  .Call(C_rcp_cmppackage, package)
}