#? stdlib
`.makeAsMethod` <- function (expr, simple, Class, ClassDef, where) 
{
    if (is.function(expr)) {
        where <- environment(expr)
        args <- formalArgs(expr)
        if (!identical(args, "from")) 
            expr <- .ChangeFormals(expr, if (length(args) > 1) 
                .simpleExtCoerce
            else .simpleIsCoerce)
        expr <- body(expr)
    }
    value <- expr
    if (simple && !identical(expr, quote(from))) 
        value <- substitute(if (strict) EXPR else from, list(EXPR = expr))
    f <- .simpleExtCoerce
    body(f, envir = where) <- value
    f
}
