dyn.load("../../../resources/R-4.3.2/library/rsh/libs/rsh.so", local = FALSE)

f <- function(x) {
  y <- x + 42
  y + x
}

rsh::rsh_compile(f)
print(f)

str(compiler::disassemble(f))

browser()
f(5)
rm(f)
gc()
