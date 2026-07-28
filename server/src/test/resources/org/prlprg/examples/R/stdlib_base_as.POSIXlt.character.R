#? stdlib
`as.POSIXlt.character` <- function (x, tz = "", format, tryFormats = c("%Y-%m-%d %H:%M:%OS", 
    "%Y/%m/%d %H:%M:%OS", "%Y-%m-%d %H:%M", "%Y/%m/%d %H:%M", 
    "%Y-%m-%d", "%Y/%m/%d"), optional = FALSE, ...) 
{
    x <- unclass(x)
    if (!missing(format)) {
        res <- strptime(x, format, tz = tz)
        if (nzchar(tz)) 
            attr(res, "tzone") <- tz
        return(res)
    }
    xx <- x[!is.na(x)]
    if (!length(xx)) {
        res <- strptime(x, "%Y/%m/%d")
        if (nzchar(tz)) 
            attr(res, "tzone") <- tz
        return(res)
    }
    else for (f in tryFormats) if (all(!is.na(strptime(xx, f, 
        tz = tz)))) {
        res <- strptime(x, f, tz = tz)
        if (nzchar(tz)) 
            attr(res, "tzone") <- tz
        return(res)
    }
    if (optional) 
        as.POSIXlt.character(rep.int(NA_character_, length(x)), 
            tz = tz)
    else stop("character string is not in a standard unambiguous format")
}
