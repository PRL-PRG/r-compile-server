execute <- function(size = 100L) {
  gp_cov <- function(x1, x2, s, r) {
    n <- length(x1)
    m <- length(x2)
    C <- matrix(nrow = n, ncol = m)
    for (j in seq_len(m)) {
      C[, j] <- s^2 * exp(-(r * (x1 - x2[j]))^2)
    }
    C
  }

  gp_log_likelihood <- function(x, y, s, r, v) {
    C <- gp_cov(x, x, s, r)
    diag(C) <- diag(C) + v^2
    U <- chol(C)
    u <- backsolve(U, y, transpose = TRUE)
    as.vector(-sum(u^2)/2 - sum(log(diag(U))) - length(y) * log(2 * pi)/2)
  }

  gp_search <- function(x, y, s.vec, r.vec, v.vec) {
    best.ll <- -Inf
    for (s in s.vec) {
      for (r in r.vec) {
        for (v in v.vec) {
          ll <- gp_log_likelihood(x, y, s, r, v)
          if (ll >= best.ll) {
            best.s <- s
            best.r <- r
            best.v <- v
            best.ll <- ll
          }
        }
      }
    }
    c(s = best.s, r = best.r, v = best.v)
  }

  gp_predict <- function(x, y, s, r, v, x.test) {
    C <- gp_cov(x, x, s, r)
    diag(C) <- diag(C) + v^2
    U <- chol(C)
    u <- backsolve(U, y, transpose = TRUE)
    u <- backsolve(U, u)
    K <- gp_cov(x, x.test, s, r)
    as.vector(t(K) %*% u)
  }

  tf <- function(x) 1.2 * sin(0.3 + 0.2 * x^2 + 2.7 * sin(2 * x + 0.2))

  set.seed(1)
  hlist <- list()
  x.test <- seq(-2, 2, length = 1000)
  final_p <- NULL

  for (i in 1:10) {
    x <- rnorm(size)
    y <- tf(x) + rnorm(size, 0, 0.11)
    h <- gp_search(x, y, 
                   s.vec = c(0.7, 1.0, 1.2, 1.4, 2.0), 
                   r.vec = c(1.0, 1.4, 2.0, 2.8), 
                   v.vec = c(0.1, 0.14, 0.2, 0.28))
    hlist[[i]] <- h
    final_p <- gp_predict(x, y, h["s"], h["r"], h["v"], x.test)
  }

  return(final_p[c(1, 500, 1000)])
}