#? stdlib
`all.names` <- function (expr, functions = TRUE, max.names = -1L, unique = FALSE) 
.Internal(all.names(expr, functions, max.names, unique))

# Examples
all.names(expression(sin(x+y)))
all.names(quote(sin(x+y))) # or a call
all.vars(expression(sin(x+y)))

