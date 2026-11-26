# `f` forces `x`, so the optimized `g` passes it a promise that captures the SEXP register of `b`
# (`v(I)`). The promise's data then has one element per SEXP capture after `[expr, cp, local_data]`.
# `substitute(x)` must still give the expression `b[1L] + 1`, not the promise's code pointer.
f <- function(x) {
  x
  substitute(x)
}
g <- function(a) {
  b <- c(a, a)
  f(b[1L] + 1)
}
for (i in 1:12) r <- g(i)
r
