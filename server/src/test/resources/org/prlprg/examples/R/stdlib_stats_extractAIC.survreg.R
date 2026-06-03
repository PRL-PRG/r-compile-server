#? stdlib
`extractAIC.survreg` <- function (fit, scale, k = 2, ...) 
{
    edf <- sum(fit$df)
    c(edf, -2 * fit$loglik[2L] + k * edf)
}
