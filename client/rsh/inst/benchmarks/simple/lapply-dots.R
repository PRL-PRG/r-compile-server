execute <- function(n=1000000) {
  x <- 1:n
  f <- function(x, y) x + 1.5 * y
  a <- n / 2
  lapply(x, f, y=a)
}
