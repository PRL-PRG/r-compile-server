main <- function() {
  x <- rep(0, 100)
  for (i in 1:100) {
    x[i] <- i * 2
  }
  x
}