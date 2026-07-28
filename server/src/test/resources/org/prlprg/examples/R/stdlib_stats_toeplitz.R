#? stdlib
`toeplitz` <- function (x, r = NULL, symmetric = is.null(r)) 
{
    if (!is.vector(x)) 
        stop("'x' is not a vector")
    n <- length(x)
    if (symmetric) {
        d <- c(n, n)
        array(x[abs(.col(d) - .row(d)) + 1L], d)
    }
    else {
        stopifnot(is.vector(r))
        nc <- length(r)
        if (n && nc && x[1L] != r[1L]) 
            warning("x[1] != r[1]; using x[1] for diagonal")
        d <- c(n, nc)
        array(c(if (nc >= 2L) r[nc:2L], x)[nc - .col(d) + .row(d)], 
            d)
    }
}
