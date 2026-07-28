#? stdlib
`plot.stepfun` <- function (x, xval, xlim, ylim = range(c(y, Fn.kn)), xlab = "x", 
    ylab = "f(x)", main = NULL, add = FALSE, verticals = TRUE, 
    do.points = (n < 1000), pch = par("pch"), col = par("col"), 
    col.points = col, cex.points = par("cex"), col.hor = col, 
    col.vert = col, lty = par("lty"), lwd = par("lwd"), ...) 
{
    if (!is.stepfun(x)) {
        if (is.numeric(x)) {
            sarg <- substitute(x)
            x <- ecdf(x)
            attr(x, "call") <- call("ecdf", sarg)
        }
        else stop("'plot.stepfun' called with wrong type of argument 'x'")
    }
    if (missing(main)) 
        main <- deparse(attr(x, "call") %||% sys.call())
    knF <- knots(x)
    xval <- if (missing(xval)) 
        knF
    else sort(xval)
    if (missing(xlim)) {
        rx <- range(xval)
        dr <- if (length(xval) > 1L) 
            max(0.08 * diff(rx), median(diff(xval)))
        else abs(xval)/16
        xlim <- rx + dr * c(-1, 1)
    }
    else dr <- diff(xlim)
    xval <- xval[xlim[1L] - dr <= xval & xval <= xlim[2L] + dr]
    ti <- c(xlim[1L] - dr, xval, xlim[2L] + dr)
    ti.l <- ti[-length(ti)]
    ti.r <- ti[-1L]
    y <- x(0.5 * (ti.l + ti.r))
    n <- length(y)
    Fn.kn <- x(xval)
    dev.hold()
    on.exit(dev.flush())
    if (add) 
        segments(ti.l, y, ti.r, y, col = col.hor, lty = lty, 
            lwd = lwd, ...)
    else {
        if (missing(ylim)) 
            ylim <- range(c(y, Fn.kn))
        plot(NA, NA, type = "n", xlim = xlim, ylim = ylim, xlab = xlab, 
            ylab = ylab, main = main, ...)
        segments(ti.l, y, ti.r, y, col = col.hor, lty = lty, 
            lwd = lwd)
    }
    if (do.points) 
        points(xval, Fn.kn, pch = pch, col = col.points, cex = cex.points)
    if (verticals) 
        segments(xval, y[-n], xval, y[-1L], col = col.vert, lty = lty, 
            lwd = lwd)
    invisible(list(t = ti, y = y))
}

# Examples
require(graphics)

y0 <- c(1,2,4,3)
sfun0  <- stepfun(1:3, y0, f = 0)
sfun.2 <- stepfun(1:3, y0, f = .2)
sfun1  <- stepfun(1:3, y0, right = TRUE)

tt <- seq(0, 3, by = 0.1)
op <- par(mfrow = c(2,2))
plot(sfun0); plot(sfun0, xval = tt, add = TRUE, col.hor = "bisque")
plot(sfun.2);plot(sfun.2, xval = tt, add = TRUE, col = "orange") # all colors
plot(sfun1);lines(sfun1, xval = tt, col.hor = "coral")
##-- This is  revealing :
plot(sfun0, verticals = FALSE,
     main = "stepfun(x, y0, f=f)  for f = 0, .2, 1")
for(i in 1:3)
  lines(list(sfun0, sfun.2, stepfun(1:3, y0, f = 1))[[i]], col = i)
legend(2.5, 1.9, paste("f =", c(0, 0.2, 1)), col = 1:3, lty = 1, y.intersp = 1)
par(op)

# Extend and/or restrict 'viewport':
plot(sfun0, xlim = c(0,5), ylim = c(0, 3.5),
     main = "plot(stepfun(*), xlim= . , ylim = .)")

##-- this works too (automatic call to  ecdf(.)):
plot.stepfun(rt(50, df = 3), col.vert = "gray20")

