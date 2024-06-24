## usethis namespace: start
#' @useDynLib rsh, .registration = TRUE, .fixes = "C_"
#' @importFrom compiler cmpfun
## usethis namespace: end
NULL

# save the original compiler::cmpfun
.gnur_cmpfun <- compiler::cmpfun


# initialize globals
.onLoad <- function(libname, pkgname) {
  body_bc_tmpl <-
    compiler::compile(
      quote(
        .External2(".PATCH_ADDR", ".PATCH_CLOSURE")
      )
    )

  str(compiler:::disassemble(body_bc_tmpl))

  .Call(C_initialize, body_bc_tmpl, C_call_fun)
}

#' @export
rsh_jit_activate <- function(f) {
    rsh_override_cmpfun(rsh_jit_cmpfun)
}

#' @export
rsh_jit_deactivate <- function(f) {
    rsh_override_cmpfun(.gnur_cmpfun)
}

rsh_override_cmpfun <- function(f) {
  compiler_ns <- getNamespace("compiler")
  unlockBinding("cmpfun", compiler_ns)
  compiler_ns$cmpfun <- f
  lockBinding("cmpfun", compiler_ns)
}

#' @export
rsh_load <- function(obj_file) {
  p <- .Call(C_load_fun, obj_file)
  function(x) {
    .External2(C_call_fun3, p)
  }
}

#' @export
rsh_compile <- function(f) {
  # TODO: move into C++ code
  sf <- serialize(f, NULL, version = 2)
  name <- paste0("f_", digest::digest(sf, algo = "sha1", serialize = FALSE))
  # TODO: this one should return new function
  #  once we return a new function, we can simplify the API - just rsh_cmpfun would be enough
  .Call(C_compile_fun, name, f, sf)
}

#' @export
rsh_jit_cmpfun <- function(f, options) {
  # make a copy - the compiler::cmpfun takes a function and returns a new one with BCSXP body (if possible)
  g <- f
  # compile the copy
  rsh_compile(g)
  # compile the new body into the bytecode so that the R embedded jit still works
  .gnu_cmpfun(g, options=list(optimize=3))
}
