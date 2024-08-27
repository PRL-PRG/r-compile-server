dyn.load("../../../resources/R-4.3.2/library/rsh/libs/rsh.so", local = FALSE)

f <- function (n) {
  c(1,2) + n
}

rsh <- rsh:::rsh_cmpfun(f, options=list(optimize=3L))

stopifnot(f(1) == c(2,3))
