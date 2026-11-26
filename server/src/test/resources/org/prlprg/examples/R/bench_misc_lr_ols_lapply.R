# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/LR/LR_ols_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# LinearRegression - OLS(Ordinary Least Squares) lapply based solution
# 
# Author: Haichuan Wang
###############################################################################

run <- function(dataset) {
    YX <- dataset$YX
    
    #X includes "1" column, Y column vec    
    A.func <- function(yx) {
        x <- yx
        x[1] <- 1 #modify the 1st element set to 1
        tcrossprod(x)
    }
    
    b.func <- function(yx) {
        y <- yx[1]
        x <- yx
        x[1] <-1
        x * y
    }
    
    A <- Reduce('+', lapply(YX, A.func))
    b <- Reduce('+', lapply(YX, b.func))
    
    theta <- solve(A, b)
    theta
}

# setup_LR.R
set.seed(42)
n <- 19000L
nvar <- 10L
niter <- 50L
X<- matrix(runif(n*nvar, 0, 10), nrow=nvar, ncol=n)
Y<- colSums(X) + rnorm(n) + 1 # now the coefficient are all 1
YX <- lapply(1:n, function(i){c(Y[i],X[,i])})
data <- list(YX=YX, nvar=nvar, niter=niter);

#? benchmark: run(data)

# warmup
warm <- data
warm$YX <- data$YX[1:30]
for (i in 1:12) {
  run(warm)
}
