#? stdlib
`length<-.POSIXct` <- function (x, value) 
.POSIXct(NextMethod(), attr(x, "tzone"), oldClass(x))
