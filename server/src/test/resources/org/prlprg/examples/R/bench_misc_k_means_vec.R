# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/k-means/k-means_vec.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# k-means - vector programming based implementation
# 
# Author: Haichuan Wang
#
# k-means using vector programming
###############################################################################


run <- function(dataset) {
    ncluster <- dataset$ncluster
    niter <- dataset$niter
    Points <- dataset$Points
    vPoints <- t(simplify2array(Points)) # n * ndim matrix
    
    centers <- vPoints[1:ncluster, ] #pick 10 as default centers
    size <- integer(ncluster);
    n <- nrow(vPoints)
    dists <- matrix(0, nrow=n, ncol=ncluster) #pre-allocate memory
    for(iter in 1:niter) {
        #need calculate each points' distance to all centers
        #try to use vec as much as possible
        for(j in 1:ncluster) {
            center_expand <- matrix(rep(centers[j,], each=n), n, 3)
            dists[,j] = rowSums((vPoints - center_expand)^2)
        }
        #map each item into distance to 10 centers.
        ids <- apply(dists, 1, which.min)
        #calculate the new centers through mean
        for(j in 1:ncluster) {
            cur_cluster <- vPoints[ids==j, ]
            size[j] <- nrow(cur_cluster)
            centers[j,] <- colMeans(cur_cluster)
        }
    }
    #calculate the distance to the 10 centers
    
    cat("Centers:\n")
    print(centers);
    cat("Sizes:\n")
    print(size);
}

# setup_k-means.R
set.seed(42)
n <- 3300L
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
warm$niter <- 2L
for (i in 1:12) {
  capture.output(run(warm))
}
