#? stdlib
`nobs.nls` <- function (object, ...) 
if (is.null(w <- object$weights)) length(object$m$resid()) else sum(w != 
    0)
