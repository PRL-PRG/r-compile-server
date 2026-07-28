#? stdlib
`.POSIXct` <- function (xx, tz = NULL, cl = c("POSIXct", "POSIXt")) 
{
    class(xx) <- cl
    attr(xx, "tzone") <- tz
    xx
}
