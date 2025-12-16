#? stdlib
`as.single.default` <- function (x, ...) 
structure(.Internal(as.vector(x, "double")), Csingle = TRUE)
