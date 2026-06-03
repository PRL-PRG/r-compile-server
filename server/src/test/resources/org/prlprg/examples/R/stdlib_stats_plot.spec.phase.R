#? stdlib
`plot.spec.phase` <- function (x, ci = 0.95, xlab = "frequency", ylab = "phase", ylim = c(-pi, 
    pi), type = "l", main = NULL, ci.col = "blue", ci.lty = 3, 
    ...) 
{
    nser <- NCOL(x$spec)
    gg <- 2/x$df
    if (is.null(main)) 
        main <- paste(paste("Series:", x$series), "Phase spectrum", 
            sep = "  -- ")
    if (nser == 2) {
        plot(x$freq, x$phase, type = type, xlab = xlab, ylab = ylab, 
            ylim = ylim, ...)
        coh <- sqrt(x$coh)
        cl <- asin(pmin(0.9999, qt(ci, 2/gg - 2) * sqrt(gg * 
            (coh^{
                -2
            } - 1)/(2 * (1 - gg)))))
        lines(x$freq, x$phase + cl, lty = ci.lty, col = ci.col)
        lines(x$freq, x$phase - cl, lty = ci.lty, col = ci.col)
        title(main)
    }
    else {
        dev.hold()
        on.exit(dev.flush())
        opar <- par(mfrow = c(nser - 1, nser - 1), mar = c(1.5, 
            1.5, 0.5, 0.5), oma = c(4, 4, 6, 4))
        on.exit(par(opar), add = TRUE)
        plot.new()
        for (j in 2:nser) for (i in 1L:(j - 1)) {
            par(mfg = c(j - 1, i, nser - 1, nser - 1))
            ind <- i + (j - 1) * (j - 2)/2
            plot(x$freq, x$phase[, ind], type = type, ylim = ylim, 
                axes = FALSE, xlab = "", ylab = "", ...)
            coh <- sqrt(x$coh[, ind])
            cl <- asin(pmin(0.9999, qt(ci, 2/gg - 2) * sqrt(gg * 
                (coh^{
                  -2
                } - 1)/(2 * (1 - gg)))))
            lines(x$freq, x$phase[, ind] + cl, lty = ci.lty, 
                col = ci.col)
            lines(x$freq, x$phase[, ind] - cl, lty = ci.lty, 
                col = ci.col)
            box()
            if (i == 1) {
                axis(2, xpd = NA)
                title(ylab = x$snames[j], xpd = NA)
            }
            if (j == nser) {
                axis(1, xpd = NA)
                title(xlab = x$snames[i], xpd = NA)
            }
            mtext(main, 3, 3, TRUE, 0.5, cex = par("cex.main"), 
                font = par("font.main"))
        }
    }
    invisible()
}
