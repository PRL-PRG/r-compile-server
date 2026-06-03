#? stdlib
`sort.POSIXlt` <- function (x, decreasing = FALSE, na.last = NA, ...) 
x[order(as.POSIXct(x), na.last = na.last, decreasing = decreasing)]
