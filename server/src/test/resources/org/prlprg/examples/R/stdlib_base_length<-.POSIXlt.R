#? stdlib
`length<-.POSIXlt` <- function (x, value) 
{
    r <- lapply(unclass(x), `length<-`, value)
    class(r) <- oldClass(x)
    attr(r, "tzone") <- attr(x, "tzone")
    attr(r, "balanced") <- if (isTRUE(attr(x, "balanced"))) 
        TRUE
    else NA
    r
}
