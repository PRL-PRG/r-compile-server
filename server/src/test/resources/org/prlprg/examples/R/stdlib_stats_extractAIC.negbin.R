#? stdlib
`extractAIC.negbin` <- function (fit, scale, k = 2, ...) 
{
    n <- length(fit$residuals)
    edf <- n - fit$df.residual
    c(edf, -fit$twologlik + k * edf)
}
