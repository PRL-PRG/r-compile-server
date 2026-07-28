#? stdlib
`as.name` <- function (x) 
.Internal(as.vector(x, "symbol"))
