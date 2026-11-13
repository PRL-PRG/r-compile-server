# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/LR/LR-1var_lms_vec.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# LinearRegression-1var - LMS(least mean square) vector programming based solution
# 
# Author: Haichuan Wang
###############################################################################

run <- function(dataset) {
    YX <- dataset$YX
    niter <- dataset$niter
    vYX <- t(simplify2array(YX))
    X <- cbind(1, matrix(vYX[,2]))
    Y <- vYX[,1]
    
    #X includes "1" column, Y column vec
    grad.func <- function(X, y) {
        error <- (X %*% theta - y)
        #This is a simple normalization
        delta <- t(X) %*% error / length(y)
        return(delta)
    }
    
    cost <- function(X, y, theta) {
        # computes the cost of using theta as the parameter for linear regression
        # to fit the data points in X and y
        sum((X %*% theta - y)^2)/(2 * length(y))
    }
    

    theta <- double(ncol(X)) #initial guess
    alpha <- 0.05 # small step

    for(iter in 1:niter) {
        delta <- grad.func(X, Y)
        #cat('delta =', delta, '\n')
        theta <- theta - alpha * delta
        cat('theta =', theta, '\n')
        #print(cost(X,y, theta))
    }
    cat('Final theta =', theta, '\n')
}

# setup_LR-1var.R
set.seed(42)
n <- 70000L
niter <- 50L
X<- runif(n, 0, 10)
Y<- X + rnorm(n) + 1
YX <- lapply(1:n, function(i){c(Y[i],X[i])})
data <- list(YX=YX, niter=niter)

#? benchmark: capture.output(run(data))

# warmup
warm <- data
warm$YX <- data$YX[1:3]
warm$niter <- 2L
for (i in 1:12) {
  capture.output(run(warm))
}
