# The unboxed `sign` returns `NaN` and `NA` unchanged, as R's `sign` does (not 0).
f <- function(x) sign(x)
for (i in 1:12) f(4)
c(f(NaN), f(NA_real_), f(-2), f(0))
