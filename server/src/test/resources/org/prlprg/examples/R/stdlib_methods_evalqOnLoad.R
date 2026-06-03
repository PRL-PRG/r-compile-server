#? stdlib
`evalqOnLoad` <- function (expr, where = topenv(parent.frame()), aname = "") 
evalOnLoad(substitute(expr), where, aname)
