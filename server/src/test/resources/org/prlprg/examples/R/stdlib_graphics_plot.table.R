#? stdlib
`plot.table` <- function (x, type = "h", ylim = c(0, max(x)), lwd = 2, xlab = NULL, 
    ylab = NULL, frame.plot = is.num, ...) 
{
    xnam <- deparse1(substitute(x))
    rnk <- length(dim(x))
    if (rnk == 0L) 
        stop("invalid table 'x'")
    if (rnk == 1L) {
        dn <- dimnames(x)
        nx <- dn[[1L]]
        if (is.null(xlab)) 
            xlab <- names(dn) %||% ""
        if (is.null(ylab)) 
            ylab <- xnam
        is.num <- suppressWarnings(!any(is.na(xx <- as.numeric(nx))))
        x0 <- if (is.num) 
            xx
        else seq_along(x)
        plot(x0, unclass(x), type = type, ylim = ylim, xlab = xlab, 
            ylab = ylab, frame.plot = frame.plot, lwd = lwd, 
            ..., xaxt = "n")
        localaxis <- function(..., col, bg, pch, cex, lty, log) axis(...)
        if (!isFALSE(list(...)$axes)) 
            localaxis(1, at = x0, labels = nx, ...)
    }
    else {
        if (length(dots <- list(...)) && !is.null(dots$main)) 
            mosaicplot(x, xlab = xlab, ylab = ylab, ...)
        else mosaicplot(x, xlab = xlab, ylab = ylab, main = xnam, 
            ...)
    }
}

# Examples
## 1-d tables
(Poiss.tab <- table(N = stats::rpois(200, lambda = 5)))
plot(Poiss.tab, main = "plot(table(rpois(200, lambda = 5)))")

plot(table(state.division))

## 4-D :
plot(Titanic, main ="plot(Titanic, main= *)")


