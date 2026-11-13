# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/smv.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

# sparse matrix-vector multiplication
# TODO: sort input by row for perf?
# random 1M x 1M matrix with 100M entries

run<-function(dataset){
    m <- dataset[[1]];
    v <- dataset[[2]];
    f <- dataset[[3]];

    smv <- function(m, v, f) {
        lapply(split(m[[3]]*v[m[[2]]], f), "sum")
    }
    #benchpart;
    res<-smv(m,v,f);
    length(res)
}

# The data of upstream `setup`, with the sizes as parameters (upstream: 20000000 and 500000).
smv_data <- function(M, N) {
    v <- runif(N)
    m <- list(
            row=force(sort(as.integer(runif(M, 1, N)))),
            col=force(as.integer(runif(M, 1, N))),
            val=force(runif(M))
    )
    force(v)
    f <- factor(m[[1]]-1L, (1L:N)-1L)
    force(f)
    list(m,v,f)
}

set.seed(42)
data <- smv_data(1600000L, 40000L)

#? benchmark: run(data)

# warmup
warmup_data <- smv_data(8L, 4L)
for (i in 1:12) {
  run(warmup_data)
}
