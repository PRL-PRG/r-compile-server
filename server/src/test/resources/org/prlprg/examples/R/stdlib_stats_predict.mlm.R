#? stdlib
`predict.mlm` <- function (object, newdata, se.fit = FALSE, na.action = na.pass, 
    ...) 
{
    if (missing(newdata)) 
        return(object$fitted.values)
    if (se.fit) 
        stop("the 'se.fit' argument is not yet implemented for \"mlm\" objects")
    if (missing(newdata)) {
        X <- model.matrix(object)
        offset <- object$offset
    }
    else {
        tt <- terms(object)
        Terms <- delete.response(tt)
        m <- model.frame(Terms, newdata, na.action = na.action, 
            xlev = object$xlevels)
        if (!is.null(cl <- attr(Terms, "dataClasses"))) 
            .checkMFClasses(cl, m)
        X <- model.matrix(Terms, m, contrasts.arg = object$contrasts)
        offset <- if (!is.null(off.num <- attr(tt, "offset"))) 
            eval(attr(tt, "variables")[[off.num + 1]], newdata)
        else if (!is.null(object$offset)) 
            eval(object$call$offset, newdata)
    }
    piv <- qr.lm(object)$pivot[seq(object$rank)]
    pred <- X[, piv, drop = FALSE] %*% object$coefficients[piv, 
        ]
    if (!is.null(offset)) 
        pred <- pred + offset
    if (inherits(object, "mlm")) 
        pred
    else pred[, 1L]
}
