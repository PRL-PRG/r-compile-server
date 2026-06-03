#? stdlib
`all.vars` <- function (expr, functions = FALSE, max.names = -1L, unique = TRUE) 
.Internal(all.names(expr, functions, max.names, unique))
