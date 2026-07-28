#? stdlib
`residuals.lm` <- function (object, type = c("working", "response", "deviance", 
    "pearson", "partial"), ...) 
{
    type <- match.arg(type)
    r <- object$residuals
    res <- switch(type, working = , response = r, deviance = , 
        pearson = if (is.null(object$weights)) r else r * sqrt(object$weights), 
        partial = r)
    res <- naresid(object$na.action, res)
    if (type == "partial") 
        res <- res + predict(object, type = "terms")
    res
}
