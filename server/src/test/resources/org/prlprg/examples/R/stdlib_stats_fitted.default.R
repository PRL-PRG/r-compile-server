#? stdlib
`fitted.default` <- function (object, ...) 
{
    xx <- if ("fitted.values" %in% names(object)) 
        object$fitted.values
    else object$fitted
    napredict(object$na.action, xx)
}
