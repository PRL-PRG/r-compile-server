#? stdlib
`as.POSIXlt.POSIXct` <- function (x, tz = "", ...) 
{
    if ((missing(tz) || is.null(tz)) && !is.null(tzone <- attr(x, 
        "tzone"))) 
        tz <- tzone[1L]
    .Internal(as.POSIXlt(x, tz))
}
