#? stdlib
`nobs.default` <- function (object, use.fallback = FALSE, ...) 
{
    if ((is.L <- is.list(object)) && !is.null(n <- object[["nobs"]])) 
        n
    else if (is.L && !is.null(n <- object[["n.obs"]])) 
        n
    else if (use.fallback) {
        if (!is.null(w <- object[["weights"]])) 
            sum(w != 0)
        else if ("residuals" %in% names(object)) 
            NROW(object$residuals)
        else {
            warning("no 'nobs' method is available")
            0L
        }
    }
    else stop("no 'nobs' method is available")
}
