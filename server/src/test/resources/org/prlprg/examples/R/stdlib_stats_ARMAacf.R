#? stdlib
`ARMAacf` <- function (ar = numeric(), ma = numeric(), lag.max = r, pacf = FALSE) 
{
    p <- length(ar)
    q <- length(ma)
    if (!p && !q) 
        stop("empty model supplied")
    r <- max(p, q + 1)
    if (p > 0) {
        if (r > 1) {
            if (r > p) {
                ar <- c(ar, rep(0, r - p))
                p <- r
            }
            p1 <- p + 1L
            p2.1 <- p + p1
            A <- matrix(0, p1, p2.1)
            ind <- seq_len(p1)
            ind <- as.matrix(expand.grid(ind, ind))[, 2L:1L]
            ind[, 2] <- ind[, 1L] + ind[, 2L] - 1L
            A[ind] <- c(1, -ar)
            A[, 1L:p] <- A[, 1L:p] + A[, p2.1:(p + 2L)]
            rhs <- c(1, rep(0, p))
            if (q > 0) {
                psi <- c(1, ARMAtoMA(ar, ma, q))
                theta <- c(1, ma, rep(0, q + 1L))
                for (k in 1L + 0:q) rhs[k] <- sum(psi * theta[k + 
                  0:q])
            }
            ind <- p1:1
            Acf <- solve(A[ind, ind], rhs)
            Acf <- Acf[-1L]/Acf[1L]
        }
        else Acf <- ar
        if (lag.max > p) {
            xx <- rep(0, lag.max - p)
            Acf <- c(Acf, filter(xx, ar, "recursive", init = rev(Acf)))
        }
        Acf <- c(1, Acf[1L:lag.max])
    }
    else if (q > 0) {
        x <- c(1, ma)
        Acf <- filter(c(x, rep(0, q)), rev(x), sides = 1)[-(1L:q)]
        if (lag.max > q) 
            Acf <- c(Acf, rep(0, lag.max - q))
        Acf <- Acf/Acf[1L]
    }
    names(Acf) <- 0:lag.max
    if (pacf) 
        drop(.Call(C_pacf1, Acf, lag.max))
    else Acf
}

# Examples
ARMAacf(c(1.0, -0.25), 1.0, lag.max = 10)

## Example from Brockwell & Davis (1991, pp.92-4)
## answer: 2^(-n) * (32/3 + 8 * n) /(32/3)
n <- 1:10
a.n <- 2^(-n) * (32/3 + 8 * n) /(32/3)
(A.n <- ARMAacf(c(1.0, -0.25), 1.0, lag.max = 10))
stopifnot(all.equal(unname(A.n), c(1, a.n)))

ARMAacf(c(1.0, -0.25), 1.0, lag.max = 10, pacf = TRUE)
zapsmall(ARMAacf(c(1.0, -0.25), lag.max = 10, pacf = TRUE))

## Cov-Matrix of length-7 sub-sample of AR(1) example:
toeplitz(ARMAacf(0.8, lag.max = 7))

