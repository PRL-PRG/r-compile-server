#? stdlib
`diffinv.vector` <- function (x, lag = 1L, differences = 1L, xi, ...) 
{
    if (!is.vector(x)) 
        stop("'x' is not a vector")
    lag <- as.integer(lag)
    differences <- as.integer(differences)
    if (lag < 1L || differences < 1L) 
        stop("bad value for 'lag' or 'differences'")
    if (missing(xi)) 
        xi <- rep(0, lag * differences)
    if (length(xi) != lag * differences) 
        stop("'xi' does not have the right length")
    if (differences == 1L) {
        x <- as.double(x)
        xi <- as.double(xi)
        n <- as.integer(length(x))
        if (is.na(n)) 
            stop(gettextf("invalid value of %s", "length(x)"), 
                domain = NA)
        .Call(C_intgrt_vec, x, xi, lag)
    }
    else diffinv.vector(diffinv.vector(x, lag, differences - 
        1L, diff(xi, lag = lag, differences = 1L)), lag, 1L, 
        xi[1L:lag])
}
