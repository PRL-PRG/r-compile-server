#? stdlib
`AIC.logLik` <- function (object, ..., k = 2) 
-2 * as.numeric(object) + k * attr(object, "df")
