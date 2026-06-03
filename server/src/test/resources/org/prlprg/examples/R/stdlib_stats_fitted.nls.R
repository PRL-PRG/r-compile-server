#? stdlib
`fitted.nls` <- function (object, ...) 
{
    val <- as.vector(object$m$fitted())
    if (!is.null(object$na.action)) 
        val <- napredict(object$na.action, val)
    lab <- "Fitted values"
    if (!is.null(aux <- attr(object, "units")$y)) 
        lab <- paste(lab, aux)
    attr(val, "label") <- lab
    val
}
