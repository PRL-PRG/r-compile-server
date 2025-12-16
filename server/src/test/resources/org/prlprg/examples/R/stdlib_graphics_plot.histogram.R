#? stdlib
`plot.histogram` <- function (x, freq = equidist, density = NULL, angle = 45, col = "lightgray", 
    border = NULL, lty = NULL, main = paste("Histogram of", paste(x$xname, 
        collapse = "\n")), sub = NULL, xlab = x$xname, ylab, 
    xlim = range(x$breaks), ylim = NULL, axes = TRUE, labels = FALSE, 
    add = FALSE, ann = TRUE, ...) 
{
    equidist <- if (is.logical(x$equidist)) 
        x$equidist
    else {
        h <- diff(x$breaks)
        diff(range(h)) < 1e-07 * mean(h)
    }
    if (freq && !equidist) 
        warning("the AREAS in the plot are wrong -- rather use 'freq = FALSE'")
    y <- if (freq) 
        x$counts
    else x$density
    nB <- length(x$breaks)
    if (is.null(y) || 0L == nB) 
        stop("'x' is wrongly structured")
    dev.hold()
    on.exit(dev.flush())
    if (!add) {
        if (is.null(ylim)) 
            ylim <- range(y, 0)
        if (missing(ylab)) 
            ylab <- if (!freq) 
                "Density"
            else "Frequency"
        plot.new()
        plot.window(xlim, ylim, "", ...)
        if (ann) 
            title(main = main, sub = sub, xlab = xlab, ylab = ylab, 
                ...)
        if (axes) {
            axis(1, ...)
            yt <- axTicks(2)
            if (freq && any(ni <- (yt%%1) != 0)) 
                yt <- yt[!ni]
            axis(2, at = yt, ...)
        }
    }
    rect(x$breaks[-nB], 0, x$breaks[-1L], y, col = col, border = border, 
        angle = angle, density = density, lty = lty)
    if ((logl <- is.logical(labels) && labels) || is.character(labels)) 
        text(x$mids, y, labels = if (logl) {
            if (freq) 
                x$counts
            else round(x$density, 3)
        }
        else labels, adj = c(0.5, -0.5))
    invisible()
}

# Examples
(wwt <- hist(women$weight, nclass = 7, plot = FALSE))
plot(wwt, labels = TRUE) # default main & xlab using wwt$xname
plot(wwt, border = "dark blue", col = "light blue",
     main = "Histogram of 15 women's weights", xlab = "weight [pounds]")

## Fake "lines" example, using non-default labels:
w2 <- wwt; w2$counts <- w2$counts - 1
lines(w2, col = "Midnight Blue", labels = ifelse(w2$counts, "> 1", "1"))

