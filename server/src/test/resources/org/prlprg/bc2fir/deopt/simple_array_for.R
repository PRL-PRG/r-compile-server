main <- function() { stopifnot(main2(42) == main2(42L)); main2(42L) }
main2 <- function(n) {
  m <- n - 40L
  x <- rep(0, m)
  for (i in 1L:m) {
    x[i] <- n * i
  }
  x
}