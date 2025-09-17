execute <- function(size = 10000L) {
  set.seed(1)
  f <- function(n, m, r) {
    s <- sample(1:n)
    a <- vector("list", n)
    for (i in 1:r) {
      for (j in s) a[[j]] <- integer(m)
      for (j in s) a[[j]] <- integer(3 * m)
      for (j in s) a[[j]] <- integer(5 * m)
    }
  }
  f(size, 10, 20)
}