# `...` followed by a positional argument, for a builtin and for a closure.
f <- function(...) c(..., 3)
h <- function(a, b, d) list(a, b, d)
g <- function(...) h(..., 3)
list(f(1, 2), g(1, 2))
