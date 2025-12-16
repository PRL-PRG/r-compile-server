#? stdlib
`deviance.mlm` <- function (object, ...) 
{
    colSums(if (is.null(w <- object$weights)) 
        object$residuals^2
    else w * object$residuals^2)
}
