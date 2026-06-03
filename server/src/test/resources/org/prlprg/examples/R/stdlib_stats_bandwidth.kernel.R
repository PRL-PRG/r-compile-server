#? stdlib
`bandwidth.kernel` <- function (k) 
{
    i <- -k$m:k$m
    sqrt(sum((1/12 + i^2) * k[i]))
}
