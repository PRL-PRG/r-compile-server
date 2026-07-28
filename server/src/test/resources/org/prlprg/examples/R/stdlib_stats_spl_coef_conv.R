#? stdlib
`spl_coef_conv` <- function (z) 
{
    n <- length(z$x)
    h <- diff(z$x)
    y <- -diff(z$y)
    b0 <- z$b[-n]
    b1 <- z$b[-1L]
    cc <- -(3 * y + (2 * b0 + b1) * h)/h^2
    c1 <- (3 * y[n - 1L] + (b0[n - 1L] + 2 * b1[n - 1L]) * h[n - 
        1L])/h[n - 1L]^2
    z$c <- c(cc, c1)
    dd <- (2 * y/h + b0 + b1)/h^2
    z$d <- c(dd, dd[n - 1L])
    z
}
