#? stdlib
`vcov.summary.lm` <- function (object, complete = TRUE, ...) 
.vcov.aliased(object$aliased, object$sigma^2 * object$cov.unscaled, 
    complete = complete)
