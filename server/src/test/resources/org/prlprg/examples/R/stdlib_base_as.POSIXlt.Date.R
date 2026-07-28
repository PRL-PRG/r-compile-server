#? stdlib
`as.POSIXlt.Date` <- function (x, tz = "UTC", ...) 
as.POSIXlt(.Internal(Date2POSIXlt(x, tz)), tz = tz)
