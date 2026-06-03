#? stdlib
`as.list.data.frame` <- function (x, ...) 
{
    x <- unclass(x)
    attr(x, "row.names") <- NULL
    x
}
