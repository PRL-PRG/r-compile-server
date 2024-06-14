## usethis namespace: start
#' @useDynLib rsh, .registration = TRUE, .fixes = "C_"
#' @importFrom compiler cmpfun
## usethis namespace: end
NULL

## bootstrap the compiler

.gnur_cmpfun <- compiler::cmpfun

#' @export
rsh_jit <- function(f) {
  compiler_ns <- getNamespace("compiler")
  unlockBinding("cmpfun", compiler_ns)
  compiler_ns$cmpfun <- jit_cmpfun
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
  sf <- serialize(f, NULL, version = 2)
  # print(sf)
  # print(length(sf))
  name <- paste0("f_", digest::digest(sf, algo = "sha1", serialize = FALSE))
  print(name)
  .Call(C_compile_fun, name, f, sf)
}

#' @export
jit_cmpfun <- function(f, options) {
  g <- f
  rsh_compile(g)
  .gnu_cmpfun(g, options=list(optimize=3))
}
