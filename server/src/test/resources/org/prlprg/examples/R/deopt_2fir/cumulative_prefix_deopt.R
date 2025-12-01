#? [bc2fir]deopt
main <- function(n = 1L) {
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