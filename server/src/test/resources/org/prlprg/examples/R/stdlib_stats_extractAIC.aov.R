#? stdlib
`extractAIC.aov` <- function (fit, scale = 0, k = 2, ...) 
{
    n <- length(fit$residuals)
    edf <- n - fit$df.residual
    RSS <- deviance.lm(fit)
    dev <- if (scale > 0) 
        RSS/scale - n
    else n * log(RSS/n)
    c(edf, dev + k * edf)
}
