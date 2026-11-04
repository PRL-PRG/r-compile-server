# `f` forces `x` first, so `StrictifyPromise` would pass `i - 1` to `f` by value. But `f` calls
# `substitute(x)` and `missing(x)` (`@needsPromises`), so `x` must stay `g`'s promise: GNU-R gives
# the expression `i - 1`, not the value.
f <- function(x) {
  y <- x * 2
  list(substitute(x), missing(x), y)
}
g <- function(i) f(i - 1)

# warmup
for (i in 1:12) {
  g(4)
}

g(4)
