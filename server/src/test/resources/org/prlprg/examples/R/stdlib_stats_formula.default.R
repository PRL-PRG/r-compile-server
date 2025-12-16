#? stdlib
`formula.default` <- function (x = NULL, env = parent.frame(), ...) 
{
    notAtomic <- !is.atomic(x)
    notnull <- function(z) notAtomic && !is.null(z)
    if (notnull(x$formula)) 
        eval(x$formula)
    else if (notnull(x$terms)) {
        z <- x$terms
        oldClass(z) <- "formula"
        z
    }
    else if (notnull(x$call$formula)) 
        eval(x$call$formula)
    else attr(x, "formula") %||% {
        form <- switch(mode(x), `NULL` = structure(list(), class = "formula"), 
            character = eval(str2expression(x)), call = eval(x), 
            stop("invalid formula"))
        environment(form) <- env
        form
    }
}
