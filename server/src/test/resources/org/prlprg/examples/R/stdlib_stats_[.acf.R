#? stdlib
`[.acf` <- function (x, i, j) 
{
    if (missing(j)) 
        j <- seq_len(ncol(x$lag))
    ii <- if (missing(i)) 
        seq_len(nrow(x$lag))
    else match(i, x$lag[, 1, 1], nomatch = NA_integer_)
    x$acf <- x$acf[ii, j, j, drop = FALSE]
    x$lag <- x$lag[ii, j, j, drop = FALSE]
    x
}
