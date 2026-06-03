#? stdlib
`.POSIXlt` <- function (xx, tz = NULL, cl = c("POSIXlt", "POSIXt")) 
{
    class(xx) <- cl
    attr(xx, "tzone") <- tz
    xx
}
