# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/k-means/k-means.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# k-means - R internal k-means based implementation
# 
# Author: Haichuan Wang
#
# k-means using R built-in k-means implementation
###############################################################################

run <- function(dataset) {
    set.seed(42)
    ncluster <- dataset$ncluster
    niter <- dataset$niter
    Points <- dataset$Points
    vPoints <- t(simplify2array(Points))
    
    res<-kmeans(vPoints, ncluster, iter.max=niter);
    cat("Centers:\n")
    print(res$centers);
    cat("Sizes:\n")
    print(res$size);
}

# setup_k-means.R
set.seed(42)
n <- 50000L
ndim <- 3L
ncluster <- 10L
niter <- 15L
#the data, each is
mean_shift <- rep(0:(ncluster-1), length.out = ndim*n)
Points <- matrix(rnorm(ndim*n, sd = 0.3) + mean_shift, ncol=ndim)
#now change data into list structure
Points <- lapply(1:n, function(i) Points[i,])
data <- list(Points=Points, ndim<- ndim, ncluster=ncluster, niter=niter)

#? benchmark: capture.output(run(data))

# warmup
warm <- data
warm$Points <- data$Points[1:40]
for (i in 1:12) {
  capture.output(run(warm))
}
