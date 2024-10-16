execute <- function(n=20000000) {
  x <- integer(length=n)
  i <- 1L
  while (i < n) {
    x[[i]] <- i
    i <- i + 1L
  }
  sum(x)
}
