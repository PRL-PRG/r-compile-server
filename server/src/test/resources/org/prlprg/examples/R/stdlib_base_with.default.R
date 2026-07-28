#? stdlib
`with.default` <- function (data, expr, ...) 
eval(substitute(expr), data, enclos = parent.frame())
