#? stdlib
`nobs.logLik` <- function (object, ...) 
{
    res <- attr(object, "nobs")
    if (is.null(res)) 
        stop("no \"nobs\" attribute is available")
    res
}
