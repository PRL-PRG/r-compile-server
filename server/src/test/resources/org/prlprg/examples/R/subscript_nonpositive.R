#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")
# Scalar subscripts at most 0 in typed versions: `x[[i]]` follows GNU-R's `integerOneIndex`, and
# `x[i]` is one element only in a vector of 1 or 2 elements. Otherwise `x[i]` isn't a scalar, so the
# version deopts (C deopt isn't implemented yet, so this is an error). And `s[[i]]` of a string `NA`
# is `NA`, not "NA".
f <- function(x, i) x[i]
g <- function(x, i) x[[i]]
gs <- function(s, i) s[[i]]
for (k in 1:20) for (i in 1:2) {
  f(c(10, 20, 30), i)
  g(c(5, 6), i)
  gs(c("a", "b"), i)
}
# The interpreter has no `$`, so the feedback stops here and doesn't see the indices below 1.
invisible(.Machine$integer.max)
check <- function(value, expected) if (!identical(value, expected)) stop("wrong value")
check(g(c(5, 6), -1L), 6)
check(g(c(5, 6), -2L), 5)
check(tryCatch(g(c(5, 6), 0L), error = conditionMessage),
      "attempt to select less than one element in integerOneIndex")
check(f(c(5, 6), -1L), 6)
check(f(5, -2L), 5)
check(f(c(10, 20, 30), 4L), NA_real_)
check(gs(c("a", NA), 2L), NA_character_)
f(c(10, 20, 30), -1L)
