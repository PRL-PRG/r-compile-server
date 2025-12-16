#? stdlib
`dfbeta.lm` <- function (model, infl = lm.influence(model, do.coef = TRUE), 
    ...) 
{
    b <- infl$coefficients
    mlm <- is.matrix(wr <- infl$wt.res)
    if (!mlm) 
        dimnames(b) <- list(names(wr), variable.names(model))
    b
}
