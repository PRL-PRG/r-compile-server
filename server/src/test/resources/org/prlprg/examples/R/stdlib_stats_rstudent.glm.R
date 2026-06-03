#? stdlib
`rstudent.glm` <- function (model, infl = influence(model, do.coef = FALSE), ...) 
{
    r <- infl$dev.res
    r <- sign(r) * sqrt(r^2 + (infl$hat * infl$pear.res^2)/(1 - 
        infl$hat))
    r[is.infinite(r)] <- NaN
    if (any(family(model)$family == c("binomial", "poisson"))) 
        r
    else r/infl$sigma
}
