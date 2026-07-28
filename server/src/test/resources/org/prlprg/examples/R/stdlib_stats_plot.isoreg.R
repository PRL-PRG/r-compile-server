#? stdlib
`plot.isoreg` <- function (x, plot.type = c("single", "row.wise", "col.wise"), 
    main = paste("Isotonic regression", deparse(x$call)), main2 = "Cumulative Data and Convex Minorant", 
    xlab = "x0", ylab = "x$y", par.fit = list(col = "red", cex = 1.5, 
        pch = 13, lwd = 1.5), mar = if (both) 0.1 + c(3.5, 2.5, 
        1, 1) else par("mar"), mgp = if (both) c(1.6, 0.7, 0) else par("mgp"), 
    grid = length(x$x) < 12L, ...) 
{
    plot.type <- match.arg(plot.type)
    both <- plot.type != "single"
    if (both) {
        col.wise <- plot.type == "col.wise"
        if (!is.null(main)) 
            main.wid <- 2
        op <- par(mfcol = if (col.wise) 
            1L:2
        else 2:1, oma = c(0, 0, main.wid, 0), mar = mar, mgp = mgp)
    }
    else op <- par(mar = mar, mgp = mgp)
    on.exit(par(op))
    xx <- if (x$isOrd) 
        x$x
    else x$x[x$ord]
    x0 <- c(xx[1L] - mean(diff(xx)), xx)
    cy <- x$yc
    cf <- cumsum(c(0, x$yf))
    dev.hold()
    on.exit(dev.flush())
    plot(x0, c(NA, if (x$isOrd) x$y else x$y[x$ord]), ..., xlab = xlab, 
        ylab = ylab, main = if (!both) 
            main)
    lines(xx, x$yf, col = par.fit$col, lwd = par.fit$lwd, type = "S")
    points(xx[x$iKnots], x$yf[x$iKnots], col = par.fit$col, cex = par.fit$cex, 
        pch = par.fit$pch)
    if (grid) 
        grid()
    if (both) {
        plot(x0, cy, type = "n", xlab = xlab, ylab = paste0("cumsum(", 
            ylab, ")"), ylim = range(cy, cf), ...)
        i <- 1L + x$iKnots
        lines(x0, cf, col = par.fit$col, lwd = par.fit$lwd)
        points(x0[i], cy[i], col = par.fit$col, cex = par.fit$cex, 
            pch = par.fit$pch)
        if (grid) {
            Agrid <- formals("grid")
            abline(v = x0[i], col = Agrid$col, lty = Agrid$lty, 
                xpd = !col.wise)
        }
        points(x0[-1L], cy[-1L])
        if (!is.null(main2)) 
            mtext(main2, cex = par("cex.main"), col = par("col.main"), 
                font = par("font.main"))
        if (!is.null(main)) 
            mtext(main, side = 3, outer = TRUE, cex = par("cex.main"), 
                col = par("col.main"), font = par("font.main"))
    }
    invisible()
}

# Examples
require(graphics)

utils::example(isoreg) # for the examples there

plot(y3, main = "simple plot(.)  +  lines(<isoreg>)")
lines(ir3)

## 'same' plot as above, "proving" that only ranks of 'x' are important
plot(isoreg(2^(1:9), c(1,0,4,3,3,5,4,2,0)), plot.type = "row", log = "x")

plot(ir3, plot.type = "row", ylab = "y3")
plot(isoreg(y3 - 4), plot.type = "r", ylab = "y3 - 4")
plot(ir4, plot.type = "ro",  ylab = "y4", xlab = "x = 1:n")

## experiment a bit with these (C-c C-j):
plot(isoreg(sample(9),  y3), plot.type = "row")
plot(isoreg(sample(9),  y3), plot.type = "col.wise")

plot(ir <- isoreg(sample(10), sample(10, replace = TRUE)),
                  plot.type = "r")

