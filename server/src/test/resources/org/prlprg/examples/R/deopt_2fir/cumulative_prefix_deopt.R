check({
  f <- function(n) {
    m <- n + n + n
    limit <- 4L
    totals <- rep(0, limit)
    running <- 0
    value <- n + 0L
    for (i in 1L:limit) {
      step <- (value + i) * i
      running <- running + step
      totals[i] <- running
    }
    totals
  }

  stopifnot(f(1L) == f(1))
  stopifnot(f(1L) == f(TRUE))
  f(1L)
}, bc2fir.deopt)