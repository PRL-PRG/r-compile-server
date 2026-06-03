#? stdlib
`format.POSIXct` <- function (x, format = "", tz = "", usetz = FALSE, ...) 
{
    if (!inherits(x, "POSIXct")) 
        stop("wrong class")
    if (missing(tz) && !is.null(tzone <- attr(x, "tzone"))) 
        tz <- tzone
    structure(format.POSIXlt(as.POSIXlt(x, tz), format, usetz, 
        ...), names = names(x))
}
