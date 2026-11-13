# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/LogitRegression/LogitRegre2_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# LogitRegre - lapply based algorithm (from SparkR)
# 
# Author: Haichuan Wang
###############################################################################

run <- function(data) {
    YX <- data$YX
    nvar <- data$nvar
    niter<-data$niter
    
    #X includes "1" column, Y column vec
    grad.func <- function(yx) {
        y <- yx[1]
        x <- yx[-1]
        dot <- sum(x * w)
        logit <- 1 / (1 + exp(-y * dot))
        x * ((logit - 1) * y)
    }
    
    # Initialize w to a random value
    w <- double(nvar) #runif(n=nvar, min = -1, max = 1)
    cat("Initial w: ", w, "\n")
    
    for(iter in 1:niter) {
        w <- w - Reduce('+', lapply(YX, grad.func))
        cat("w = ", w, "\n")
    }
    cat("Final w: ", w, "\n")
}

# setup_logitRegre.R
set.seed(42)
n <- 650L
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
warm$niter <- 2L
for (i in 1:12) {
  capture.output(run(warm))
}
