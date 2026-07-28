#? stdlib
`approx` <- function (x, y = NULL, xout, method = "linear", n = 50, yleft, 
    yright, rule = 1, f = 0, ties = mean, na.rm = TRUE) 
{
    method <- pmatch(method, c("linear", "constant"))
    if (is.na(method)) 
        stop("invalid interpolation method")
    stopifnot(is.numeric(rule), (lenR <- length(rule)) >= 1L, 
        lenR <= 2L)
    if (lenR == 1) 
        rule <- rule[c(1, 1)]
    r <- regularize.values(x, y, ties, missing(ties), na.rm = na.rm)
    y <- r$y
    x <- r$x
    noNA <- na.rm || !r$keptNA
    nx <- if (noNA) 
        length(x)
    else sum(r$notNA)
    if (is.na(nx)) 
        stop("invalid length(x)")
    if (nx <= 1) {
        if (method == 1) 
            stop("need at least two non-NA values to interpolate")
        if (nx == 0) 
            stop("zero non-NA points")
    }
    if (missing(yleft)) 
        yleft <- if (rule[1L] == 1) 
            NA
        else y[1L]
    if (missing(yright)) 
        yright <- if (rule[2L] == 1) 
            NA
        else y[length(y)]
    stopifnot(length(yleft) == 1L, length(yright) == 1L, length(f) == 
        1L)
    if (missing(xout)) {
        if (n <= 0) 
            stop("'approx' requires n >= 1")
        xout <- if (noNA) 
            seq.int(x[1L], x[nx], length.out = n)
        else {
            xout <- x[r$notNA]
            seq.int(xout[1L], xout[length(xout)], length.out = n)
        }
    }
    x <- as.double(x)
    y <- as.double(y)
    .Call(C_ApproxTest, x, y, method, f, na.rm)
    yout <- .Call(C_Approx, x, y, xout, method, yleft, yright, 
        f, na.rm)
    list(x = xout, y = yout)
}
