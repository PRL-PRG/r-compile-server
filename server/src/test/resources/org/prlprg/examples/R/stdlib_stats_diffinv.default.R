#? stdlib
`diffinv.default` <- function (x, lag = 1, differences = 1, xi, ...) 
{
    if (is.matrix(x)) {
        n <- nrow(x)
        m <- ncol(x)
        y <- matrix(0, nrow = n + lag * differences, ncol = m)
        if (m >= 1) {
            if (missing(xi)) 
                xi <- matrix(0, lag * differences, m)
            if (NROW(xi) != lag * differences || NCOL(xi) != 
                m) 
                stop("incorrect dimensions for 'xi'")
            for (i in 1L:m) y[, i] <- diffinv.vector(as.vector(x[, 
                i]), lag, differences, as.vector(xi[, i]))
        }
    }
    else if (is.vector(x)) 
        y <- diffinv.vector(x, lag, differences, xi)
    else stop("'x' is not a vector or matrix")
    y
}
