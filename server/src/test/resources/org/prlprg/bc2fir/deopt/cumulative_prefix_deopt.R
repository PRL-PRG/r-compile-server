main <- function() {
  stopifnot(main2(1) == main2(1L));
  stopifnot(main2(1L) == main2(TRUE));
  main2(1L)
}

main2 <- function(n) {
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
