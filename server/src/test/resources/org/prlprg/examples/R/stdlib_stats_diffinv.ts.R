#? stdlib
`diffinv.ts` <- function (x, lag = 1, differences = 1, xi, ...) 
{
    y <- diffinv.default(if (is.ts(x) && is.null(dim(x))) 
        as.vector(x)
    else as.matrix(x), lag, differences, xi)
    ts(y, frequency = frequency(x), end = end(x))
}
