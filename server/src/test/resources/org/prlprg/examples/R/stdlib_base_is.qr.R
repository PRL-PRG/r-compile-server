#? stdlib
`is.qr` <- function (x) 
is.list(x) && inherits(x, "qr")
