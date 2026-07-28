#? stdlib
`pkolmogorov` <- function (q, size, two.sided = TRUE, exact = TRUE, lower.tail = TRUE) 
{
    if (is.na(q)) 
        return(NA_real_)
    if (q <= 0) 
        return(1 - lower.tail)
    if (q > 1) 
        return(as.numeric(lower.tail))
    if (exact) {
        if (two.sided) 
            pkolmogorov_two_exact(q, size, lower.tail)
        else pkolmogorov_one_exact(q, size, lower.tail)
    }
    else {
        if (two.sided) 
            pkolmogorov_two_asymp(q, size, lower.tail)
        else pkolmogorov_one_asymp(q, size, lower.tail)
    }
}
