#? stdlib
`plot.window` <- function (xlim, ylim, log = "", asp = NA, ...) 
{
    .External.graphics(C_plot_window, xlim, ylim, log, asp, ...)
    invisible()
}

# Examples
##--- An example for the use of 'asp' :
require(stats)  # normally loaded
loc <- cmdscale(eurodist)
rx <- range(x <- loc[,1])
ry <- range(y <- -loc[,2])
plot(x, y, type = "n", asp = 1, xlab = "", ylab = "")
abline(h = pretty(rx, 10), v = pretty(ry, 10), col = "lightgray")
text(x, y, labels(eurodist), cex = 0.8)

