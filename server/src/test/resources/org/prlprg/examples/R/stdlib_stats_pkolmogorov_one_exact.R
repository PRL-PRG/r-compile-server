#? stdlib
`pkolmogorov_one_exact` <- function (q, n, lower.tail = TRUE) 
{
    j <- seq.int(from = 0, to = floor(n * (1 - q)))
    p <- q * sum(exp(lchoose(n, j) + (n - j) * log(1 - q - j/n) + 
        (j - 1) * log(q + j/n)))
    if (lower.tail) 
        1 - p
    else p
}
