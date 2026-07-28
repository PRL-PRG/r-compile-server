#? stdlib
`deviance.lm` <- function (object, ...) 
sum(weighted.residuals(object)^2, na.rm = TRUE)
