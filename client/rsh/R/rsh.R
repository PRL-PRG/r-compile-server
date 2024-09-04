## usethis namespace: start
#' @importFrom compiler cmpfun
## usethis namespace: end
NULL

# save the original compiler::cmpfun
.gnur_cmpfun <- compiler::cmpfun

# Because of the ORC JIT we need all the native symbols registered globally
# (as RTLD_GLOBAL) so the ORC linker can find them. Unfortunatelly, R does
# not provide a way to instruct the namespace loader to load pass the
# local = FALSE flag to dyn.load. This is a workaround in which we
# manually load the shared object and register all the symbols in the
# rsh namespace.
#
# Note: this only works as long as there is no useDynLib directive in
# the NAMESPACE file.
.onLoad <- function(libname, pkgname) {
  so <- library.dynam("rsh", pkgname, lib.loc=.libPaths(), local=FALSE)
  symbols <- getDLLRegisteredRoutines(so, addNames=FALSE)
  env <- getNamespace(pkgname)
  lapply(symbols,
    function(type) {
      lapply(type,
        function(sym) {
          var_name <- paste0("C_", sym$name)
          env[[var_name]] <- sym
        }
      )
    }
  )

  .Call(C_initialize)
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
rsh_compile <- function(f, name, opt_level = rsh_bc2c_opt_level()) {
  if (missing(name)) {
    name <- as.character(substitute(f))
  }
  invisible(.Call(C_compile_fun, f, name, as.integer(opt_level)))
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

