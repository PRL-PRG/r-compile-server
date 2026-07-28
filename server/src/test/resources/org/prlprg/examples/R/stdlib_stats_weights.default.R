#? stdlib
`weights.default` <- function (object, ...) 
{
    wts <- object$weights
    if (is.null(wts)) 
        wts
    else napredict(object$na.action, wts)
}
