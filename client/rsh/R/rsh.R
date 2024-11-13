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
#' @param options list of BC2C compiler options
#' @export
rsh_compile <- function(f, options) {
  if (missing(options)) {
    options <- list()
  }
  if (!is.list(options)) {
    stop("options must be a list")
  }

  # FIXME: this does not work, we need to find the closure in the environment
  if (is.null(options$name)) {
    options$name <- as.character(substitute(f))
  }

  if (is.null(options$inplace)) {
    options$inplace <- TRUE
  }

  invisible(.Call(C_compile, f, options))
}

#' Compile given closure
#'
#' It makes a copy the given closure and compiles it.
#'
#' @param f closure to be compiled
#' @param options list of GNU R bytecode compiler options
#' @return compiled closure
#' @export
rsh_cmpfun <- function(f, options) {
  o <- list()

  if (!missing(options) && is.list(options)) {
    if (!is.null(options$optimize)) {
      o$bc_opt <- as.integer(options$optimize)
      o$cc_opt <- o$bc_opt
    }
    if (!is.null(options$cc_opt)) {
      o$cc_opt <- as.integer(options$cc_opt)
    }
  }

  # FIXME: this does not work, we need to find the closure in the an environment
  o$name <- as.character(substitute(f))
  o$inplace <- FALSE

  rsh_compile(f, o)
}

#' Check if the closure is natively compiled
#'
#' @param f closure to be checked
#' @return TRUE if the closure is compiled, FALSE otherwise
#' @export
is_compiled <- function(f) {
  .Call(C_is_compiled, f)
}

rsh_override_cmpfun <- function(f) {
  compiler_ns <- getNamespace("compiler")
  unlockBinding("cmpfun", compiler_ns)
  compiler_ns$cmpfun <- f
  lockBinding("cmpfun", compiler_ns)
}

