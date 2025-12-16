#? stdlib
`panel.smooth` <- function (x, y, col = par("col"), bg = NA, pch = par("pch"), 
    cex = 1, col.smooth = 2, span = 2/3, iter = 3, ...) 
{
    points(x, y, pch = pch, col = col, bg = bg, cex = cex)
    ok <- is.finite(x) & is.finite(y)
    if (any(ok)) 
        lines(stats::lowess(x[ok], y[ok], f = span, iter = iter), 
            col = col.smooth, ...)
}

# Examples
pairs(swiss, panel = panel.smooth, pch = ".")  # emphasize the smooths
pairs(swiss, panel = panel.smooth, lwd = 2, cex = 1.5, col = 4)  # hmm...

