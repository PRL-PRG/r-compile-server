dyn.load("../../external/R/library/rsh/libs/rsh.so", local = FALSE)

f <- function(x) {
  y <- x + 42
  y + x
}

rsh::enable_rsh_jit()
print(f)

f(5)
f(5)
f(5)

print(f)
.Internal(inspect(f))
