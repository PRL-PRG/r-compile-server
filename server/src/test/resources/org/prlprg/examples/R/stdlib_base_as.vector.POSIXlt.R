#? stdlib
`as.vector.POSIXlt` <- function (x, mode = "any") 
as.vector(as.list(x), mode)
