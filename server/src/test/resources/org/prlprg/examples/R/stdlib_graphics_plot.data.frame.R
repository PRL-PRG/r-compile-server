#? stdlib
`plot.data.frame` <- function (x, ...) 
{
    plot2 <- function(x, xlab = names(x)[1L], ylab = names(x)[2L], 
        ...) plot(x[[1L]], x[[2L]], xlab = xlab, ylab = ylab, 
        ...)
    if (!is.data.frame(x)) 
        stop("'plot.data.frame' applied to non data frame")
    if (ncol(x) == 1) {
        x1 <- x[[1L]]
        if (class(x1)[1L] %in% c("integer", "numeric")) 
            stripchart(x1, ...)
        else plot(x1, ...)
    }
    else if (ncol(x) == 2) {
        plot2(x, ...)
    }
    else {
        pairs(data.matrix(x), ...)
    }
}

# Examples
plot(OrchardSprays[1], method = "jitter")
plot(OrchardSprays[c(4,1)])
plot(OrchardSprays)

plot(iris)
plot(iris[5:4])
plot(women)

