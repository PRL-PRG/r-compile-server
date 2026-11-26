# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/LogitRegression/LogitRegre-1var_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# LogitRegre-1var - lapply based algorithm
# 
# Author: Haichuan Wang
###############################################################################

run <- function(dataset) {  
    YX <- dataset$YX
    niter<-data$niter # upstream bug: reads the global `data`, not `dataset`; kept, because it runs
    
    theta <- double(length(YX[[1]])) #initial guess as 0

    #X includes "1" column, Y column vec
    grad.func <- function(yx) {
        y <- yx[1]
        x <- c(1, yx[2])
        logit <- 1/(1 + exp(-sum(theta*x)))
        (y-logit) * x
    }
    
    for(iter in 1:niter) {
        delta <- lapply(YX, grad.func)
        #cat('delta =', delta, '\n')
        theta <- theta + Reduce('+', delta) / length(YX)
        cat('theta =', theta, '\n')
        #print(cost(X,y, theta))
    }
    cat('Final theta =', theta, '\n')
}

# setup_logitRegre-1var.R
set.seed(42)
n <- 700L
niter <- 50L
X<- runif(n, 0, 10)
Y<- 1/(1+exp(-(1+X))) + rnorm(n) * 0.05 # now the coefficient is 1
YX <- lapply(1:n, function(i){c(Y[i],X[i])})
data <- list(YX=YX, niter=niter);

#? benchmark: capture.output(run(data))

# warmup
warm <- data
warm$YX <- data$YX[1:2]
for (i in 1:12) {
  capture.output(run(warm))
}
