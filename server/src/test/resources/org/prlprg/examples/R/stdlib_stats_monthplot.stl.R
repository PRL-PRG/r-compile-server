#? stdlib
`monthplot.stl` <- function (x, labels = NULL, ylab = choice, choice = "seasonal", 
    ...) 
monthplot(x$time.series[, choice], labels = labels, ylab = ylab, 
    ...)
