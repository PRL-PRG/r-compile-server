# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/LR/LR_lms_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# LinearRegression - LMS(least mean square) lapply based solution
# 
# Author: Haichuan Wang
###############################################################################

run <- function(dataset) {
    YX <- dataset$YX
    niter <- dataset$niter
    
    #X includes "1" column, Y column vec
    grad.func <- function(yx) {
        y <- yx[1]
        x <- yx
        x[1] <- 1 #modify the 1st element
        error <- (sum(x *theta) - y)
        delta <- error * x
        return(delta)
    }
    
    cost <- function(X, y, theta) {
        # computes the cost of using theta as the parameter for linear regression
        # to fit the data points in X and y
        sum((X %*% theta - y)^2)/(2 * length(y))
    }
    

    theta <- double(length(YX[[1]])) #initial guess as 0
    alpha <- 0.05/ length(YX) / length(theta) # small step

    for(iter in 1:niter) {
        delta <- lapply(YX, grad.func)
        #cat('delta =', delta, '\n')
        theta <- theta - alpha * Reduce('+', delta)
        cat('theta =', theta, '\n')
        #print(cost(X,y, theta))
    }
    cat('Final theta =', theta, '\n')
}

# setup_LR.R
set.seed(42)
n <- 700L
nvar <- 10L
niter <- 50L
X<- matrix(runif(n*nvar, 0, 10), nrow=nvar, ncol=n)
Y<- colSums(X) + rnorm(n) + 1 # now the coefficient are all 1
YX <- lapply(1:n, function(i){c(Y[i],X[,i])})
data <- list(YX=YX, nvar=nvar, niter=niter);

#? benchmark: capture.output(run(data))

# warmup
warm <- data
warm$YX <- data$YX[1:2]
warm$niter <- 2L
for (i in 1:12) {
  capture.output(run(warm))
}
