# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/k-means/k-means-1D_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# k-means-1D - lapply based implementation
# 
# Author: Haichuan Wang
#
# k-means-1D using lapply based iterative algorithm
###############################################################################

run <- function(dataset) {
    ncluster <- dataset$ncluster
    niter <- dataset$niter
    Points <- dataset$Points
    
    centers <- Points[1:ncluster] #pick 10 as default centers
    size <- integer(ncluster);
    
    dist.func <- function(ptr){
        dist.inner.func <- function(center){
                              (ptr-center)^2
                           }
        lapply(centers, dist.inner.func)
    }
    
    for(iter in 1:niter) {
        #map each item into distance to 10 centers.
        dists <- lapply(Points, dist.func)
        ids <- lapply(dists, which.min);
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

# setup_k-means-1D.R
set.seed(42)
n <- 380L
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
warm$niter <- 2L
for (i in 1:12) {
  capture.output(run(warm))
}
