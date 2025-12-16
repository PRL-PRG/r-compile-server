#? stdlib
`[.tskernel` <- function (k, i) 
{
    m1 <- k$m + 1L
    y <- k$coef[c(m1:2L, 1L:m1)]
    y[i + m1]
}
