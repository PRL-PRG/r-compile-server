dyn.load("../../../resources/R-4.3.2/library/rsh/libs/rsh.so", local = FALSE)

f <- function(x) {
  y <- x + 42
  y + x
}

rsh::enable_bc_jit()
compiler::cmpfun(f)
print(f)

f(5)
rm(f)
gc()
