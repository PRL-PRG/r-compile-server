#? stdlib
`Sys.Date` <- function () 
as.Date(as.POSIXlt(Sys.time()))
