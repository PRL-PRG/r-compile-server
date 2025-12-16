#? stdlib
`bw.ucv` <- function (x, nb = 1000L, lower = 0.1 * hmax, upper = hmax, tol = 0.1 * 
    lower) 
{
    if ((n <- length(x)) < 2L) 
        stop("need at least 2 data points")
    n <- as.integer(n)
    if (is.na(n)) 
        stop("invalid length(x)")
    if (!is.numeric(x)) 
        stop("invalid 'x'")
    nb <- as.integer(nb)
    if (is.na(nb) || nb <= 0L) 
        stop("invalid 'nb'")
    storage.mode(x) <- "double"
    hmax <- 1.144 * sqrt(var(x)) * n^(-1/5)
    Z <- bw_pair_cnts(x, nb, n > nb/2)
    d <- Z[[1L]]
    cnt <- Z[[2L]]
    fucv <- function(h) .Call(C_bw_ucv, n, d, cnt, h)
    h <- optimize(fucv, c(lower, upper), tol = tol)$minimum
    if (h < lower + tol || h > upper - tol) 
        warning("minimum occurred at one end of the range")
    h
}
