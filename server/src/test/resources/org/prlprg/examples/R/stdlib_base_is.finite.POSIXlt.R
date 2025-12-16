#? stdlib
`is.finite.POSIXlt` <- function (x) 
is.finite(as.POSIXct(x))
