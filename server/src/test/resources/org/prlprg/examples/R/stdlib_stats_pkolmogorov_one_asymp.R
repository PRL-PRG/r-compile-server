#? stdlib
`pkolmogorov_one_asymp` <- function (q, n, lower.tail = TRUE) 
{
    p <- exp(-2 * n * q^2)
    if (lower.tail) 
        1 - p
    else p
}
