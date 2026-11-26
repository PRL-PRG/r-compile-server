# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/mathkernel/MMM-T1.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# Matrix-Matrix Multiply
# 
###############################################################################

run <- function(data) {
    #a and b are matrix
    A <- data[[1]]
    B <- data[[2]]
    n <- data[[3]]
    C <- matrix(n*n, ncol=n, nrow=n)
    for(i in 1:n) {
        for(j in 1:n) {
            v <- 0
            for(k in 1:n) {
                v <- v + A[i,k] * B[k,j]
            }            
            C[i,j] = v
        }
    }
    C
}

# The data of upstream `setup()`, smaller.
set.seed(42)
n <- 95L
A <- matrix(rnorm(n*n), ncol=n, nrow=n)
B <- matrix(rnorm(n*n), ncol=n, nrow=n)
data <- list(A,B, n)
small <- list(matrix(rnorm(3*3), ncol=3, nrow=3), matrix(rnorm(3*3), ncol=3, nrow=3), 3L)

# The benchmark sums the result, because the matrix is large.
#? benchmark: sum(run(data))

# warmup
for (i in 1:12) {
  sum(run(small))
}
