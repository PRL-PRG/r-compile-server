#? stdlib
`local` <- function (expr, envir = new.env()) 
eval.parent(substitute(eval(quote(expr), envir)))
