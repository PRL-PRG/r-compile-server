#? stdlib
`nobs.glm` <- function (object, ...) 
if (!is.null(w <- object$prior.weights)) sum(w != 0) else length(object$residuals)
