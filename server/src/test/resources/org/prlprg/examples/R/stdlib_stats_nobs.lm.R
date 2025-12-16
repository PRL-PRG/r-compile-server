#? stdlib
`nobs.lm` <- function (object, ...) 
if (!is.null(w <- object$weights)) sum(w != 0) else NROW(object$residuals)
