execute <- function(n=10000000) {
  s <- 0
  i <- 0
  while (i < n) {
    s <- s + i
    i <- i + 1
  }
  s
}
