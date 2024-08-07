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
enable_rsh_jit <- function() {
  rsh_override_cmpfun(rsh_cmpfun)
}

#' Activate the bytecode JIT
#'
#' @export
enable_bc_jit <- function() {
  rsh_override_cmpfun(bc_cmpfun)
}

#' Deactivate JIT compilation via the server
#'
#' @export
disable_remote_jit <- function() {
  rsh_override_cmpfun(.gnur_cmpfun)
}

#' Compile given closure
#'
#' It compiles the given closure and changes it inplace.
#'
#' @param f closure to be compiled
#' @export
rsh_compile <- function(f, name, opt_level = 0L) {
  if (missing(name)) {
    name <- as.character(substitute(f))
  }
  invisible(.Call(C_compile_fun, f, name, opt_level))
}

#' Compile given closure to bytecode
#'
#' Changes the closure in place.
#' @param f the closure to be compiled
#' @export
bc_compile <- function(f, name) {
  if (missing(name)) {
    name <- as.character(substitute(f))
  }
  invisible(.Call(C_bc_compile_fun, f, name))
}

#' Compile given closure
#'
#' It makes a copy the given closure and compiles it.
#'
#' @param f closure to be compiled
#' @param options list of options
#' @return compiled closure
#' @export
rsh_cmpfun <- function(f, options=list(optimize=0L)) {
  # make a copy - the compiler::cmpfun takes a function and returns
  # a new one with BCSXP body (if possible)
  g <- f
  # compile the copy
  rsh_compile(g, as.character(substitute(f)), options$optimize)
  g
}

#' Compile given closure to bytecode
#'
#' It makes a copy of the given closure and compiles it to bytecode
#'
#' Changes the closure in place.
#' @param f the closure to be compiled
#' @export
bc_cmpfun <- function(f, name) {
  if (missing(name)) {
    name <- as.character(substitute(f))
  }
  invisible(.Call(C_bc_compile_fun, f, name))
}

rsh_override_cmpfun <- function(f) {
  compiler_ns <- getNamespace("compiler")
  unlockBinding("cmpfun", compiler_ns)
  compiler_ns$cmpfun <- f
  lockBinding("cmpfun", compiler_ns)
}

