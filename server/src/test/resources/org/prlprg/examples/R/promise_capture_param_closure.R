#? gcTorture
# The optimized `f` passes `x` to `g` in a promise that reads the parameter register `x`. In the
# last call, `g` keeps the promise in a closure, which forces it after `f` returns.
g <- function(a, use) {
  use
  function() if (use) a else 0
}
f <- function(x, use) {
  if (!use) x
  k <- g(x, use)
  k
}
z <- 1

for (i in 1:12) {
  k <- f(z, i == 12L)
}
k()
