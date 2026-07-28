#? stdlib
`as.POSIXct.numeric` <- function (x, tz = "", origin, ...) 
.POSIXct(if (missing(origin)) x else as.POSIXct(origin, tz = "GMT", 
    ...) + x, tz)
