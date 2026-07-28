#? stdlib
`weights.glm` <- function (object, type = c("prior", "working"), ...) 
{
    type <- match.arg(type)
    res <- if (type == "prior") 
        object$prior.weights
    else object$weights
    if (is.null(object$na.action)) 
        res
    else naresid(object$na.action, res)
}
