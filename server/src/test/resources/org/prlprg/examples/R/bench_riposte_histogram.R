# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/histogram.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

#data <- sample(1:100, 100000, replace=TRUE)

run<-function(data) {
    #the below 2 are commented in org benchmark
    #f <- factor(data, 0L:99L);
    #lapply(split(data,f), "length")
    #bench part
    r<-tabulate(data,100L);
    length(r)
}

# Calls `run` `reps` times, like the upstream harness, because one call is too short to time.
bench_reps <- function(reps, data) {
  for (bench_i in 1:reps) r <- run(data)
  r
}

# Upstream `setup` returns the factor `f`, the value of its last assignment.
set.seed(42)
n <- 1000000L
data <- factor(as.integer(runif(n,0,100)), 0L:99L)

#? benchmark: bench_reps(70L, data)

# warmup
warmup_data <- factor(as.integer(runif(4,0,100)), 0L:99L)
for (i in 1:12) {
  bench_reps(2L, warmup_data)
}
