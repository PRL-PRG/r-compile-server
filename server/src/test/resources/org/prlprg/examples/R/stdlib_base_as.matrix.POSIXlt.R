#? stdlib
`as.matrix.POSIXlt` <- function (x, ...) 
{
    as.matrix(as.data.frame(unclass(x)), ...)
}
