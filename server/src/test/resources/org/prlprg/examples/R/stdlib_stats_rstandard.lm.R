#? stdlib
`rstandard.lm` <- function (model, infl = lm.influence(model, do.coef = FALSE), 
    sd = sqrt(deviance(model)/df.residual(model)), type = c("sd.1", 
        "predictive"), ...) 
{
    type <- match.arg(type)
    res <- infl$wt.res/switch(type, sd.1 = c(outer(sqrt(1 - infl$hat), 
        sd)), predictive = 1 - infl$hat)
    res[is.infinite(res)] <- NaN
    res
}
