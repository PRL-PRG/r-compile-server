#? stdlib
`NCOL` <- function (x) 
if (is.null(x)) 0L else if (length(d <- dim(x)) > 1L) d[2L] else 1L
