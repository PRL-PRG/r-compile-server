#? stdlib
`as.data.frame.POSIXlt` <- function (x, row.names = NULL, optional = FALSE, ...) 
{
    value <- as.data.frame.vector(as.POSIXct(x), row.names, optional, 
        ...)
    if (!optional) 
        names(value) <- deparse1(substitute(x))
    value
}
