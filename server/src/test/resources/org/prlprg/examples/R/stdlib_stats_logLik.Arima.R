#? stdlib
`logLik.Arima` <- function (object, ...) 
{
    res <- if (is.na(object$aic)) 
        NA
    else structure(object$loglik, df = sum(object$mask) + 1, 
        nobs = object$nobs)
    class(res) <- "logLik"
    res
}
