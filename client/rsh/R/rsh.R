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
  # TODO(jakob): this may not be necessary,
  # but with my setup I get a missing LLVM symbol if this isn't explicitly loaded
  llvmConfigCandidates <- c(
    "llvm-config-17",
    "/opt/homebrew/Cellar/llvm@17/*/bin/llvm-config",
    "/usr/local/Homebrew/Cellar/llvm@17/*/bin/llvm-config"
  )
  for (config in llvmConfigCandidates) {
    llvmLib <- try(system(paste(config, "--libfiles"), intern=TRUE, ignore.stderr=TRUE), silent=TRUE)
    if (class(llvmLib) != "try-error") {
      break
    }
  }
  if (class(llvmLib) == "try-error") {
    stop("You must install llvm-17 from apt or 'brew install llvm@17'")
  }
  dyn.load(llvmLib, local=FALSE)

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
#' From now on, GNU-R's JIT compiles closures with [rsh_cmpfun()], which makes them move through
#' the tiers [rsh_jit_tier()] reports: a closure runs its bytecode for `threshold` calls, then a
#' baseline (the bytecode compiled by the copy-and-patch JIT, if available, which records
#' feedback) for `threshold` more, then asks the compile server (see [rsh_fir_connect()]) to
#' compile it, with that feedback, into native code, which it runs from then on.
#'
#' @param threshold how many calls a closure runs in a tier before it moves to the next one. The
#'   last call of this or [rsh_fir_connect()] sets it.
#' @export
rsh_jit_enable <- function(threshold = 10L) {
    .Call(C_set_jit_threshold, as.integer(threshold))
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

#' Compile given closure for the Rsh JIT
#'
#' It compiles the given closure to bytecode with GNU-R's compiler, and returns a copy whose body
#' counts calls to move the closure through the JIT's tiers (see [rsh_jit_enable()]). This is the
#' compile hook [rsh_jit_enable()] installs.
#'
#' @param f closure to be compiled
#' @param options list of GNU R bytecode compiler options, and `name`, the name the compile server
#'   gives the closure's function (by default the one it's called by when it asks the server)
#' @return compiled closure
#' @export
rsh_cmpfun <- function(f, options) {
  if (missing(options)) {
    options <- list()
  }
  stopifnot(is.list(options))

  compiled <- .gnur_cmpfun(f, options)
  .Call(C_rsh_jit_closure, compiled, options$name, C_rsh_tier)
}

#' Get the Rsh JIT tier of a closure
#'
#' @param f closure
#' @return `"interpreted"` if `f` didn't run `threshold` times since [rsh_cmpfun()] compiled it
#'   (or it never did), `"baseline"` if it did, and `"optimized"` once it runs code compiled by the
#'   compile server (see [rsh_jit_enable()])
#' @export
rsh_jit_tier <- function(f) {
  .Call(C_rsh_jit_tier, f)
}

#' Check if the closure is natively compiled
#'
#' By [rsh_compile()], or by the compile server for the Rsh JIT.
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

#' Connect the Rsh JIT and the stubs in compiled FIR code to the compile server
#'
#' Once connected, the JIT asks the server to compile closures that ran their baseline often
#' enough (see [rsh_jit_enable()]). A stub stands for a function version the server hasn't
#' compiled yet. Once connected, a stub asks the server to compile its version when it's called
#' `threshold` times (meanwhile running a fallback), and replaces itself with the compiled version
#' once it arrives, or keeps running the fallback if the server answers that the version is the
#' same.
#'
#' @param address IP address of the server
#' @param port port of the server
#' @param deterministic whether a stub's first call after it asked for its version waits for the
#'   answer, and a closure's first call after it asked for its compiled code waits for it, so that
#'   which calls run what doesn't depend on how long compiling takes (for tests)
#' @param threshold if not `NULL`, the JIT threshold to set (see [rsh_jit_enable()])
#' @export
rsh_fir_connect <- function(address="0.0.0.0", port=8980L, deterministic=FALSE, threshold=NULL) {
  if (!is.null(threshold)) {
    threshold <- as.integer(threshold)
  }
  invisible(.Call(C_fir_connect, address, as.integer(port), deterministic, threshold))
}

#' Wait until the compile server has answered every request FIR stubs made so far
#'
#' The answers aren't loaded: a stub loads what has arrived the next time it's called.
#' @export
rsh_fir_drain <- function() {
  invisible(.Call(C_fir_drain))
}
