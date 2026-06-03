#? stdlib
`psmirnov` <- function (q, sizes, z = NULL, alternative = c("two.sided", "less", 
    "greater"), exact = TRUE, simulate = FALSE, B = 2000, lower.tail = TRUE, 
    log.p = FALSE) 
{
    alternative <- match.arg(alternative)
    if (is.numeric(q)) {
        if (!is.double(q)) 
            storage.mode(q) <- "double"
    }
    else stop("argument 'q' must be numeric")
    ret <- q
    i1 <- is.na(q)
    ret[i1] <- NA_real_
    if (any(i2 <- (q <= 0))) {
        p <- 1 - lower.tail
        if (log.p) 
            p <- log(p)
        ret[i2] <- p
    }
    if (any(i3 <- (q > 1))) {
        p <- as.numeric(lower.tail)
        if (log.p) 
            p <- log(p)
        ret[i3] <- p
    }
    IND <- which(!(i1 | i2 | i3))
    if (!length(IND)) 
        return(ret)
    if (length(sizes) != 2L) 
        stop("argument 'sizes' must be a vector of length 2")
    n.x <- sizes[1L]
    n.y <- sizes[2L]
    if (n.x < 1) 
        stop("not enough 'x' data")
    if (n.y < 1) 
        stop("not enough 'y' data")
    n.x <- floor(n.x)
    n.y <- floor(n.y)
    N <- n.x + n.y
    n <- n.x * n.y/(n.x + n.y)
    exact <- exact && !simulate
    if (!exact) {
        ret[IND] <- if (simulate) 
            psmirnov_simul(q[IND], sizes, z, alternative, lower.tail, 
                log.p, B)
        else psmirnov_asymp(q[IND], sizes, alternative, lower.tail, 
            log.p)
        return(ret)
    }
    r <- psmirnov_exact(q[IND], sizes, z, alternative, lower.tail, 
        log.p)
    ret[IND] <- if (all(is.finite(r))) 
        r
    else {
        warning("computation of exact probability failed, returning Monte Carlo approximation")
        psmirnov_simul(q[IND], sizes, z, alternative, lower.tail, 
            log.p, B)
    }
    ret
}
