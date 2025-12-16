#? stdlib
`setReplaceMethod` <- function (f, ..., where = topenv(parent.frame())) 
setMethod(paste0(f, "<-"), ..., where = where)
