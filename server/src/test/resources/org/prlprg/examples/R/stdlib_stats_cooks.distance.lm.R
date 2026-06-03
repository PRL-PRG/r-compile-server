#? stdlib
`cooks.distance.lm` <- function (model, infl = lm.influence(model, do.coef = FALSE), 
    res = weighted.residuals(model), sd = sqrt(deviance(model)/df.residual(model)), 
    hat = infl$hat, ...) 
{
    p <- model$rank
    res <- ((res/c(outer(1 - hat, sd)))^2 * hat)/p
    res[is.infinite(res)] <- NaN
    res
}
