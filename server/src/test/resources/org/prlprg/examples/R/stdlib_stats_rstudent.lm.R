#? stdlib
`rstudent.lm` <- function (model, infl = lm.influence(model, do.coef = FALSE), 
    res = infl$wt.res, ...) 
{
    res <- res/(infl$sigma * sqrt(1 - infl$hat))
    res[is.infinite(res)] <- NaN
    res
}
