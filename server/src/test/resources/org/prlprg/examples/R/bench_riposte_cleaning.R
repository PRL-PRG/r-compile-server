# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/cleaning.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

#changed by hwang154@illinois.edu
# 1) according to the test harness
# 2) remove global variable lookup

run<-function(data) {

    z.score <- function(data, m=mean(data), stdev=sd(data)) {
        # these two lines force the promises, allowing us to fuse m and stdev
        # otherwise they are separated by the barrier (data-m), and don't fuse.
        # can we do better?
        #m
        #stdev
        (data-m) / stdev
    }

    outliers <- function(data, ignore) {
        use <- !ignore(data)
        z <- z.score(data, mean(data[use]), sd(data[use]))
        sum(abs(z) > 1)
    }

    #bench part
    r<-outliers(data, function(x) { is.na(x) | x==9999 })
    r
}

# Calls `run` `reps` times, like the upstream harness, because one call is too short to time.
bench_reps <- function(reps, data) {
  for (bench_i in 1:reps) r <- run(data)
  r
}

n <- 100000L
data <- as.double(1:n)

#? benchmark: bench_reps(20L, data)

# warmup
warmup_data <- as.double(1:4)
for (i in 1:12) {
  bench_reps(2L, warmup_data)
}
