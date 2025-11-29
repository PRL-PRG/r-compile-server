check({
  f <- function(n) {
    m <- n + 1L
    x <- rep(0, m)
    for (i in 1L:m) {
      x[i] <- n * i
    }
    x
  }

  stopifnot(f(1L) == f(1))
  stopifnot(f(1L) == f(TRUE))
  f(1L)
}, bc2fir.deopt)