#? stdlib
`weighted.mean.POSIXlt` <- function (x, w, ...) 
as.POSIXlt(weighted.mean(as.POSIXct(x), w, ...))
