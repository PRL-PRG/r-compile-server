#? stdlib
`spline` <- function (x, y = NULL, n = 3 * length(x), method = "fmm", xmin = min(x), 
    xmax = max(x), xout, ties = mean) 
{
    method <- pmatch(method, c("periodic", "natural", "fmm", 
        "hyman"))
    if (is.na(method)) 
        stop("invalid interpolation method")
    x <- regularize.values(x, y, ties, missing(ties))
    y <- x$y
    x <- x$x
    nx <- length(x)
    if (is.na(nx)) 
        stop(gettextf("invalid value of %s", "length(x)"), domain = NA)
    if (nx == 0) 
        stop("zero non-NA points")
    if (method == 1L && y[1L] != y[nx]) {
        warning("spline: first and last y values differ - using y[1] for both")
        y[nx] <- y[1L]
    }
    if (method == 4L) {
        dy <- diff(y)
        if (!(all(dy >= 0) || all(dy <= 0))) 
            stop("'y' must be increasing or decreasing")
    }
    if (missing(xout)) 
        xout <- seq.int(xmin, xmax, length.out = n)
    else n <- length(xout)
    if (n <= 0L) 
        stop("'spline' requires n >= 1")
    xout <- as.double(xout)
    z <- .Call(C_SplineCoef, min(3L, method), x, y)
    if (method == 4L) 
        z <- spl_coef_conv(hyman_filter(z))
    list(x = xout, y = .Call(C_SplineEval, xout, z))
}
