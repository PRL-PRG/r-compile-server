execute <- function(n=2000000L) {
  x <- integer(length=n)
  i <- 1L
  while (i < n) {
    x[[i]] <- i
    i <- i + 1L
  }
  sum(x)
}
