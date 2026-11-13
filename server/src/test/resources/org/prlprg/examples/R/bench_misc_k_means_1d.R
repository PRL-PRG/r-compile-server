# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/k-means/k-means-1D.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# k-means-1D - R internal k-means based implementation
# 
# Author: Haichuan Wang
#
# k-means-1D using R built-in k-means implementation
###############################################################################

run <- function(dataset) {
    set.seed(42)
    ncluster <- dataset$ncluster
    niter <- dataset$niter
    Points <- dataset$Points
    vPoints <- simplify2array(Points)
    
    res<-kmeans(vPoints, ncluster, iter.max=niter);
    cat("Centers:\n")
    print(res$centers);
    cat("Sizes:\n")
    print(res$size);
}

# setup_k-means-1D.R
set.seed(42)
n <- 69000L
# Upstream setup reads ncluster from args[3], the niter argument, so there are 15 clusters.
ncluster <- 15L
niter <- 15L
#the data, each is
mean_shift <- rep(0:(ncluster-1), length.out = n)
Points <- rnorm(n, sd = 0.3) + mean_shift
Points <- lapply(1:n, function(i){Points[i]})
data <- list(Points=Points, ncluster=ncluster, niter=niter)

#? benchmark: capture.output(run(data))

# warmup
warm <- data
warm$Points <- data$Points[1:40]
for (i in 1:12) {
  capture.output(run(warm))
}
