# Verify that compiler::cmpfun properly uses the server after calling
# rsh::enable_bc_jit()

dyn.load(file.path(R.home(), "library", "rsh", "libs", "rsh.so"), local = FALSE)

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
