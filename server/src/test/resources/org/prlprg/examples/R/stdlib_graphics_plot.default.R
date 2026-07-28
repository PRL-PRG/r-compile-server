#? stdlib
`plot.default` <- function (x, y = NULL, type = "p", xlim = NULL, ylim = NULL, 
    log = "", main = NULL, sub = NULL, xlab = NULL, ylab = NULL, 
    ann = par("ann"), axes = TRUE, frame.plot = axes, panel.first = NULL, 
    panel.last = NULL, asp = NA, xgap.axis = NA, ygap.axis = NA, 
    ...) 
{
    localAxis <- function(..., col, bg, pch, cex, lty, lwd) Axis(...)
    localBox <- function(..., col, bg, pch, cex, lty, lwd) box(...)
    localWindow <- function(..., col, bg, pch, cex, lty, lwd) plot.window(...)
    localTitle <- function(..., col, bg, pch, cex, lty, lwd) title(...)
    xlabel <- if (!missing(x)) 
        deparse1(substitute(x))
    ylabel <- if (!missing(y)) 
        deparse1(substitute(y))
    xy <- xy.coords(x, y, xlabel, ylabel, log)
    if (is.null(xlab)) 
        xlab <- xy$xlab
    if (is.null(ylab)) 
        ylab <- xy$ylab
    if (is.null(xlim)) 
        xlim <- range(xy$x[is.finite(xy$x)])
    if (is.null(ylim)) 
        ylim <- range(xy$y[is.finite(xy$y)])
    dev.hold()
    on.exit(dev.flush())
    plot.new()
    localWindow(xlim, ylim, log, asp, ...)
    panel.first
    plot.xy(xy, type, ...)
    panel.last
    if (axes) {
        localAxis(if (is.null(y)) 
            xy$x
        else x, side = 1, gap.axis = xgap.axis, ...)
        localAxis(if (is.null(y)) 
            x
        else y, side = 2, gap.axis = ygap.axis, ...)
    }
    if (frame.plot) 
        localBox(...)
    if (ann) 
        localTitle(main = main, sub = sub, xlab = xlab, ylab = ylab, 
            ...)
    invisible()
}

# Examples
Speed <- cars$speed
Distance <- cars$dist
plot(Speed, Distance, panel.first = grid(8, 8),
     pch = 0, cex = 1.2, col = "blue")
plot(Speed, Distance,
     panel.first = lines(stats::lowess(Speed, Distance), lty = "dashed"),
     pch = 0, cex = 1.2, col = "blue")

## Show the different plot types
x <- 0:12
y <- sin(pi/5 * x)
op <- par(mfrow = c(3,3), mar = .1+ c(2,2,3,1))
for (tp in c("p","l","b",  "c","o","h",  "s","S","n")) {
   plot(y ~ x, type = tp, main = paste0("plot(*, type = \"", tp, "\")"))
   if(tp == "S") {
      lines(x, y, type = "s", col = "red", lty = 2)
      mtext("lines(*, type = \"s\", ...)", col = "red", cex = 0.8)
   }
}
par(op)

##--- Log-Log Plot  with  custom axes
lx <- seq(1, 5, length.out = 41)
yl <- expression(e^{-frac(1,2) * {log[10](x)}^2})
y <- exp(-.5*lx^2)
op <- par(mfrow = c(2,1), mar = par("mar")-c(1,0,2,0), mgp = c(2, .7, 0))
plot(10^lx, y, log = "xy", type = "l", col = "purple",
     main = "Log-Log plot", ylab = yl, xlab = "x")
plot(10^lx, y, log = "xy", type = "o", pch = ".", col = "forestgreen",
     main = "Log-Log plot with custom axes", ylab = yl, xlab = "x",
     axes = FALSE, frame.plot = TRUE)
my.at <- 10^(1:5)
axis(1, at = my.at, labels = formatC(my.at, format = "fg"))
e.y <- -5:-1 ; at.y <- 10^e.y
axis(2, at = at.y, col.axis = "red", las = 1,
     labels = as.expression(lapply(e.y, function(E) bquote(10^.(E)))))
par(op)

