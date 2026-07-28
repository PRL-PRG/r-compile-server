#? stdlib
`quantile.POSIXt` <- function (x, ...) 
.POSIXct(quantile(unclass(as.POSIXct(x)), ...), attr(x, "tzone"))
