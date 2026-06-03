#? stdlib
`as.POSIXct.Date` <- function (x, tz = "UTC", ...) 
.POSIXct(unclass(x) * 86400, tz = tz)
