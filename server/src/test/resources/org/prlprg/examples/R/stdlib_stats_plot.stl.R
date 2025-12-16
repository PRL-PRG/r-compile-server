#? stdlib
`plot.stl` <- function (x, labels = colnames(X), set.pars = list(mar = c(0, 
    6, 0, 6), oma = c(6, 0, 4, 0), tck = -0.01, mfrow = c(nplot, 
    1)), main = NULL, range.bars = TRUE, ..., col.range = "light gray") 
{
    sers <- x$time.series
    ncomp <- ncol(sers)
    data <- drop(sers %*% rep(1, ncomp))
    X <- cbind(data, sers)
    colnames(X) <- c("data", colnames(sers))
    nplot <- ncomp + 1
    if (range.bars) 
        mx <- min(apply(rx <- apply(X, 2, range), 2, diff))
    dev.hold()
    on.exit(dev.flush())
    if (length(set.pars)) {
        oldpar <- do.call("par", as.list(names(set.pars)))
        on.exit(par(oldpar), add = TRUE)
        do.call("par", set.pars)
    }
    for (i in 1L:nplot) {
        plot(X[, i], type = if (i < nplot) 
            "l"
        else "h", xlab = "", ylab = "", axes = FALSE, ...)
        if (range.bars) {
            dx <- 1/64 * diff(ux <- par("usr")[1L:2])
            y <- mean(rx[, i])
            rect(ux[2L] - dx, y + mx/2, ux[2L] - 0.4 * dx, y - 
                mx/2, col = col.range, xpd = TRUE)
        }
        if (i == 1 && !is.null(main)) 
            title(main, line = 2, outer = par("oma")[3L] > 0)
        if (i == nplot) 
            abline(h = 0)
        box()
        right <- i%%2 == 0
        axis(2, labels = !right)
        axis(4, labels = right)
        axis(1, labels = i == nplot)
        mtext(labels[i], side = 2, 3)
    }
    mtext("time", side = 1, line = 3)
    invisible()
}
