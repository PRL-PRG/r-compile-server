g <- function(f, x) f(x$a <- 1)
f <- function(expr) force(expr)
a <- list(a = 2)

g(f, a)
a
