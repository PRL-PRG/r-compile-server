#? stdlib
`confint.lm` <- function (object, parm, level = 0.95, ...) 
{
    cf <- coef(object)
    ses <- sqrt(diag(vcov(object)))
    pnames <- names(ses)
    if (is.matrix(cf)) 
        cf <- setNames(as.vector(cf), pnames)
    if (missing(parm)) 
        parm <- pnames
    else if (is.numeric(parm)) 
        parm <- pnames[parm]
    a <- (1 - level)/2
    a <- c(a, 1 - a)
    fac <- qt(a, object$df.residual)
    pct <- .format_perc(a, 3)
    ci <- array(NA_real_, dim = c(length(parm), 2L), dimnames = list(parm, 
        pct))
    ci[] <- cf[parm] + ses[parm] %o% fac
    ci
}
