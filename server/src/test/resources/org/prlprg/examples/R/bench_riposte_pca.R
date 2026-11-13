# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/pca.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

# pca (via eigen values of covariance matrix) + reprojection onto new basis

run<-function(dataset){

    cov <- function(a,b) {
        if(!all(dim(a) == dim(b))) stop("matrices must be same shape")

        m <- nrow(a)
        n <- ncol(a)
        z <- length(a)

        ma <- double(n)
        mb <- double(n)
        for(i in 1L:n) {
            j <- mean(a[,i])
            k <- mean(b[,i])
            ma[i] <- j  # why ma[[i]]
            mb[i] <- k  # why mb[[i]]
        }

        r <- double(n*n)
        for(i in 1L:n) {
            for(j in i:n) {
                k_vec = (a[,i]-ma[i])*(b[,j]-mb[j]);
                k <- sum(k_vec);
                r_i <-(i-1L)*n+j;
                r_j <-(j-1L)*n+i;
                r[r_i] <- k
                r[r_j] <- k
            }
        }
        r <- r/(m-1)
        dim(r) <- c(n,n)
        r
    }

    ## TODO: matrix multiplication cost dominates
    ## Could just compute the principal components

    #do pca
    cm <- cov(dataset,dataset)
    #cm
    r<-length(cm) #for return simple result
    #basis <- eigen(cm, symmetric=TRUE)[[2]]
    #basis
    r
}

# The data of upstream `gen_pca.R` (which writes `data/pca.txt`), with a smaller `N`. A fixed
# positive definite covariance and `rnorm` replace `clusterGeneration::genPositiveDefMat` and
# `MASS::mvrnorm`.
pca_data <- function(N, D) {
    Sigma <- 0.5^abs(outer(1:D, 1:D, "-"))
    a <- matrix(rnorm(N*D), N) %*% chol(Sigma)
    a <- as.vector(a)
    dim(a) <- c(N, D)
    a
}

set.seed(42)
data <- pca_data(6000L, 50L)

#? benchmark: run(data)

# warmup
warmup_data <- pca_data(4L, 3L)
for (i in 1:12) {
  run(warmup_data)
}
