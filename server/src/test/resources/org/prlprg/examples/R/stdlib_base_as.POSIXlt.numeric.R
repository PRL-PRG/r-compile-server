#? stdlib
`as.POSIXlt.numeric` <- function (x, tz = "", origin, ...) 
as.POSIXlt(if (missing(origin)) .POSIXct(x, tz) else as.POSIXct(origin, 
    tz = "UTC", ...) + x, tz)
