#? stdlib
`strftime` <- function (x, format = "", tz = "", usetz = FALSE, ...) 
format(as.POSIXlt(x, tz = tz), format = format, usetz = usetz, 
    ...)
