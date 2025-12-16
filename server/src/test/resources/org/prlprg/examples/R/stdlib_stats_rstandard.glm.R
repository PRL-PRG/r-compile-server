#? stdlib
`rstandard.glm` <- function (model, infl = influence(model, do.coef = FALSE), type = c("deviance", 
    "pearson"), ...) 
{
    type <- match.arg(type)
    res <- switch(type, pearson = infl$pear.res, infl$dev.res)
    res <- res/sqrt(summary(model)$dispersion * (1 - infl$hat))
    res[is.infinite(res)] <- NaN
    res
}
