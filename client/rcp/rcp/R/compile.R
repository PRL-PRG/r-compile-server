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

#' Get recorded type information from entry/exit hooks
#'
#' Returns an environment where each key is a function name and each value
#' is a list of call records. Each record has \code{arguments} (integer vector
#' of SEXPTYPEs) and \code{ret} (integer SEXPTYPE of the return value).
#'
#' @export
rcp_get_types <- function() {
  .Call(C_rcp_get_types)
}

#' Get a data frame of traced types for a given function
#'
#' Returns a data frame with one row per traced call. Columns are one per
#' formal argument of the function (named after those arguments), zero or
#' more columns for expanded \code{...} arguments (if present), a
#' \code{dots_count} column giving the number of \code{...} arguments for
#' that call, and a \code{ret} column for the return type. Types are shown
#' as character strings.
#'
#' @param func_name Character string naming the function to query.
#' @return A data.frame, or NULL if no type data is available.
#' @export
rcp_get_types_df <- function(func_name) {
  .Call(C_rcp_get_types_df, func_name)
}
