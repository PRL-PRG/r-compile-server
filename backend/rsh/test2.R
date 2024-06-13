# devtools::install()

dyn.load("../../../resources/R-4.3.2/library/rsh/libs/rsh.so", local = FALSE)

f <- rsh::rsh_load("/tmp/jit.o")

f(5)
