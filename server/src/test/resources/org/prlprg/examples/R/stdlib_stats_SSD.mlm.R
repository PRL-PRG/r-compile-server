#? stdlib
`SSD.mlm` <- function (object, ...) 
{
    if (!is.null(object$weights)) 
        stop("'mlm' objects with weights are not supported")
    structure(list(SSD = crossprod(object$residuals), call = object$call, 
        df = object$df.residual), class = "SSD")
}
