#? stdlib
`as.list.POSIXlt` <- function (x, ...) 
{
    nms <- names(x)
    names(x) <- NULL
    y <- lapply(X = do.call(Map, c(list, unCfillPOSIXlt(x))), 
        FUN = .POSIXlt, attr(x, "tzone"), oldClass(x))
    names(y) <- nms
    y
}
