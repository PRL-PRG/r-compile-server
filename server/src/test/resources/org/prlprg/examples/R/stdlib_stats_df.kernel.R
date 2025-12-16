#? stdlib
`df.kernel` <- function (k) 
{
    2/sum(k[-k$m:k$m]^2)
}
