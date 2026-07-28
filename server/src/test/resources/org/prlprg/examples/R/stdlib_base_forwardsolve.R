#? stdlib
`forwardsolve` <- function (l, x, k = ncol(l), upper.tri = FALSE, transpose = FALSE) 
{
    l <- as.matrix(l)
    x.mat <- is.matrix(x)
    if (!x.mat) 
        x <- as.matrix(x)
    z <- .Internal(backsolve(l, x, k, upper.tri, transpose))
    if (x.mat) 
        z
    else drop(z)
}
