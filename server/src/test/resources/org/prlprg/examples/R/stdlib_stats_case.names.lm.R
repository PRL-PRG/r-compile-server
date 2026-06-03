#? stdlib
`case.names.lm` <- function (object, full = FALSE, ...) 
{
    w <- weights(object)
    dn <- names(residuals(object))
    if (full || is.null(w)) 
        dn
    else dn[w != 0]
}
