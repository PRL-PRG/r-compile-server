# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/LR/LR.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# LinearRegression - R lm based solution
# 
# Author: Haichuan Wang
###############################################################################

run <- function(dataset) {
    YX <- dataset$YX
    #grab YX
    vYX <- t(simplify2array(YX))
    
    res<-lm(vYX[,1] ~ vYX[,-1]);
    print(res)
}

# setup_LR.R
set.seed(42)
n <- 55000L
nvar <- 10L
niter <- 50L
X<- matrix(runif(n*nvar, 0, 10), nrow=nvar, ncol=n)
Y<- colSums(X) + rnorm(n) + 1 # now the coefficient are all 1
YX <- lapply(1:n, function(i){c(Y[i],X[,i])})
data <- list(YX=YX, nvar=nvar, niter=niter);

# The value is the printed output, because the `lm` object holds an environment, which differs per call.
#? benchmark: capture.output(run(data))

# warmup
warm <- data
warm$YX <- data$YX[1:30]
for (i in 1:12) {
  capture.output(run(warm))
}
