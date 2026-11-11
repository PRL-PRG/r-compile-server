# The unboxed `lgamma` is R's `lgammafn`, which differs from the C library's in the last digit of
# `lgamma(-2.5)`.
f <- function(x) lgamma(x)
for (i in 1:12) f(i + 0.5)
f(-2.5)
