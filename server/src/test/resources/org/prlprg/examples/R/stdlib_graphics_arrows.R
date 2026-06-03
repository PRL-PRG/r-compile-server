#? stdlib
`arrows` <- function (x0, y0, x1 = x0, y1 = y0, length = 0.25, angle = 30, 
    code = 2, col = par("fg"), lty = par("lty"), lwd = par("lwd"), 
    ...) 
{
    if (missing(x1) && missing(y1)) 
        stop("one of 'x1' and 'y1' must be given")
    if (length(length) > 1 || length(angle) > 1 || length(code) > 
        1) 
        warning("'length', 'angle', or 'code' greater than length 1; values after the first are ignored")
    .External.graphics(C_arrows, x0, y0, x1, y1, length = length, 
        angle = angle, code = code, col = col, lty = lty, lwd = lwd, 
        ...)
    invisible()
}

# Examples
x <- stats::runif(12); y <- stats::rnorm(12)
i <- order(x, y); x <- x[i]; y <- y[i]
plot(x,y, main = "arrows(.) and segments(.)")
## draw arrows from point to point :
s <- seq(length(x)-1)  # one shorter than data
arrows(x[s], y[s], x[s+1], y[s+1], col = 1:3)
s <- s[-length(s)]
segments(x[s], y[s], x[s+2], y[s+2], col = "pink")

