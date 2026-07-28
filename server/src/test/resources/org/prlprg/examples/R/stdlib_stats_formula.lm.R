#? stdlib
`formula.lm` <- function (x, ...) 
{
    form <- x$formula
    if (!is.null(form)) {
        form <- formula(x$terms)
        environment(form) <- environment(x$formula)
        form
    }
    else formula(x$terms)
}
