execute <- function(n) {
  x <- vector(length=n)
  i <- 1
  while (i < n) {
    x[[i]] <- i
    i <- i + 1
  }
}
