# The promise `w[1]` reads a constant vector, so the optimizer folds the subscript. The `[` version
# returns a SEXP (`v1(R)`), so the folded element must be the boxed `<real 1.0>`, not the unboxed
# `1.0`. The closure keeps the promise, and `v[1] <- 100` must not change `w`.
keep <- NULL
g <- function(a) {
  keep <<- function() a
  NULL
}
f <- function() {
  v <- c(1, 2, 3)
  w <- v
  g(w[1])
  v[1] <- 100
  keep()
}
for (i in 1:12) r <- f()
r
