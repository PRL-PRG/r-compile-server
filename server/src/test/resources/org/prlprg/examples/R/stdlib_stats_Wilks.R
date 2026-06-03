#? stdlib
`Wilks` <- function (eig, q, df.res) 
{
    test <- prod(1/(1 + eig))
    p <- length(eig)
    tmp1 <- df.res - 0.5 * (p - q + 1)
    tmp2 <- (p * q - 2)/4
    tmp3 <- p^2 + q^2 - 5
    tmp3 <- if (tmp3 > 0) 
        sqrt(((p * q)^2 - 4)/tmp3)
    else 1
    c(test, ((test^(-1/tmp3) - 1) * (tmp1 * tmp3 - 2 * tmp2))/p/q, 
        p * q, tmp1 * tmp3 - 2 * tmp2)
}
