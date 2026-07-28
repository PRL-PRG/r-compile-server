#? stdlib
`splinefunH` <- function (x, y, m) 
{
    n <- length(x)
    stopifnot(is.numeric(x), is.numeric(y), is.numeric(m), length(y) == 
        n, length(m) == n)
    if (is.unsorted(x)) {
        i <- sort.list(x)
        x <- x[i]
        y <- y[i]
        m <- m[i]
    }
    dx <- x[-1L] - x[-n]
    if (anyNA(dx) || any(dx == 0)) 
        stop("'x' must be *strictly* increasing (non - NA)")
    splinefunH0(x, y, m, dx = dx)
}
