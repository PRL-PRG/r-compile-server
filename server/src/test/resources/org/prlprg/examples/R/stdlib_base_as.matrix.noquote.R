#? stdlib
`as.matrix.noquote` <- function (x, ...) 
noquote(NextMethod("as.matrix", x))
