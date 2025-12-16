#? stdlib
`pkolmogorov_two_exact` <- function (q, n, lower.tail = TRUE) 
{
    p <- .Call(C_pkolmogorov_two_exact, q, n)
    if (lower.tail) 
        p
    else 1 - p
}
