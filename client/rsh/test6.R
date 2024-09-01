dyn.load("../../external/R/library/rsh/libs/rsh.so", local = FALSE)

f <- function (n) {
  c(1,2) + n
}

rsh <- rsh:::rsh_cmpfun(f, options=list(optimize=3))

f(1) == c(2,3)
stopifnot(f(1) == c(2,3))

g <- function() .External2("Rsh_call_trampoline", 1)
g()
