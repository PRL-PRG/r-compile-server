#? stdlib
`monthplot.StructTS` <- function (x, labels = NULL, ylab = choice, choice = "sea", ...) 
monthplot(fitted(x)[, choice], labels = labels, ylab = ylab, 
    ...)
