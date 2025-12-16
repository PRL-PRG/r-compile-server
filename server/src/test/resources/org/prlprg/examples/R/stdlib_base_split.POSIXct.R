#? stdlib
`split.POSIXct` <- function (x, f, drop = FALSE, ...) 
lapply(split.default(as.double(x), f, drop = drop, ...), .POSIXct, 
    attr(x, "tzone"), oldClass(x))
