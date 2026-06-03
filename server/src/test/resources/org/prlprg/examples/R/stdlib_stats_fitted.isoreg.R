#? stdlib
`fitted.isoreg` <- function (object, ...) 
{
    if (object$isOrd) 
        object$yf
    else object$yf[order(object$ord)]
}
