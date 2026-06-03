#? stdlib
`as.symbol` <- function (x) 
.Internal(as.vector(x, "symbol"))
