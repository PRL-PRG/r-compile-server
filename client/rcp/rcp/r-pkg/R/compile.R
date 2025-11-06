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

#' Try compile a function
#'
#' This function compiles another function with error handling.
#' @param f The function to compile.
#' @return A compiled function.
#' @export
rcp_tryCmpfun <- function(f) {
  .Call("C_rcp_tryCmpfun", f, PACKAGE = "rcp")
}