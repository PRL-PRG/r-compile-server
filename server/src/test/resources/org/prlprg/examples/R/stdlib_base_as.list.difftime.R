#? stdlib
`as.list.difftime` <- function (x, ...) 
lapply(unclass(x), .difftime, attr(x, "units"), oldClass(x))
