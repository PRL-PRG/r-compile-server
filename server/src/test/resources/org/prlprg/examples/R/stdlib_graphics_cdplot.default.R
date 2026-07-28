#? stdlib
`cdplot.default` <- function (x, y, plot = TRUE, tol.ylab = 0.05, ylevels = NULL, 
    bw = "nrd0", n = 512, from = NULL, to = NULL, col = NULL, 
    border = 1, main = "", xlab = NULL, ylab = NULL, yaxlabels = NULL, 
    xlim = NULL, ylim = c(0, 1), weights = NULL, ...) 
{
    if (is.null(xlab)) 
        xlab <- deparse1(substitute(x))
    if (is.null(ylab)) 
        ylab <- deparse1(substitute(y))
    if (is.null(col)) 
        col <- gray.colors(length(levels(y)))
    col <- rep_len(col, length.out = length(levels(y)))
    if (is.null(yaxlabels)) 
        yaxlabels <- levels(y)
    xorig <- x
    x <- as.numeric(x)
    if (!is.factor(y)) 
        stop("dependent variable should be a factor")
    w <- if (is.null(weights)) 
        NULL
    else weights/sum(weights)
    ylevels <- if (is.null(ylevels)) 
        nlevels(y):1L
    else rev(ylevels)
    y <- factor(y, levels = if (is.numeric(ylevels)) 
        levels(y)[ylevels]
    else ylevels)
    yaxlabels <- yaxlabels[ylevels]
    dx <- if (is.null(from) && is.null(to)) 
        stats::density(x, bw = bw, n = n, weights = w, ...)
    else stats::density(x, bw = bw, from = from, to = to, n = n, 
        weights = w, ...)
    x1 <- dx$x
    ny <- length(levels(y))
    if (is.null(weights)) {
        yprop <- cumsum(proportions(table(y)))
    }
    else {
        yprop <- cumsum(proportions(tapply(weights, y, FUN = sum, 
            na.rm = TRUE)))
        yprop[is.na(yprop)] <- 0
    }
    y1 <- matrix(rep(0, n * (ny - 1L)), nrow = (ny - 1L))
    rval <- list()
    for (i in seq_len(ny - 1L)) {
        yi <- y %in% levels(y)[seq_len(i)]
        wi <- if (is.null(weights)) 
            NULL
        else weights[yi]/sum(weights[yi])
        dxi <- stats::density(x[yi], bw = dx$bw, n = n, from = min(dx$x), 
            to = max(dx$x), weights = wi, ...)
        y1[i, ] <- dxi$y/dx$y * yprop[i]
        rval[[i]] <- stats::approxfun(x1, y1[i, ], rule = 2)
    }
    names(rval) <- levels(y)[seq_len(ny - 1L)]
    y1 <- rbind(0, y1, 1)
    y1 <- y1[, which(x1 >= min(x) & x1 <= max(x))]
    x1 <- x1[x1 >= min(x) & x1 <= max(x)]
    if (is.null(xlim)) 
        xlim <- range(x1)
    if (any(ylim < 0) || any(ylim > 1)) {
        warning("y axis is on a cumulative probability scale, 'ylim' must be in [0,1]")
        if (min(ylim) > 1 || max(ylim) < 0) 
            ylim <- c(0, 1)
        else ylim <- c(max(min(ylim), 0), min(max(ylim), 1))
    }
    if (plot) {
        dev.hold()
        on.exit(dev.flush())
        plot(0, 0, xlim = xlim, ylim = ylim, type = "n", axes = FALSE, 
            xaxs = "i", yaxs = "i", xlab = xlab, ylab = ylab, 
            main = main)
        for (i in seq_len(NROW(y1) - 1L)) polygon(c(x1, rev(x1)), 
            c(y1[i + 1, ], rev(y1[i, ])), col = col[i], border = border)
        Axis(xorig, side = 1)
        equidist <- any(diff(y1[, 1L]) < tol.ylab)
        if (equidist) 
            axis(2, at = seq.int(1/(2 * ny), 1 - 1/(2 * ny), 
                by = 1/ny), labels = yaxlabels, tick = FALSE)
        else axis(2, at = (y1[-1L, 1L] + y1[-NROW(y1), 1L])/2, 
            labels = yaxlabels, tick = FALSE)
        axis(4)
        box()
    }
    invisible(rval)
}
