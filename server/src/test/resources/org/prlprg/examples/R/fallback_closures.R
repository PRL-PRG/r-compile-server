# Base functions that take a closure, which the test interpreter runs in GNU-R (`GnuRFallback`).
# GNU-R calls the closure back in the interpreter, where it can run a call in GNU-R again
# (`nchar`), draw random numbers (`runif`), and assign to a variable of its parent.
f <- function(x, words) {
  total <- 0
  a <- sapply(x, function(v) {
    total <<- total + v
    v * 2
  })
  b <- Reduce(function(acc, w) acc + nchar(w), words, 0)
  m <- matrix(x, nrow = 2)
  d <- apply(m, 1, function(row) sum(row) + runif(1) * 0)
  e <- do.call(function(p, q) p - q, list(10, 4))
  g <- outer(1:2, 1:3, function(i, j) i * 10 + j)
  h <- Map(function(p, q) p + q, x, rev(x))
  k <- Filter(function(v) v > 2, x)
  list(a, total, b, d, e, g, h, k, vapply(words, toupper, ""))
}

set.seed(1)
r <- NULL
for (i in 1:5) r <- f(c(1, 2, 3, 4), c("ab", "cde", "f"))
r
