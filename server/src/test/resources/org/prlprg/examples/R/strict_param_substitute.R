# `f` forces `n` first and calls itself, the shape where `StrictifyPromise` passes promises by
# value. But `f` calls `substitute(n)` and `missing(n)` (`@needsPromises`), so `n` must stay the
# caller's promise: GNU-R gives the expression `n - 1` (5 characters), not the value (1 character).
# (Currently `StrictifyPromise`'s reflection check also skips this call.) The warmup skips
# `nchar(deparse(...))`, which the FIŘ interpreter can't call.
f <- function(n, test) {
  if (n <= 1) {
    return(if (test) nchar(deparse(substitute(n))) + missing(n) + 0.5 else n)
  }
  f(n - 1, test) + f(n - 2, test)
}

# warmup
for (i in 1:12) {
  f(4, FALSE)
}

f(4, TRUE)
