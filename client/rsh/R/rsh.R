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

   # for the client, so that it is not GC-ed
  env[[".rsh_client"]] <- init_client("0.0.0.0", 8980L)
}

#' Initialize the Rsh client
#'
#' @param address IP address of the server
#' @param port port of the server
#' @export
init_client <- function(address="0.0.0.0", port=8980L) {
  .rsh_client <- .Call(C_init_client, address, port, installed.packages()[,1])
  .rsh_client
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

  if(is.null(options$tier)) {
    options$tier <- "optimized"
  }

  if(is.null(options$cache)) {
    options$cache <- TRUE
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
  if (missing(options)) {
    options <- list()
  }
  stopifnot(is.list(options))

  if (!is.null(options$optimize)) {
    options$bc_opt <- as.integer(options$optimize)
    options$optimize <- NULL
  }

  # FIXME: this does not work, we need to find the closure in the an environment
  options$name <- as.character(substitute(f))
  options$inplace <- FALSE

  rsh_compile(f, options)
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

#' Get the total size of the messages sent 
#' and received by the server, in bytes
#' @return integer vector of size 2, the first element is the total size of requests, 
#' and the second element is the total size of responses
#' @export 
rsh_total_size <- function() {
  .Call(C_get_total_size)
}

#' Clear both the bytecode cache and the native cache of the Rsh server
#' @export
rsh_clear_cache <- function() {
  .Call(C_clear_cache)
}
