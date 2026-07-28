#? stdlib
`plot.spec.coherency` <- function (x, ci = 0.95, xlab = "frequency", ylab = "squared coherency", 
    ylim = c(0, 1), type = "l", main = NULL, ci.col = "blue", 
    ci.lty = 3, ...) 
{
    nser <- NCOL(x$spec)
    gg <- 2/x$df
    se <- sqrt(gg/2)
    z <- -qnorm((1 - ci)/2)
    if (is.null(main)) 
        main <- paste(paste("Series:", x$series), "Squared Coherency", 
            sep = " --  ")
    if (nser == 2) {
        plot(x$freq, x$coh, type = type, xlab = xlab, ylab = ylab, 
            ylim = ylim, ...)
        coh <- pmin(0.99999, sqrt(x$coh))
        lines(x$freq, (tanh(atanh(coh) + z * se))^2, lty = ci.lty, 
            col = ci.col)
        lines(x$freq, (pmax(0, tanh(atanh(coh) - z * se)))^2, 
            lty = ci.lty, col = ci.col)
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
            plot(x$freq, x$coh[, ind], type = type, ylim = ylim, 
                axes = FALSE, xlab = "", ylab = "", ...)
            coh <- pmin(0.99999, sqrt(x$coh[, ind]))
            lines(x$freq, (tanh(atanh(coh) + z * se))^2, lty = ci.lty, 
                col = ci.col)
            lines(x$freq, (pmax(0, tanh(atanh(coh) - z * se)))^2, 
                lty = ci.lty, col = ci.col)
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
