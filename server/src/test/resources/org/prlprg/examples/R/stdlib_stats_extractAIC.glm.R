#? stdlib
`extractAIC.glm` <- function (fit, scale = 0, k = 2, ...) 
{
    n <- length(fit$residuals)
    edf <- n - fit$df.residual
    aic <- fit$aic
    c(edf, aic + (k - 2) * edf)
}
