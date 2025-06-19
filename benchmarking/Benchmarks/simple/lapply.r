execute <- function(n) {
  x <- 1:n
  f <- function(x) x + 1.5
  lapply(x, f)
}
