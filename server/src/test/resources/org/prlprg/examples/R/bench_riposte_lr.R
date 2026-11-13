# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/lr.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# logistic regression test case

run<-function(dataset) {

    D <- 30L;
    p<-dataset[[1]]
    r<-dataset[[2]]
    wi<-dataset[[3]]
    reps <- dataset[[4]]

    #g <- function(z) 1/(1+exp(-z))

    update <- function(w) {
        diff <- 1/(1+exp(p %*% w)) - r
        grad <- double(D);
        for(i in 1L:D) {
            grad[i] <- mean((p[,i]*diff))
        }
        grad
    }

    #benchpart
    w <- wi
    epsilon <- 0.07

    for(j in 1L:reps) {
        grad <- update(w)
        delta <- grad*epsilon
        w <- w - delta
    }

    length(w)
    #glm(r~p-1, family=binomial(link="logit"), na.action=na.pass)


}

# The data of upstream `gen_lr.R` (which writes `data/lr_*.txt`), with a smaller `N`. A fixed
# positive definite covariance and `rnorm` replace `clusterGeneration::genPositiveDefMat` and
# `MASS::mvrnorm`.
lr_data <- function(N, reps) {
    D <- 30
    Sigma <- 0.5^abs(outer(1:(D-1), 1:(D-1), "-"))
    m <- scale(matrix(rnorm(N*(D-1)), N) %*% chol(Sigma))
    m <- cbind(rep(1,N),m)
    w <- rnorm(D)
    r <- as.double(((m %*% w) + rnorm(N,0,10)) > 0)
    wi <- rnorm(D)
    p <- as.vector(m)
    dim(p) <- c(N,D);
    list(p, r, wi,reps);
}

set.seed(42)
data <- lr_data(3000L, 100L)

#? benchmark: run(data)

# warmup
warmup_data <- lr_data(40L, 2L)
for (i in 1:12) {
  run(warmup_data)
}
