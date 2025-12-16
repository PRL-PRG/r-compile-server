#? stdlib
`.strwrap22` <- function (x, collapse = " ") 
strwrap(paste(x, collapse = collapse), indent = 2L, exdent = 2L)
