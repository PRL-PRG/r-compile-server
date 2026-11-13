# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/mathkernel/DoubleVecAdd-T2.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# Vector Add
# 
###############################################################################

run = function(data) {
    #a and b are matrix
    A <- data[[1]]
    B <- data[[2]]
    n <- data[[3]]
    C <- A + B
}

# The data of upstream `setup()`, smaller. The warmup uses a prefix of it.
set.seed(42)
n <- 10000000L
A <- rnorm(n)
B <- rnorm(n)
data <- list(A, B, n)
small <- list(A[1:10], B[1:10], 10L)

# The benchmark sums the result, because the vector is large.
#? benchmark: sum(run(data))

# warmup
for (i in 1:12) {
  sum(run(small))
}
