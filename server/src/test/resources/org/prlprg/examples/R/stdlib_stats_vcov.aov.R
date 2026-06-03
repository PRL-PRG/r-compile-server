#? stdlib
`vcov.aov` <- function (object, complete = FALSE, ...) 
vcov.summary.lm(summary.lm(object, ...), complete = complete)
