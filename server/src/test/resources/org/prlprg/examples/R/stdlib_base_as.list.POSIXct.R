#? stdlib
`as.list.POSIXct` <- function (x, ...) 
{
    nms <- names(x)
    names(x) <- NULL
    y <- lapply(unclass(x), .POSIXct, attr(x, "tzone"), oldClass(x))
    names(y) <- nms
    y
}
