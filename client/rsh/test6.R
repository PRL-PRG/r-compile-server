dyn.load("../../external/R/library/rsh/libs/rsh.so", local = FALSE)

rsh::rsh_jit_enable()
rsh::rsh_jit_disable()

f <- function(x) {
  y <- x + 42
  y + x
}

print(f)

rsh::rsh_compile(f, tier = "bytecode")
print(f)

print(f(5))

stopifnot(f(5) == 52)