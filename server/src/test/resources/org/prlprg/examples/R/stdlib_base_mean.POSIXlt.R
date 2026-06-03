#? stdlib
`mean.POSIXlt` <- function (x, ...) 
as.POSIXlt(mean(as.POSIXct(x), ...))
