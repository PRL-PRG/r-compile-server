#? stdlib
`pbirthday` <- function (n, classes = 365, coincident = 2) 
{
    if (!length(n)) 
        return(n)
    k <- coincident
    c <- classes
    if (k < 2) 
        return(1)
    if (k == 2) 
        return(1 - prod((c:(c - n + 1))/rep(c, n)))
    if (k > n) 
        return(0)
    if (n > c * (k - 1)) 
        return(1)
    LHS <- n * exp(-n/(c * k))/(1 - n/(c * (k + 1)))^(1/k)
    lxx <- k * log(LHS) - (k - 1) * log(c) - lgamma(k + 1)
    -expm1(-exp(lxx))
}
