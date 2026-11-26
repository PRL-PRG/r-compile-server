# `f` forces `n` first, so `g` passes `i - 1` to `f` strictly (by value). `missing(n)` and the base
# closure `isTRUE` then read the parameter. The warmup skips `isTRUE`, which the FIŘ interpreter
# can't call. (`value_promise_missing.fir` tests the wrapper promise that `StrictifyPromise` makes.)
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
