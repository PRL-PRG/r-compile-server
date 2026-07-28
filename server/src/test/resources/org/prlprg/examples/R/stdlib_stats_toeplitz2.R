#? stdlib
`toeplitz2` <- function (x, nrow = length(x) + 1L - ncol, ncol = length(x) + 
    1L - nrow) 
{
    if (!is.vector(x)) 
        stop("'x' is not a vector")
    if (!missing(nrow)) 
        stopifnot(length(nrow) == 1L, nrow >= 0)
    if (!missing(ncol)) 
        stopifnot(length(ncol) == 1L, ncol >= 0)
    stopifnot(length(x) >= nrow + ncol - 1L)
    d <- c(nrow, ncol)
    array(x[ncol - .col(d) + .row(d)], d)
}
