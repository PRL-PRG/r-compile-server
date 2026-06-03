#? stdlib
`weighted.mean.POSIXct` <- function (x, w, ...) 
.POSIXct(weighted.mean(unclass(x), w, ...), attr(x, "tzone"))
