# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/mathkernel/IntVecAdd-T2.R
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

# The data of upstream `setup()`, smaller.
set.seed(42)
n <- 4000000L
A <- as.integer(rnorm(n) * 1000)
B <- as.integer(rnorm(n) * 1000)
data <- list(A, B, n)
small <- list(as.integer(rnorm(10) * 1000), as.integer(rnorm(10) * 1000), 10L)

# The benchmark sums the result, because the vector is large.
#? benchmark: sum(run(data))

# warmup
for (i in 1:12) {
  sum(run(small))
}
