#? stdlib
`polygon` <- function (x, y = NULL, density = NULL, angle = 45, border = NULL, 
    col = NA, lty = par("lty"), ..., fillOddEven = FALSE) 
{
    ..debug.hatch <- FALSE
    xy <- xy.coords(x, y, setLab = FALSE)
    if (is.numeric(density) && all(is.na(density) | density < 
        0)) 
        density <- NULL
    if (!is.null(angle) && !is.null(density)) {
        polygon.onehatch <- function(x, y, x0, y0, xd, yd, ..debug.hatch = FALSE, 
            ...) {
            if (..debug.hatch) {
                points(x0, y0)
                arrows(x0, y0, x0 + xd, y0 + yd)
            }
            halfplane <- as.integer(xd * (y - y0) - yd * (x - 
                x0) <= 0)
            cross <- halfplane[-1L] - halfplane[-length(halfplane)]
            does.cross <- cross != 0
            if (!any(does.cross)) 
                return()
            x1 <- x[-length(x)][does.cross]
            y1 <- y[-length(y)][does.cross]
            x2 <- x[-1L][does.cross]
            y2 <- y[-1L][does.cross]
            t <- (((x1 - x0) * (y2 - y1) - (y1 - y0) * (x2 - 
                x1))/(xd * (y2 - y1) - yd * (x2 - x1)))
            o <- order(t)
            tsort <- t[o]
            crossings <- cumsum(cross[does.cross][o])
            if (fillOddEven) 
                crossings <- crossings%%2
            drawline <- crossings != 0
            lx <- x0 + xd * tsort
            ly <- y0 + yd * tsort
            lx1 <- lx[-length(lx)][drawline]
            ly1 <- ly[-length(ly)][drawline]
            lx2 <- lx[-1L][drawline]
            ly2 <- ly[-1L][drawline]
            segments(lx1, ly1, lx2, ly2, ...)
        }
        polygon.fullhatch <- function(x, y, density, angle, ..debug.hatch = FALSE, 
            ...) {
            x <- c(x, x[1L])
            y <- c(y, y[1L])
            angle <- angle%%180
            if (par("xlog") || par("ylog")) {
                warning("cannot hatch with logarithmic scale active")
                return()
            }
            usr <- par("usr")
            pin <- par("pin")
            upi <- c(usr[2L] - usr[1L], usr[4L] - usr[3L])/pin
            if (upi[1L] < 0) 
                angle <- 180 - angle
            if (upi[2L] < 0) 
                angle <- 180 - angle
            upi <- abs(upi)
            xd <- cos(angle/180 * pi) * upi[1L]
            yd <- sin(angle/180 * pi) * upi[2L]
            if (angle < 45 || angle > 135) {
                if (angle < 45) {
                  first.x <- max(x)
                  last.x <- min(x)
                }
                else {
                  first.x <- min(x)
                  last.x <- max(x)
                }
                y.shift <- upi[2L]/density/abs(cos(angle/180 * 
                  pi))
                x0 <- 0
                y0 <- floor((min(y) - first.x * yd/xd)/y.shift) * 
                  y.shift
                y.end <- max(y) - last.x * yd/xd
                while (y0 < y.end) {
                  polygon.onehatch(x, y, x0, y0, xd, yd, ..debug.hatch = ..debug.hatch, 
                    ...)
                  y0 <- y0 + y.shift
                }
            }
            else {
                if (angle < 90) {
                  first.y <- max(y)
                  last.y <- min(y)
                }
                else {
                  first.y <- min(y)
                  last.y <- max(y)
                }
                x.shift <- upi[1L]/density/abs(sin(angle/180 * 
                  pi))
                x0 <- floor((min(x) - first.y * xd/yd)/x.shift) * 
                  x.shift
                y0 <- 0
                x.end <- max(x) - last.y * xd/yd
                while (x0 < x.end) {
                  polygon.onehatch(x, y, x0, y0, xd, yd, ..debug.hatch = ..debug.hatch, 
                    ...)
                  x0 <- x0 + x.shift
                }
            }
        }
        if (missing(col) || is.null(col)) {
            col <- par("fg")
        }
        else if (any(is.na(col))) {
            col[is.na(col)] <- par("fg")
        }
        if (is.null(border)) 
            border <- col
        if (is.logical(border)) {
            if (!is.na(border) && border) 
                border <- col
            else border <- NA
        }
        start <- 1
        ends <- c(seq_along(xy$x)[is.na(xy$x) | is.na(xy$y)], 
            length(xy$x) + 1)
        num.polygons <- length(ends)
        col <- rep_len(col, num.polygons)
        if (length(border)) 
            border <- rep_len(border, num.polygons)
        if (length(lty)) 
            lty <- rep_len(lty, num.polygons)
        if (length(density)) 
            density <- rep_len(density, num.polygons)
        angle <- rep_len(angle, num.polygons)
        i <- 1L
        for (end in ends) {
            if (end > start) {
                if (is.null(density) || is.na(density[i]) || 
                  density[i] < 0) 
                  .External.graphics(C_polygon, xy$x[start:(end - 
                    1)], xy$y[start:(end - 1)], col[i], NA, lty[i], 
                    ...)
                else if (density[i] > 0) {
                  polygon.fullhatch(xy$x[start:(end - 1)], xy$y[start:(end - 
                    1)], col = col[i], lty = lty[i], density = density[i], 
                    angle = angle[i], ..debug.hatch = ..debug.hatch, 
                    ...)
                }
                i <- i + 1
            }
            start <- end + 1
        }
        .External.graphics(C_polygon, xy$x, xy$y, NA, border, 
            lty, ...)
    }
    else {
        if (is.logical(border)) {
            if (isTRUE(border)) 
                border <- par("fg")
            else border <- NA
        }
        .External.graphics(C_polygon, xy$x, xy$y, col, border, 
            lty, ...)
    }
    invisible()
}

# Examples
x <- c(1:9, 8:1)
y <- c(1, 2*(5:3), 2, -1, 17, 9, 8, 2:9)
op <- par(mfcol = c(3, 1))
for(xpd in c(FALSE, TRUE, NA)) {
  plot(1:10, main = paste("xpd =", xpd))
  box("figure", col = "pink", lwd = 3)
  polygon(x, y, xpd = xpd, col = "orange", lty = 2, lwd = 2, border = "red")
}
par(op)

n <- 100
xx <- c(0:n, n:0)
yy <- c(c(0, cumsum(stats::rnorm(n))), rev(c(0, cumsum(stats::rnorm(n)))))
plot   (xx, yy, type = "n", xlab = "Time", ylab = "Distance")
polygon(xx, yy, col = "gray", border = "red")
title("Distance Between Brownian Motions")

# Multiple polygons from NA values
# and recycling of col, border, and lty
op <- par(mfrow = c(2, 1))
plot(c(1, 9), 1:2, type = "n")
polygon(1:9, c(2,1,2,1,1,2,1,2,1),
        col = c("red", "blue"),
        border = c("green", "yellow"),
        lwd = 3, lty = c("dashed", "solid"))
plot(c(1, 9), 1:2, type = "n")
polygon(1:9, c(2,1,2,1,NA,2,1,2,1),
        col = c("red", "blue"),
        border = c("green", "yellow"),
        lwd = 3, lty = c("dashed", "solid"))
par(op)

# Line-shaded polygons
plot(c(1, 9), 1:2, type = "n")
polygon(1:9, c(2,1,2,1,NA,2,1,2,1),
        density = c(10, 20), angle = c(-45, 45))

