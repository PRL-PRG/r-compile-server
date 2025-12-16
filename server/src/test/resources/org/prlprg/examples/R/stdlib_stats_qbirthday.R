#? stdlib
`qbirthday` <- function (prob = 0.5, classes = 365, coincident = 2) 
{
    if (!length(prob)) 
        return(prob)
    k <- coincident
    c <- classes
    p <- prob
    if (p <= 0) 
        return(1)
    if (p >= 1) 
        return(c * (k - 1) + 1)
    N <- exp(((k - 1) * log(c) + lgamma(k + 1) + log(-log1p(-p)))/k)
    N <- ceiling(N)
    if (pbirthday(N, c, k) < prob) {
        N <- N + 1
        while (pbirthday(N, c, k) < prob) N <- N + 1
    }
    else if (pbirthday(N - 1, c, k) >= prob) {
        N <- N - 1
        while (pbirthday(N - 1, c, k) >= prob) N <- N - 1
    }
    N
}
