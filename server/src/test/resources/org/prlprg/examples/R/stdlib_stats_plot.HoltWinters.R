#? stdlib
`plot.HoltWinters` <- function (x, predicted.values = NA, intervals = TRUE, separator = TRUE, 
    col = 1, col.predicted = 2, col.intervals = 4, col.separator = 1, 
    lty = 1, lty.predicted = 1, lty.intervals = 1, lty.separator = 3, 
    ylab = "Observed / Fitted", main = "Holt-Winters filtering", 
    ylim = NULL, ...) 
{
    if (is.null(ylim)) 
        ylim <- range(na.omit(c(fitted(x)[, 1], x$x, predicted.values)))
    preds <- length(predicted.values) > 1 || !is.na(predicted.values)
    dev.hold()
    on.exit(dev.flush())
    plot(ts(c(fitted(x)[, 1], if (preds) predicted.values[, 1]), 
        start = start(fitted(x)[, 1]), frequency = frequency(fitted(x)[, 
            1])), col = col.predicted, ylim = ylim, ylab = ylab, 
        main = main, lty = lty.predicted, ...)
    if (preds && intervals && ncol(predicted.values) > 1) {
        lines(predicted.values[, 2], col = col.intervals, lty = lty.intervals)
        lines(predicted.values[, 3], col = col.intervals, lty = lty.intervals)
    }
    lines(x$x, col = col, lty = lty)
    if (separator && preds) 
        abline(v = time(x$x)[length(x$x)], lty = lty.separator, 
            col = col.separator)
}

# Examples
