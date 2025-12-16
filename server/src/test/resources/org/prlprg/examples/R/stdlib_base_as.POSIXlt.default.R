#? stdlib
`as.POSIXlt.default` <- function (x, tz = "", optional = FALSE, ...) 
{
    if (inherits(x, "POSIXlt")) 
        return(if (missing(tz)) x else .POSIXlt(x, tz))
    if (is.null(x)) 
        return(as.POSIXlt.character(character(), tz))
    if (is.logical(x) && all(is.na(x))) 
        return(as.POSIXlt(as.POSIXct.default(x), tz = tz))
    if (optional) 
        as.POSIXlt.character(rep.int(NA_character_, length(x)), 
            tz = tz)
    else stop(gettextf("do not know how to convert '%s' to class %s", 
        deparse1(substitute(x)), dQuote("POSIXlt")), domain = NA)
}
