dyn.load("../../external/R/library/rsh/libs/rsh.so", local = FALSE)

f <- function (n) {
  c(1,2) + n
}

rsh <- rsh:::rsh_cmpfun(f)

stopifnot(f(1) == c(2,3))
