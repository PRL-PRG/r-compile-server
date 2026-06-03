#? stdlib
`c.bibentry` <- function (..., recursive = FALSE) 
{
    args <- list(...)
    if (!all(vapply(args, inherits, NA, "bibentry"))) 
        warning(gettextf("method is only applicable to %s objects", 
            sQuote("bibentry")), domain = NA)
    args <- lapply(args, unclass)
    rval <- do.call(c, args)
    mheader <- unlist(lapply(args, attr, "mheader"))
    if (length(mheader) >= 1L) {
        attr(rval, "mheader") <- paste(mheader, collapse = "\n")
    }
    mfooter <- unlist(lapply(args, attr, "mfooter"))
    if (length(mfooter) >= 1L) {
        attr(rval, "mfooter") <- paste(mfooter, collapse = "\n")
    }
    .bibentry(rval)
}
