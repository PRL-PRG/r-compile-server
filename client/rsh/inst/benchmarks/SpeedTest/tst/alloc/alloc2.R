execute <- function(size = 8L) {
  f <- function(x, y, n) {
    if (n < 1) return(x + y)
    for (k in 1:3) {
      a <- c(x, y, 1.1)
      for (i in 1:2) {
        b <- as.integer(123 * a)
        d <- as.logical(b)
        a <- f(0.11 * d, 0.32 * a, n / 2)
      }
    }
    return(a)
  }
  a<-f(c(1.3, 5.1), c(0.3, 1.3), size)
  list(a[1],a[length(a)],sum(a))
}