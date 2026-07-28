#? stdlib
`stem` <- function (x, scale = 1, width = 80, atom = 1e-08) 
{
    if (!is.numeric(x)) 
        stop("'x' must be numeric")
    x <- x[is.finite(x)]
    n <- as.integer(length(x))
    if (is.na(n)) 
        stop("invalid length(x)")
    if (n == 0) 
        stop("no finite and non-missing values")
    if (scale <= 0) 
        stop("'scale' must be positive")
    .Call(C_StemLeaf, as.double(x), scale, width, atom)
    invisible(NULL)
}

# Examples
stem(islands)
stem(log10(islands))

