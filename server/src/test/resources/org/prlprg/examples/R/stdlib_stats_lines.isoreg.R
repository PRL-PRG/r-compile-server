#? stdlib
`lines.isoreg` <- function (x, col = "red", lwd = 1.5, do.points = FALSE, cex = 1.5, 
    pch = 13, ...) 
{
    xx <- if (x$isOrd) 
        x$x
    else x$x[x$ord]
    lines(xx, x$yf, col = col, lwd = lwd, type = "S")
    if (do.points) 
        points(xx[x$iKnots], x$yf[x$iKnots], col = col, cex = cex, 
            pch = pch)
    invisible()
}
