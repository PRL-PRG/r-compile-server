#? stdlib
`rep.POSIXlt` <- function (x, ...) 
{
    cl <- oldClass(x)
    x <- unCfillPOSIXlt(x)
    r <- lapply(x, rep, ...)
    class(r) <- cl
    attr(r, "tzone") <- attr(x, "tzone")
    attr(r, "balanced") <- if (isTRUE(attr(x, "balanced"))) 
        TRUE
    else NA
    r
}
