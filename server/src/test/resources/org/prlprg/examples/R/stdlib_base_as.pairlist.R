#? stdlib
`as.pairlist` <- function (x) 
.Internal(as.vector(x, "pairlist"))
