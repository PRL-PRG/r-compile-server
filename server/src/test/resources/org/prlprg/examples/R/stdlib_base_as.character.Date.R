#? stdlib
`as.character.Date` <- function (x, ...) 
as.character(as.POSIXlt(x), ...)
