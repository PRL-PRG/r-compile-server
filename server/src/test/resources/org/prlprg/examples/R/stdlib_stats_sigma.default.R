#? stdlib
`sigma.default` <- function (object, use.fallback = TRUE, ...) 
sqrt(deviance(object, ...)/(nobs(object, use.fallback = use.fallback) - 
    sum(!is.na(coef(object)))))
