#' Compile a function
#'
#' This function compiles another function with optional settings.
#' @param f The function to compile.
#' @param options Optional settings for compilation.
#' @return A compiled function.
#' @export
cmpfun <- function(f, options = NULL) {
  .Call("cmpfun", f, options, PACKAGE = "rcp")
}