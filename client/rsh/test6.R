rsh::rsh_jit_enable()
rsh::rsh_jit_disable()


cat("TEST 1\n")
f <- function(x) {
  y <- x + 42
  y + x
}
print(f)
rsh::rsh_compile(f, list(tier = "bytecode", bc_opt = 3L))
print(f)
print(f(5))
stopifnot(f(5) == 52)

cat("TEST 2\n")
# f should be in the compile cache now.
rsh::rsh_compile(f, list(tier = "bytecode", bc_opt = 3L))
print(f)
.Internal(inspect(f))
print(f(5))
stopifnot(f(5) == 52)

cat("TEST 3\n")
# another opt level so it should be recompiled
rsh::rsh_compile(f, list(tier = "bytecode", bc_opt = 2L))
stopifnot(f(5) == 52)


cat("TEST 4\n")
f <- function(x) {
    x + 3
}

# body changed so it should be recompiled
rsh::rsh_compile(f, list(tier = "bytecode", bc_opt = 2L))
#str(compiler::disassemble(f))
stopifnot(f(5) == 8)

cat("TEST 5\n")
# Now native compilation
rsh::rsh_compile(f, list(tier = "native", bc_opt = 3L, cc_opt = 3L))

stopifnot(f(5) == 8)