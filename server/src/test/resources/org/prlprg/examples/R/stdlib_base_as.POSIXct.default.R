#? stdlib
`as.POSIXct.default` <- function (x, tz = "", ...) 
{
    if (inherits(x, "POSIXct")) 
        return(if (missing(tz)) x else .POSIXct(x, tz))
    if (is.null(x)) 
        return(.POSIXct(numeric(), tz))
    if (is.character(x) || is.factor(x)) 
        return(as.POSIXct(as.POSIXlt(x, tz, ...), tz, ...))
    if (is.logical(x) && all(is.na(x))) 
        return(.POSIXct(as.numeric(x), tz))
    stop(gettextf("do not know how to convert '%s' to class %s", 
        deparse1(substitute(x)), dQuote("POSIXct")), domain = NA)
}
