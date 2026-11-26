# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/pca-blocked.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

# pca (via eigen values of covariance matrix) + reprojection onto new basis

run<-function(a){

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
            ma[[i]] <- j
            mb[[i]] <- k
        }

        r <- double(0)
        #for(i in 1L:n) {
        #    for(j in i:n) {
        #        k <- sum((a[,i]-ma[[i]])*(b[,j]-mb[[j]]))
        #        r[[(i-1L)*n+j]] <- k
        #        r[[(j-1L)*n+i]] <- k
        #    }
        #}
        bs <- 6
        r <- double(2500)
        force(r)
        for(ii in 1L:ceiling(n/bs)) {
            for(jj in 1L:ceiling(n/bs)) {
                for(io in 1L:bs) {
                    for(jo in 1L:bs) {
                        i <- as.integer( (ii-1)*bs + (io-1) + 1 )
                        j <- as.integer( (jj-1)*bs + (jo-1) + 1 )
                        if(j >= i && i <= n && j <= n) {
                            #cat(i, " " , j, "\n")
                            k <- sum((a[,i]-ma[[i]])*(b[,j]-mb[[j]]))
                            r[[(i-1L)*n+j]] <- k
                            r[[(j-1L)*n+i]] <- k
                        }
                        #cat(r[[(38-1L)*n + 45]]/(m - 1),"\n")
                    }
                }
            }
        }
        r <- r/(m-1)
        dim(r) <- c(n,n)
        r
    }

    ## TODO: matrix multiplication cost dominates
    ## Could just compute the principal components

    pca <- function(a) {
        cm <- cov(a,a)
        cm
        #basis <- eigen(cm, symmetric=TRUE)[[2]]
        #basis
    }
#system.time(f <- pca(a))
    #bench part
    res<-pca(a);
    length(res)
}

# The data of upstream `gen_pca.R` (which writes `data/pca.txt`), with a smaller `N`. A fixed
# positive definite covariance and `rnorm` replace `clusterGeneration::genPositiveDefMat` and
# `MASS::mvrnorm`. `run` needs `D = 50` (`double(2500)`).
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
warmup_data <- pca_data(2L, 50L)
for (i in 1:12) {
  run(warmup_data)
}
