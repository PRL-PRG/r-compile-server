# R code that reads the `...` binding of a compiled function's environment.
f <- function(...) list(.Internal(cbind(1, ...)), ..1, ...length())
f(1:2, 3:4)
