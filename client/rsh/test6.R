dyn.load("../../external/R/library/rsh/libs/rsh.so", local = FALSE)

rsh::rsh_jit_enable()
rsh::rsh_jit_disable()

f <- function(x) {
  y <- x + 42
  y + x
}

print(f)

rsh::rsh_compile(f, tier = "bytecode", opt_level = 3L)
print(f)

print(f(5))

stopifnot(f(5) == 52)

# f should be in the compile cache now.
rsh::rsh_compile(f, tier = "bytecode", opt_level = 3L)

stopifnot(f(5) == 52)

# another opt level so it should be recompiled
rsh::rsh_compile(f, tier = "bytecode", opt_level = 2L)

stopifnot(f(5) == 52)