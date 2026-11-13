# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/PCA/PCA_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# PCA analysis - Direct method with lapply
# 
# Author: Haichuan Wang
###############################################################################

run <- function(dataset) {
    X <- dataset$X
    
    cross.func <- function(x) {
        tcrossprod(x)
    }
    
    mean.func <- function(x) {
        x
    }

    len <- length(X)
    XC <- Reduce('+', lapply(X, cross.func))
    vMean <- Reduce('+', lapply(X, mean.func)) / len
    
    covM <- XC/len - tcrossprod(vMean)
    eigen(covM)
}

# setup_PCA.R
set.seed(42)
n <- 23000L
nvar <- 10L
X <- matrix(runif(n*nvar, 0, 10), nrow=nvar, ncol=n)
X <- lapply(1:n, function(i){X[,i]})
data <- list(X = X)

#? benchmark: run(data)

# warmup
warm <- data
warm$X <- data$X[1:20]
for (i in 1:12) {
  run(warm)
}
