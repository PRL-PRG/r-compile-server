#? stdlib
`coef.default` <- function (object, complete = TRUE, ...) 
{
    cf <- object$coefficients
    if (complete) 
        cf
    else cf[!is.na(cf)]
}
