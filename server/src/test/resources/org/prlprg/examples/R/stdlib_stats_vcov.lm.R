#? stdlib
`vcov.lm` <- function (object, complete = TRUE, ...) 
vcov.summary.lm(summary.lm(object, ...), complete = complete)
