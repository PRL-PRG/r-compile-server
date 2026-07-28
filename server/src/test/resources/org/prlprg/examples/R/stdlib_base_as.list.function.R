#? stdlib
`as.list.function` <- function (x, ...) 
c(formals(x), list(body(x)))
