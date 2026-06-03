#? stdlib
`eval.parent` <- function (expr, n = 1) 
{
    p <- parent.frame(n + 1)
    eval(expr, p)
}
