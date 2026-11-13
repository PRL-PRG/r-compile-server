# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/example.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

run<-function(data) {
    bin <- function(x) { ifelse(x > 0, 1, ifelse(x < 0, -1, 0)) }
    ignore <- function(x) { is.na(x) | x == 9999 }

    clean <- function(data) {
        data[[2]][!ignore(data[[1]]) & bin(data[[1]]) == 1]
    }

    r <- mean(clean(data))
    r
}

# Calls `run` `reps` times, like the upstream harness, because one call is too short to time.
bench_reps <- function(reps, data) {
  for (bench_i in 1:reps) r <- run(data)
  r
}

n <- 100000L
data <- list(
        as.double(1:n),
        as.double(1:n)
)

#? benchmark: bench_reps(20L, data)

# warmup
warmup_data <- list(as.double(1:4), as.double(1:4))
for (i in 1:12) {
  bench_reps(2L, warmup_data)
}
