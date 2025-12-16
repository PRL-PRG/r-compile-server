#? stdlib
`evalOnLoad` <- function (expr, where = topenv(parent.frame()), aname = "") 
{
    f <- function(env) NULL
    body(f, where) <- substitute(eval(EXPR, ENV), list(EXPR = expr, 
        ENV = where))
    setLoadAction(f, aname, where)
}
