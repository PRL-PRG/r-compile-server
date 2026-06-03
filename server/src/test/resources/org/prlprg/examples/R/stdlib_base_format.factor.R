#? stdlib
`format.factor` <- function (x, ...) 
format(structure(as.character(x), names = names(x), dim = dim(x), 
    dimnames = dimnames(x)), ...)
