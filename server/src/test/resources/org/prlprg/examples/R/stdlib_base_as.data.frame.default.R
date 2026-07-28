#? stdlib
`as.data.frame.default` <- function (x, ...) 
{
    if (is.atomic(x)) 
        as.data.frame.vector(x, ...)
    else stop(gettextf("cannot coerce class %s to a data.frame", 
        sQuote(deparse(class(x))[1L])), domain = NA)
}
