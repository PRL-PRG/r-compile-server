#? stdlib
`as.double.POSIXlt` <- function (x, ...) 
as.double(as.POSIXct(x))
