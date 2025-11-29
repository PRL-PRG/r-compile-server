check({
  f <- function(n) {
    m <- n + n
    limit <- 4L
    values <- rep(0, limit)
    last <- 0
    for (i in 1L:limit) {
      current <- (m + i) * (limit - i + 1L)
      if (i >= 2L) {
        last <- last + current
      } else {
        last <- current
      }
      values[i] <- last
    }
    if (m >= 2L) {
      values[[limit]] <- values[[limit]] + 1L
    }
    values
  }

  stopifnot(f(1L) == f(1))
  stopifnot(f(1L) == f(TRUE))
  f(1L)
}, bc2fir.deopt)