#? stdlib
`c.person` <- function (..., recursive = FALSE) 
{
    args <- list(...)
    if (!all(vapply(args, inherits, NA, "person"))) 
        warning(gettextf("method is only applicable to %s objects", 
            sQuote("person")), domain = NA)
    args <- lapply(args, unclass)
    rval <- do.call(c, args)
    class(rval) <- "person"
    rval
}
