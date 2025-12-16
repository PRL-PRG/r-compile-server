#? stdlib
`is.na.POSIXlt` <- function (x) 
is.na(as.POSIXct(x))
