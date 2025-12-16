#? stdlib
`hyman_filter` <- function (z) 
{
    n <- length(z$x)
    ss <- diff(z$y)/diff(z$x)
    S0 <- c(ss[1L], ss)
    S1 <- c(ss, ss[n - 1L])
    t1 <- pmin(abs(S0), abs(S1))
    sig <- z$b
    ind <- S0 * S1 > 0
    sig[ind] <- S1[ind]
    ind <- sig >= 0
    if (sum(ind)) 
        z$b[ind] <- pmin(pmax(0, z$b[ind]), 3 * t1[ind])
    ind <- !ind
    if (sum(ind)) 
        z$b[ind] <- pmax(pmin(0, z$b[ind]), -3 * t1[ind])
    z
}
