#? stdlib
`scatter.smooth` <- function (x, y = NULL, span = 2/3, degree = 1, family = c("symmetric", 
    "gaussian"), xlab = NULL, ylab = NULL, ylim = range(y, pred$y, 
    na.rm = TRUE), evaluation = 50, ..., lpars = list()) 
{
    xlabel <- if (!missing(x)) 
        deparse1(substitute(x))
    ylabel <- if (!missing(y)) 
        deparse1(substitute(y))
    xy <- xy.coords(x, y, xlabel, ylabel)
    x <- xy$x
    y <- xy$y
    pred <- loess.smooth(x, y, span, degree, family, evaluation)
    plot(x, y, ylim = ylim, xlab = xlab %||% xy$xlab, ylab = ylab %||% 
        xy$ylab, ...)
    do.call(lines, c(list(pred), lpars))
    invisible()
}

# Examples
require(graphics)

with(cars, scatter.smooth(speed, dist))
## or with dotted thick smoothed line results :
with(cars, scatter.smooth(speed, dist, lpars =
                    list(col = "red", lwd = 3, lty = 3)))

