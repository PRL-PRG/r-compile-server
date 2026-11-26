# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/lr_test.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# logistic regression test case

# Port: returns the coefficients in place of the `glm` object, which holds an environment.
run<-function(dataset) {
    p<-dataset[[1]]
    r<-dataset[[2]]
    coef(glm(r~p-1, family=binomial(link="logit")))
}

# The data of upstream `gen_lr.R` (which writes `data/lr_*.txt`), with a smaller `N`. A fixed
# positive definite covariance and `rnorm` replace `clusterGeneration::genPositiveDefMat` and
# `MASS::mvrnorm`.
lr_data <- function(N) {
    D <- 30
    Sigma <- 0.5^abs(outer(1:(D-1), 1:(D-1), "-"))
    m <- scale(matrix(rnorm(N*(D-1)), N) %*% chol(Sigma))
    m <- cbind(rep(1,N),m)
    w <- rnorm(D)
    r <- as.double(((m %*% w) + rnorm(N,0,10)) > 0)
    p <- as.vector(m)
    dim(p) <- c(length(p)/30, 30)
    list(p,r)
}

set.seed(42)
data <- lr_data(10000L)

#? benchmark: run(data)

# warmup
warmup_data <- lr_data(200L)
for (i in 1:12) {
  run(warmup_data)
}
