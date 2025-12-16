#? stdlib
`is.mts` <- function (x) 
is.ts(x) && inherits(x, "mts") && is.matrix(x)
