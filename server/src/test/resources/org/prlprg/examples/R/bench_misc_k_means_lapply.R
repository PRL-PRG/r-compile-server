# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/k-means/k-means_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# k-means - lapply based implementation
# 
# Author: Haichuan Wang
#
# k-means using lapply based iterative algorithm
###############################################################################


run <- function(dataset) {
    ncluster <- dataset$ncluster
    niter <- dataset$niter
    Points <- dataset$Points
    
    dist.func <- function(ptr){ 
        dist.inner.func <- function(center){
            sum((ptr-center)^2)
        }
        lapply(centers, dist.inner.func)
    }
    
    centers <- Points[1:ncluster] #pick 10 as default centers
    size <- integer(ncluster)
    for(iter in 1:niter) {
        #map each item into distance to 10 centers.
        dists <- lapply(Points, dist.func)
        ids <- lapply(dists, which.min)
        #calculate the new centers through mean
        for(j in 1:ncluster) {
            cur_cluster <- Points[ids==j]
            size[j] <- length(cur_cluster)
            centers[[j]] <- Reduce('+', cur_cluster) / size[j]
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
n <- 380L
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
