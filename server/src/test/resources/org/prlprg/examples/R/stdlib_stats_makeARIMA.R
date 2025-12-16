#? stdlib
`makeARIMA` <- function (phi, theta, Delta, kappa = 1e+06, SSinit = c("Gardner1980", 
    "Rossignol2011"), tol = .Machine$double.eps) 
{
    if (anyNA(phi)) 
        warning(gettextf("NAs in '%s'", "phi"), domain = NA)
    if (anyNA(theta)) 
        warning(gettextf("NAs in '%s'", "theta"), domain = NA)
    p <- length(phi)
    q <- length(theta)
    r <- max(p, q + 1L)
    d <- length(Delta)
    rd <- r + d
    Z <- c(1, rep.int(0, r - 1L), Delta)
    T <- matrix(0, rd, rd)
    if (p > 0) 
        T[1L:p, 1L] <- phi
    if (r > 1L) {
        ind <- 2:r
        T[cbind(ind - 1L, ind)] <- 1
    }
    if (d > 0L) {
        T[r + 1L, ] <- Z
        if (d > 1L) {
            ind <- r + 2:d
            T[cbind(ind, ind - 1)] <- 1
        }
    }
    if (q < r - 1L) 
        theta <- c(theta, rep.int(0, r - 1L - q))
    R <- c(1, theta, rep.int(0, d))
    V <- R %o% R
    h <- 0
    a <- rep(0, rd)
    Pn <- P <- matrix(0, rd, rd)
    if (r > 1L) 
        Pn[1L:r, 1L:r] <- switch(match.arg(SSinit), Gardner1980 = .Call(C_getQ0, 
            phi, theta), Rossignol2011 = .Call(C_getQ0bis, phi, 
            theta, tol), stop("invalid 'SSinit'"))
    else Pn[1L, 1L] <- if (p > 0) 
        1/(1 - phi^2)
    else 1
    if (d > 0L) 
        Pn[cbind(r + 1L:d, r + 1L:d)] <- kappa
    list(phi = phi, theta = theta, Delta = Delta, Z = Z, a = a, 
        P = P, T = T, V = V, h = h, Pn = Pn)
}
