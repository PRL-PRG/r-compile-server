#? stdlib
`segments` <- function (x0, y0, x1 = x0, y1 = y0, col = par("fg"), lty = par("lty"), 
    lwd = par("lwd"), ...) 
{
    if (missing(x1) && missing(y1)) 
        stop("one of 'x1' and 'y1' must be given")
    .External.graphics(C_segments, x0, y0, x1, y1, col = col, 
        lty = lty, lwd = lwd, ...)
    invisible()
}

# Examples
x <- stats::runif(12); y <- stats::rnorm(12)
i <- order(x, y); x <- x[i]; y <- y[i]
plot(x, y, main = "arrows(.) and segments(.)")
## draw arrows from point to point :
s <- seq(length(x)-1)  # one shorter than data
arrows(x[s], y[s], x[s+1], y[s+1], col= 1:3)
s <- s[-length(s)]
segments(x[s], y[s], x[s+2], y[s+2], col= 'pink')

