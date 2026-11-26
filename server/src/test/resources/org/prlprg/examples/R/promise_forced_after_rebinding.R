# `g(x, use)` makes the promise `a`, which the closure that `f` returns keeps. `f` rebinds `x`
# after the call, and `k()` forces `a` after `f` returns, so it gives the new binding, 99.
g <- function(a, use) {
  use
  function() if (use) a else 0
}
f <- function(use) {
  x <- 1
  k <- g(x, use)
  x <- 98 + use
  k
}

for (i in 1:12) {
  k <- f(i == 12L)
}
k()
