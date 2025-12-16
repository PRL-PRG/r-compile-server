#? stdlib
`cooks.distance.glm` <- function (model, infl = influence(model, do.coef = FALSE), res = infl$pear.res, 
    dispersion = summary(model)$dispersion, hat = infl$hat, ...) 
{
    p <- model$rank
    res <- (res/(1 - hat))^2 * hat/(dispersion * p)
    res[is.infinite(res)] <- NaN
    res
}
