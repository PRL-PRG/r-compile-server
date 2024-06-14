## usethis namespace: start
#' @useDynLib rsh, .registration = TRUE, .fixes = "C_"
#' @importFrom compiler cmpfun
## usethis namespace: end
NULL

## bootstrap the compiler

# .compiled_fun <- function() {
#   .Call(driver, p)
# }
# .compiled_fun <- compiler::cmpfun(.compiled_fun, options = list(optimize = 3))
#
# .compiler_ns <- getNamespace("compiler")
#
#
# # unlockBinding("cmpfun", .compiler_ns)
# cmpfun <- function(f, options = NULL) {
#   print("Compiling...")
#   body(f) <- body(.compiled_fun)
#   f
# }

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

