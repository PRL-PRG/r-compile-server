# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/LogitRegression/LogitRegre_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# LogitRegre - lapply based algorithm
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
        x <- yx  
        x[1] <- 1 #modify the 1st column
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

# setup_logitRegre.R
set.seed(42)
n <- 700L
nvar <- 10L
niter <- 50L
X<- matrix(runif(n*nvar, -1, 1), nrow=nvar, ncol=n)
theta <- rep(1,nvar)
Y<- 1/(1+exp(-(1+colSums(theta*X)))) # now the coefficient are all 1
YX <- lapply(1:n, function(i){c(Y[i],X[,i])})
data <- list(YX=YX, nvar=nvar, niter=niter);

#? benchmark: capture.output(run(data))

# warmup
warm <- data
warm$YX <- data$YX[1:2]
for (i in 1:12) {
  capture.output(run(warm))
}
