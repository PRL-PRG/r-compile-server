#? stdlib
`vcov.glm` <- function (object, complete = TRUE, ...) 
vcov.summary.glm(summary.glm(object, ...), complete = complete)
