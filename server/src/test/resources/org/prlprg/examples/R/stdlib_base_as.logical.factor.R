#? stdlib
`as.logical.factor` <- function (x, ...) 
as.logical(levels(x))[x]
