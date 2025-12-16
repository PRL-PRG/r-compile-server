#? stdlib
`extractAIC.coxph` <- function (fit, scale, k = 2, ...) 
{
    edf <- sum(!is.na(fit$coefficients))
    loglik <- fit$loglik[length(fit$loglik)]
    c(edf, -2 * loglik + k * edf)
}
