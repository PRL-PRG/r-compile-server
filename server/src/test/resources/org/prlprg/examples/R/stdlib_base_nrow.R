#? stdlib
`NROW` <- function (x) 
if (length(d <- dim(x))) d[1L] else length(x)
