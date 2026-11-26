# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/ICA/ica_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# ICA Analysis - lapply based algorithm
# 
# Author: Haichuan Wang
#
# The code is based on FastICA R package http://cran.r-project.org/web/packages/fastICA/
# Un-mixing n mixed independent uniforms
###############################################################################

run <- function(dataset) {
    set.seed(42)
    X <- dataset$X
    A <- dataset$A
    nvar <- dataset$nvar
    niter <- dataset$niter
    n <- length(X) #num of samples

    message("Whitening")
    cross.func <- function(x) {
        tcrossprod(x)
    }
    V <- Reduce('+', lapply(X, cross.func)) / n
    s <- La.svd(V)
    D <- diag(c(1/sqrt(s$d)))
    K <- D %*% t(s$u)
    white.func <- function(x){ K %*% x}
    X1 <- lapply(X, white.func)
    #init W
    W <- matrix(rnorm(nvar^2),nvar, nvar) #init.w
    sW <- La.svd(W)
    W <- sW$u %*% diag(1/sW$d) %*% t(sW$u) %*% W
    W1 <- W
    alpha <- 1
    gwx.fun <- function(x) {
        wx <- W %*% x
        gwx <- tanh(alpha * wx)
        tcrossprod(gwx, x)
    }
    
    g.wx.fun <- function(x) {
        wx <- W %*% x
        gwx <- tanh(alpha * wx)
        alpha * (1 - gwx^2)
    }
    
    for(iter in 1:niter) {
        GWX <- lapply(X1, gwx.fun)
        v1 <- Reduce('+', GWX) / n
        G.WX <- lapply(X1, g.wx.fun)
        v2 <- diag(c(Reduce('+', G.WX) / n)) %*% W
        W1 <- v1 - v2
        sW1 <- La.svd(W1)
        W1 <- sW1$u %*% diag(1/sW1$d) %*% t(sW1$u) %*% W1
        W <- W1
    }
    #final turn back
    w <- W %*% K
    resA <- t(w) %*% solve(w %*% t(w))
    resA
}

# setup_ica.R
set.seed(42)
n <- 550L
nvar <- 2L
niter <- 25L
#generate pre-centered data. Note the data shape is n x nvar
S <- matrix(runif(n*nvar), nrow=n, ncol=nvar)
A <- matrix(c(1, 1, -1, 3), 2, 2)
X <- scale(S %*% A, scale = FALSE) #pre-centering
X <- lapply(1:n, function(i){X[i,]})
data <- list(X = X, A = A, nvar=nvar, niter = niter)

#? benchmark: run(data)

# warmup
warm <- data
warm$X <- data$X[1:20]
warm$niter <- 2L
for (i in 1:12) {
  run(warm)
}
