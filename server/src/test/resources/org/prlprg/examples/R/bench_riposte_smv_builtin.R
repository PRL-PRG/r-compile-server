# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/smv_builtin.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

# sparse matrix-vector multiplication
# TODO: sort input by row for perf?

# random 1M x 1M matrix with 10M entries

run<-function(dataset){
    m <- dataset[[1]]
    v <- dataset[[2]]

    smv <- function(m, v) {
        m %*% v
    }
    #benchpart
    res<-smv(m,v)
    length(res)

}

# Calls `run` `reps` times, like the upstream harness, because one call is too short to time.
bench_reps <- function(reps, data) {
  for (bench_i in 1:reps) r <- run(data)
  r
}

# The data of upstream `setup`, with the size as a parameter (upstream: 10000000).
# `Matrix::sparseMatrix` replaces `library(Matrix)` and `sparseMatrix`.
smv_builtin_data <- function(n) {
    m <- Matrix::sparseMatrix(
            as.integer(runif(n, 1, n)),
            sort(as.integer(runif(n, 1, n))),
            x=runif(n),
            dims=c(n,n))

    v <- runif(n)

    list(m,v)
}

set.seed(42)
data <- smv_builtin_data(200000L)

#? benchmark: bench_reps(25L, data)

# warmup
warmup_data <- smv_builtin_data(4L)
for (i in 1:12) {
  bench_reps(2L, warmup_data)
}
