execute <- function(n=25000000) {
  x <- 0
  i <- 0
  while (i < n) {
    x <- i
    i <- i + 1
  }
  c(x, i)
}
