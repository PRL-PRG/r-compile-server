# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/sample_builtin.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

run<-function(n){
    set.seed(42)
    means <- c(0,2,10)
    sd <- c(1,0.1,3)

    a <- runif(n)
    i <- floor(runif(n)*3)+1L
    res<-rnorm(n, means[i], sd[i])

    length(res)
}

#? benchmark: run(1000000L)

# warmup
for (i in 1:12) {
  run(2L)
}
