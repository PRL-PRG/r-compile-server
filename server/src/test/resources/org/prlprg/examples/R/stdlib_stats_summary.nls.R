#? stdlib
`summary.nls` <- function (object, correlation = FALSE, symbolic.cor = FALSE, 
    ...) 
{
    r <- as.vector(object$m$resid())
    w <- object$weights
    n <- if (!is.null(w)) 
        sum(w > 0)
    else length(r)
    param <- coef(object)
    pnames <- names(param)
    p <- length(param)
    rdf <- n - p
    resvar <- if (rdf <= 0) 
        NaN
    else deviance(object)/rdf
    XtXinv <- chol2inv(object$m$Rmat())
    dimnames(XtXinv) <- list(pnames, pnames)
    se <- sqrt(diag(XtXinv) * resvar)
    tval <- param/se
    param <- cbind(param, se, tval, 2 * pt(abs(tval), rdf, lower.tail = FALSE))
    dimnames(param) <- list(pnames, c("Estimate", "Std. Error", 
        "t value", "Pr(>|t|)"))
    ans <- list(formula = formula(object), residuals = r, sigma = sqrt(resvar), 
        df = c(p, rdf), cov.unscaled = XtXinv, call = object$call, 
        convInfo = object$convInfo, control = object$control, 
        na.action = object$na.action, coefficients = param, parameters = param)
    if (correlation && rdf > 0) {
        ans$correlation <- (XtXinv * resvar)/outer(se, se)
        ans$symbolic.cor <- symbolic.cor
    }
    class(ans) <- "summary.nls"
    ans
}

# Examples
