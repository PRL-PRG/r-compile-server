#? stdlib
`deparse1` <- function (expr, collapse = " ", width.cutoff = 500L, ...) 
paste(deparse(expr, width.cutoff, ...), collapse = collapse)
