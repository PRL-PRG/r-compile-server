#? stdlib
`symbols` <- function (x, y = NULL, circles, squares, rectangles, stars, thermometers, 
    boxplots, inches = TRUE, add = FALSE, fg = par("col"), bg = NA, 
    xlab = NULL, ylab = NULL, main = NULL, xlim = NULL, ylim = NULL, 
    ...) 
{
    count <- 0
    if (!missing(circles)) {
        count <- count + 1
        data <- circles
        type <- 1
    }
    if (!missing(squares)) {
        count <- count + 1
        data <- squares
        type <- 2
    }
    if (!missing(rectangles)) {
        count <- count + 1
        data <- rectangles
        type <- 3
    }
    if (!missing(stars)) {
        count <- count + 1
        data <- stars
        type <- 4
    }
    if (!missing(thermometers)) {
        count <- count + 1
        data <- thermometers
        type <- 5
    }
    if (!missing(boxplots)) {
        count <- count + 1
        data <- boxplots
        type <- 6
    }
    if (count != 1) 
        stop("exactly one symbol type must be specified")
    xy <- xy.coords(x, y, xlab = deparse1(substitute(x)), ylab = deparse1(substitute(y)))
    x <- xy$x
    y <- xy$y
    if (!add) {
        if (is.null(xlab)) 
            xlab <- xy$xlab
        if (is.null(ylab)) 
            ylab <- xy$ylab
        if (is.null(xlim)) 
            xlim <- extendrange(x, f = 0.1)
        if (is.null(ylim)) 
            ylim <- extendrange(y, f = 0.1)
        plot(NA, NA, type = "n", xlim = xlim, ylim = ylim, xlab = xlab, 
            ylab = ylab, main = main, ...)
    }
    invisible(.External.graphics(C_symbols, x, y, type, data, 
        inches, bg, fg, ...))
}

# Examples
require(stats); require(grDevices)
x <- 1:10
y <- sort(10*runif(10))
z <- runif(10)
z3 <- cbind(z, 2*runif(10), runif(10))
symbols(x, y, thermometers = cbind(.5, 1, z), inches = .5, fg = 1:10)
symbols(x, y, thermometers = z3, inches = FALSE)
text(x, y, apply(format(round(z3, digits = 2)), 1, paste, collapse = ","),
     adj = c(-.2,0), cex = .75, col = "purple", xpd = NA)

## Note that  example(trees)  shows more sensible plots!
N <- nrow(trees)
with(trees, {
## Girth is diameter in inches
symbols(Height, Volume, circles = Girth/24, inches = FALSE,
        main = "Trees' Girth") # xlab and ylab automatically
## Colours too:
op <- palette(rainbow(N, end = 0.9))
symbols(Height, Volume, circles = Girth/16, inches = FALSE, bg = 1:N,
        fg = "gray30", main = "symbols(*, circles = Girth/16, bg = 1:N)")
palette(op)
})

