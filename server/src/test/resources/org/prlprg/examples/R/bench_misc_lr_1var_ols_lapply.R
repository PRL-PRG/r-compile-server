# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/LR/LR-1var_ols_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# LinearRegression-1var - OLS(Ordinary Least Squares) lapply based solution
# 
# Author: Haichuan Wang
###############################################################################

run <- function(dataset) {
    YX <- dataset$YX
    
    #X includes "1" column, Y column vec    
    A.func <- function(yx) {
        x <- c(1, yx[2])
        tcrossprod(x)
    }
    
    b.func <- function(yx) {
        y <- yx[1]
        x <- c(1, yx[2])
        x * y
    }

    A <- Reduce('+', lapply(YX, A.func))
    b <- Reduce('+', lapply(YX, b.func))
    
    theta <- solve(A, b)
    theta
}

# setup_LR-1var.R
set.seed(42)
n <- 19000L
niter <- 50L
X<- runif(n, 0, 10)
Y<- X + rnorm(n) + 1
YX <- lapply(1:n, function(i){c(Y[i],X[i])})
data <- list(YX=YX, niter=niter)

#? benchmark: run(data)

# warmup
warm <- data
warm$YX <- data$YX[1:10]
for (i in 1:12) {
  run(warm)
}
