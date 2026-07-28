#? stdlib
`pkolmogorov_two_asymp` <- function (q, n, lower.tail = TRUE) 
{
    .Call(C_pkolmogorov_two_limit, sqrt(n) * q, lower.tail, tol = 1e-06)
}
