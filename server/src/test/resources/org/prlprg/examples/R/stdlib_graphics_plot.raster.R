#? stdlib
`plot.raster` <- function (x, y, xlim = c(0, ncol(x)), ylim = c(0, nrow(x)), xaxs = "i", 
    yaxs = "i", asp = 1, add = FALSE, ...) 
{
    if (!add) {
        plot.new()
        plot.window(xlim = xlim, ylim = ylim, asp = asp, xaxs = xaxs, 
            yaxs = yaxs)
    }
    rasterImage(x, 0, 0, ncol(x), nrow(x), ...)
}

# Examples
require(grDevices)
r <- as.raster(c(0.5, 1, 0.5))
plot(r)
# additional arguments to rasterImage()
plot(r, interpolate=FALSE)
# distort
plot(r, asp=NA)
# fill page
op <- par(mar=rep(0, 4))
plot(r, asp=NA)
par(op)
# normal annotations work
plot(r, asp=NA)
box()
title(main="This is my raster")
# add to existing plot
plot(1)
plot(r, add=TRUE)

