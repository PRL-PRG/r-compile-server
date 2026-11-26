# A forced promise may yield the missing argument (the empty symbol). GNU-R's `GETVAR` only
# rejects a binding that *is* the missing argument; the value of a forced promise is never checked.
e <- quote(x[, 1])
f <- function(a) is.call(a)
g <- function(a) a
h <- function(a) is.recursive(a)
c(f(e[[3]]), is.symbol(g(e[[3]])), h(e))
