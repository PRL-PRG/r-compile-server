#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")
# The unboxed `:` is GNU-R's: `NA`/`NaN` is an error, a real `b` ends the range at the last number
# within it plus `FLT_EPSILON`, and an integer `a` with a real `b` gives a double vector when the
# range leaves the integer range, where the version that returns `v(I)` deopts (an error in C).
f <- function(a, b) a:b
fi <- function(a, b) a:b
for (i in 1:12) {
  f(i + 0.0, i + 2.0)
  f(i + 0.5, i + 2.0)
  fi(i, i + 2.0)
}
# The interpreter has no `$`, so the feedback stops here.
invisible(.Machine$integer.max)
check <- function(value, expected) if (!identical(value, expected)) stop("wrong value")
check(f(5, 2.5), 5:3)
check(f(1, 3.9999999), 1:4)
check(f(0.5, 2), c(0.5, 1.5))
check(fi(1L, 3.9999999), 1:4)
check(tryCatch(f(1, NaN), error = conditionMessage), "NA/NaN argument")
check(tryCatch(fi(NA_integer_, 2), error = conditionMessage), "NA/NaN argument")
fi(2147483646L, 2147483648)
