# `f` forces `n` first, so `g` can pass `i - 1` to a strict version of `f`, which wraps the value
# back into a promise. `missing` and the base closure `isTRUE` (whose builtin calls take the symbol
# `x`, so GNU-R checks it for missingness) read that promise's expression. The warmup skips
# `isTRUE`, which the FIŘ interpreter can't call.
f <- function(n, test) {
  m <- n * 2
  if (test) c(missing(n), isTRUE(n), m) else c(missing(n), m)
}
g <- function(i, test) f(i - 1, test)

# warmup
for (i in 1:12) {
  g(4, FALSE)
}

c(g(4, FALSE), g(4, TRUE))
