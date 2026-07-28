#? stdlib
`dffits` <- function (model, infl = lm.influence(model, do.coef = FALSE), 
    res = weighted.residuals(model)) 
{
    res <- res * sqrt(infl$hat)/(infl$sigma * (1 - infl$hat))
    res[is.infinite(res)] <- NaN
    res
}
