execute <- function(size = 128L) {
  f <- function(x, y, n) {
    if (n < 1) return(x + y)
    a <- c(x, 1.1) + y
    for (i in 1:5) {
      b <- as.integer(1234 * a)
      a <- f(x + 0.1, b/2000, n/2)
    }
    return(a)
  }
  f(3.1, c(0.3, 1.3), size)
}