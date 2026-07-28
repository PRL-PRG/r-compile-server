#? stdlib
`$<-.POSIXlt` <- function (x, name, value) 
{
    r <- NextMethod("$<-")
    class(r) <- oldClass(x)
    attr(r, "tzone") <- attr(x, "tzone")
    attr(r, "balanced") <- if (isTRUE(attr(x, "balanced")) && 
        length(value) == length(x)) 
        NA
    r
}
