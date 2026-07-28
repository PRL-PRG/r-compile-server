#? stdlib
`trunc.POSIXt` <- function (x, units = c("secs", "mins", "hours", "days", "months", 
    "years"), ...) 
{
    units <- match.arg(units)
    x <- as.POSIXlt(x)
    if (length(x$sec)) 
        switch(units, secs = {
            x$sec <- trunc(x$sec)
        }, mins = {
            x$sec[] <- 0
        }, hours = {
            x$sec[] <- 0
            x$min[] <- 0L
        }, days = {
            x$sec[] <- 0
            x$min[] <- 0L
            x$hour[] <- 0L
            x$isdst[] <- -1L
        }, months = {
            x$sec[] <- 0
            x$min[] <- 0L
            x$hour[] <- 0L
            x$mday[] <- 1L
            x$isdst[] <- -1L
            x <- as.POSIXlt(as.POSIXct(x))
        }, years = {
            x$sec[] <- 0
            x$min[] <- 0L
            x$hour[] <- 0L
            x$mday[] <- 1L
            x$mon[] <- 0L
            x$isdst[] <- -1L
            x <- as.POSIXlt(as.POSIXct(x))
        })
    x
}
