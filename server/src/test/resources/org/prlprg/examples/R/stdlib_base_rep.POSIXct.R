#? stdlib
`rep.POSIXct` <- function (x, ...) 
.POSIXct(NextMethod(), attr(x, "tzone"), oldClass(x))
