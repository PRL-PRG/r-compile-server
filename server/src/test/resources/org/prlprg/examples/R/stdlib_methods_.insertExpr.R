#? stdlib
`.insertExpr` <- function (expr, el) 
{
    if (!is(expr, "{")) 
        expr <- substitute({
            EXPR
        }, list(EXPR = expr))
    expr[3L:(length(expr) + 1)] <- expr[2L:length(expr)]
    expr[[2L]] <- el
    expr
}
