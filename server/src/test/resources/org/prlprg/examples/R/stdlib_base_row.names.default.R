#? stdlib
`row.names.default` <- function (x) 
if (!is.null(dim(x))) rownames(x)
