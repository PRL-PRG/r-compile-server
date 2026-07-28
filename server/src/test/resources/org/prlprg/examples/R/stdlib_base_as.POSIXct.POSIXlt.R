#? stdlib
`as.POSIXct.POSIXlt` <- function (x, tz = "", ...) 
{
    tzone <- attr(x, "tzone")
    if (missing(tz) && !is.null(tzone)) 
        tz <- tzone[1L]
    y <- .Internal(as.POSIXct(x, tz))
    .POSIXct(y, tz)
}
