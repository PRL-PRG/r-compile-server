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
  .Call(C_initialize)
  init_client("0.0.0.0", 8980L)
}

#' Initialize the Rsh client
#'
#' @param address IP address of the server
#' @param port port of the server
#' @export
init_client <- function(address="0.0.0.0", port=8980L) {
  .Call(C_init_client, address, port, installed.packages()[,1])
}

rsh_bc2c_opt_level <- function() {
  as.integer(Sys.getenv("RSH_BC2C_OPT", unset = "0"))
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
rsh_compile <- function(f, name, opt_level = rsh_bc2c_opt_level(), tier = "optimized") {
  if (missing(name)) {
    name <- as.character(substitute(f))
  }
  invisible(.Call(C_compile_fun, f, name, as.integer(opt_level), tier))
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
  # FIXME: this does not seem to do what I think it should
  # make a copy - the compiler::cmpfun takes a function and returns
  # a new one with BCSXP body (if possible)
  g <- f

  if (missing(options)) {
    options <- list()
  }

  if (!is.list(options)) {
    stop("options must be a list")
  }
  options <- utils::modifyList(list(optimize = rsh_bc2c_opt_level()), options)
  print(options)

  rsh_compile(g, name = as.character(substitute(f)), opt_level = options$optimize)

  g
}

rsh_override_cmpfun <- function(f) {
  compiler_ns <- getNamespace("compiler")
  unlockBinding("cmpfun", compiler_ns)
  compiler_ns$cmpfun <- f
  lockBinding("cmpfun", compiler_ns)
}

