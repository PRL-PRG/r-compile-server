#? stdlib
`as.Date.POSIXlt` <- function (x, ...) 
.Internal(POSIXlt2Date(x))
