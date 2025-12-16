#? stdlib
`covratio` <- function (model, infl = lm.influence(model, do.coef = FALSE), 
    res = weighted.residuals(model)) 
{
    n <- nrow(qr.lm(model)$qr)
    p <- model$rank
    omh <- 1 - infl$hat
    e.star <- res/(infl$sigma * sqrt(omh))
    e.star[is.infinite(e.star)] <- NaN
    1/(omh * (((n - p - 1) + e.star^2)/(n - p))^p)
}
