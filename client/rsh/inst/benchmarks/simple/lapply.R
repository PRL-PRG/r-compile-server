execute <- function(n=1000000) {
  x <- 1:n
  f <- function(x) x + 1.5
  lapply(x, f)
}
