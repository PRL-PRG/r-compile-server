# An integer `sum` that doesn't fit is real; `abs` of a logical is an integer.
f <- function(x, l, n) list(sum(x), abs(l), abs(n), sum(c(l, n)))

f(c(2147483647L, 1L), TRUE, NA)
