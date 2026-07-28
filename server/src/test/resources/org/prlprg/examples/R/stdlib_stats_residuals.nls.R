#? stdlib
`residuals.nls` <- function (object, type = c("response", "pearson"), ...) 
{
    type <- match.arg(type)
    if (type == "pearson") {
        val <- as.vector(object$m$resid())
        std <- sqrt(sum(val^2)/(length(val) - length(coef(object))))
        val <- val/std
        if (!is.null(object$na.action)) 
            val <- naresid(object$na.action, val)
        attr(val, "label") <- "Standardized residuals"
    }
    else {
        val <- as.vector(object$m$lhs() - object$m$fitted())
        if (!is.null(object$na.action)) 
            val <- naresid(object$na.action, val)
        lab <- "Residuals"
        if (!is.null(aux <- attr(object, "units")$y)) 
            lab <- paste(lab, aux)
        attr(val, "label") <- lab
    }
    val
}
