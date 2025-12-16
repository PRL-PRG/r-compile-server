#? stdlib
`format.Date` <- function (x, format = "%Y-%m-%d", ...) 
format(as.POSIXlt(x), format = format, ...)
