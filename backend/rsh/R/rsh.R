## usethis namespace: start
#' @useDynLib rsh, .registration = TRUE, .fixes = "C_"
#' @importFrom compiler cmpfun
## usethis namespace: end

## bootstrap the compiler

.compiled_fun <- function() {
  .Call(driver, p)
}
.compiled_fun <- compiler::cmpfun(.compiled_fun, options = list(optimize = 3))

.compiler_ns <- getNamespace("compiler")


# unlockBinding("cmpfun", .compiler_ns)
cmpfun <- function(f, options = NULL) {
  print("Compiling...")
  body(f) <- body(.compiled_fun)
  f
}


NULL

