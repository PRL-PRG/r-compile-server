#? stdlib
`df.residual.nls` <- function (object, ...) 
{
    w <- object$weights
    n <- if (!is.null(w)) 
        sum(w != 0)
    else length(object$m$resid())
    n - length(coef(object))
}
