#? stdlib
`smoothScatter` <- function (x, y = NULL, nbin = 128, bandwidth, colramp = colorRampPalette(c("white", 
    blues9)), nrpoints = 100, ret.selection = FALSE, pch = ".", 
    cex = 1, col = "black", transformation = function(x) x^0.25, 
    postPlotHook = box, xlab = NULL, ylab = NULL, xlim, ylim, 
    xaxs = par("xaxs"), yaxs = par("yaxs"), ...) 
{
    if (!is.numeric(nrpoints) || nrpoints < 0 || length(nrpoints) != 
        1) 
        stop("'nrpoints' should be numeric scalar with value >= 0.")
    nrpoints <- round(nrpoints)
    ret.selection <- ret.selection && nrpoints > 0
    xlabel <- if (!missing(x)) 
        deparse1(substitute(x))
    ylabel <- if (!missing(y)) 
        deparse1(substitute(y))
    xy <- xy.coords(x, y, xlabel, ylabel)
    if (is.null(xlab)) 
        xlab <- xy$xlab
    if (is.null(ylab)) 
        ylab <- xy$ylab
    x <- cbind(xy$x, xy$y)[I <- is.finite(xy$x) & is.finite(xy$y), 
        , drop = FALSE]
    if (ret.selection) 
        iS <- which(I)
    if (!missing(xlim)) {
        stopifnot(is.numeric(xlim), length(xlim) == 2, is.finite(xlim))
        x <- x[I <- min(xlim) <= x[, 1] & x[, 1] <= max(xlim), 
            , drop = FALSE]
        if (ret.selection) 
            iS <- iS[I]
    }
    else {
        xlim <- range(x[, 1])
    }
    if (!missing(ylim)) {
        stopifnot(is.numeric(ylim), length(ylim) == 2, is.finite(ylim))
        x <- x[I <- min(ylim) <= x[, 2] & x[, 2] <= max(ylim), 
            , drop = FALSE]
        if (ret.selection) 
            iS <- iS[I]
    }
    else {
        ylim <- range(x[, 2])
    }
    map <- grDevices:::.smoothScatterCalcDensity(x, nbin, bandwidth)
    xm <- map$x1
    ym <- map$x2
    dens <- map$fhat
    dens[] <- transformation(dens)
    image(xm, ym, z = dens, col = colramp(256), xlab = xlab, 
        ylab = ylab, xlim = xlim, ylim = ylim, xaxs = xaxs, yaxs = yaxs, 
        ...)
    if (!is.null(postPlotHook)) 
        postPlotHook()
    if (nrpoints > 0) {
        nrpoints <- min(nrow(x), ceiling(nrpoints))
        stopifnot((nx <- length(xm)) == nrow(dens), (ny <- length(ym)) == 
            ncol(dens))
        ixm <- 1L + as.integer((nx - 1) * (x[, 1] - xm[1])/(xm[nx] - 
            xm[1]))
        iym <- 1L + as.integer((ny - 1) * (x[, 2] - ym[1])/(ym[ny] - 
            ym[1]))
        sel <- order(dens[cbind(ixm, iym)])[seq_len(nrpoints)]
        x <- x[sel, , drop = FALSE]
        points(x, pch = pch, cex = cex, col = col)
        if (ret.selection) 
            iS[sel]
    }
}

# Examples\donttest{
## A largish data set
n <- 10000
x1  <- matrix(rnorm(n), ncol = 2)
x2  <- matrix(rnorm(n, mean = 3, sd = 1.5), ncol = 2)
x   <- rbind(x1, x2)

oldpar <- par(mfrow = c(2, 2), mar=.1+c(3,3,1,1), mgp = c(1.5, 0.5, 0))
smoothScatter(x, nrpoints = 0)
smoothScatter(x)

## a different color scheme:
Lab.palette <- colorRampPalette(c("blue", "orange", "red"), space = "Lab")
i.s <- smoothScatter(x, colramp = Lab.palette,
                     ## pch=NA: do not draw them
                     nrpoints = 250, ret.selection=TRUE)
## label the 20 very lowest-density points,the "outliers" (with obs.number):
i.20 <- i.s[1:20]
text(x[i.20,], labels = i.20, cex= 0.75)

## somewhat similar, using identical smoothing computations,
## but considerably *less* efficient for really large data:
plot(x, col = densCols(x), pch = 20)

## use with pairs:
par(mfrow = c(1, 1))
y <- matrix(rnorm(40000), ncol = 4) + 3*rnorm(10000)
y[, c(2,4)] <-  -y[, c(2,4)]
pairs(y, panel = function(...) smoothScatter(..., nrpoints = 0, add = TRUE),
      gap = 0.2)

par(oldpar)
}
