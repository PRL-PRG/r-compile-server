#? stdlib
`coef.aov` <- function (object, complete = FALSE, ...) 
{
    cf <- object$coefficients
    if (complete) 
        cf
    else cf[!is.na(cf)]
}
