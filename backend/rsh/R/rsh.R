## usethis namespace: start
#' @useDynLib rsh, .registration = TRUE, .fixes = "C_"
#' @importFrom compiler cmpfun
## usethis namespace: end
NULL

# save the original compiler::cmpfun
.gnur_cmpfun <- compiler::cmpfun

# initialize globals
.onLoad <- function(libname, pkgname) {
  # TODO: it would be great to make this go away and initialize this in C
  .Call(C_initialize, C_call_fun)
}

#' Activate the Rsh JIT
#'
#' @export
rsh_jit_enable <- function() {
    rsh_override_cmpfun(rsh_cmpfun)
}

#' Deactivate the Rsh JIT
#'
#' @export
rsh_jit_disable <- function() {
    rsh_override_cmpfun(.gnur_cmpfun)
}

#' Compile given closure
#'
#' It compiles the given closure and changes it inplace.
#'
#' @param f closure to be compiled
#' @export
rsh_compile <- function(f) {
  invisible(.Call(C_compile_fun, f, as.character(substitute(f))))
}

#' Compile given closure
#'
#' It makes a copy the given closure and compiles it.
#'
#' @param f closure to be compiled
#' @param options list of options
#' @return compiled closure
#' @export
rsh_cmpfun <- function(f, options) {
  # make a copy - the compiler::cmpfun takes a function and returns
  # a new one with BCSXP body (if possible)
  g <- f
  # compile the copy
  rsh_compile(g)
  g
}

rsh_override_cmpfun <- function(f) {
  compiler_ns <- getNamespace("compiler")
  unlockBinding("cmpfun", compiler_ns)
  compiler_ns$cmpfun <- f
  lockBinding("cmpfun", compiler_ns)
}

