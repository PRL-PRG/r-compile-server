#? stdlib
`BIC.logLik` <- function (object, ...) 
-2 * as.numeric(object) + attr(object, "df") * log(nobs(object))
