#? stdlib
`residuals.HoltWinters` <- function (object, ...) 
object$x - object$fitted[, 1]
