# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/filter1d.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

# tests subsetting vector and vector length changing in first iteration of the loop

run<-function(a) {

filter <- function(v, f) {
    r <- 0
    for(i in 1L:length(f)) {
        r <- r + v[(1L+i): ((length(v)-length(f))+i)]*f[i]
    }
    r
}

#filter(a, c(0.1,0.15,0.2,0.3,0.2,0.15,0.1))
res<-filter(a, c(0.1,0.15,0.2,0.3,0.2,0.15,0.1));
r<-length(res);
r
}

set.seed(42)
n <- 2000000L
data <- runif(n)

#? benchmark: run(data)

# warmup
warmup_data <- runif(10)
for (i in 1:12) {
  run(warmup_data)
}
