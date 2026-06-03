#? stdlib
`mean.POSIXct` <- function (x, ...) 
.POSIXct(mean(unclass(x), ...), attr(x, "tzone"))
