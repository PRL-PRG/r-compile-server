#? gcTorture
# `f` passes `x` to `g`, which keeps the promise in a closure, and then rebinds `x`. `k()` forces
# the promise after `f` returns, so it gives the new binding, 99. The optimized `f` can wrap the
# value of `x` in a promise that reads a register (`StrictifyPromise`), which must not read the
# stack of `f` after `f` returns.
g <- function(a, use) {
  use
  function() if (use) a else 0
}
f <- function(x, use) {
  if (!use) x
  k <- g(x, use)
  x <- 99
  k
}
z <- 1

for (i in 1:12) {
  k <- f(z, i == 12L)
}
k()
