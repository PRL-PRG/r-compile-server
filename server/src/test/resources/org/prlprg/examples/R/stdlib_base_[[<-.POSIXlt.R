#? stdlib
`[[<-.POSIXlt` <- function (x, i, value) 
{
    cl <- oldClass(x)
    class(x) <- NULL
    if (!missing(i) && is.character(i)) {
        nms <- names(x$year)
        for (n in names(x)) names(x[[n]]) <- nms
    }
    value <- unCfillPOSIXlt(as.POSIXlt(value))
    for (n in names(x)) x[[n]][[i]] <- value[[n]]
    class(x) <- cl
    x
}
