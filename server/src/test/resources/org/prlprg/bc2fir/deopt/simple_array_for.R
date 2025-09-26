main <- function() {
  stopifnot(main2(1) == main2(1L));
  stopifnot(main2(1L) == main2(TRUE));
  main2(1L)
}

main2 <- function(n) {
  m <- n + 1L
  x <- rep(0, m)
  for (i in 1L:m) {
    x[i] <- n * i
  }
  x
}