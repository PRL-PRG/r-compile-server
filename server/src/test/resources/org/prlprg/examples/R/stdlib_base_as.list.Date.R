#? stdlib
`as.list.Date` <- function (x, ...) 
lapply(unclass(x), .Date, oldClass(x))
