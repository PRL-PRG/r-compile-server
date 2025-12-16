#? stdlib
`as.POSIXlt.factor` <- function (x, ...) 
{
    y <- as.POSIXlt(as.character(x), ...)
    names(y$year) <- names(x)
    y
}
