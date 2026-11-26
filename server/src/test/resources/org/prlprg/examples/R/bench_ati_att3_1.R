# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Programmation/att3_1.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the timed part of the test in R-benchmark-25.R. The data is built once at top level,
# smaller than upstream; upstream `runs` repeats are dropped.

run <- function(a) {
	phi <- 1.6180339887498949
	b <- (phi^a - (-phi)^(-a))/sqrt(5)
	# A summary, because the vector is large.
	sum(b)
}

set.seed(42)
data <- floor(runif(1700000)*1000)
small <- floor(runif(4)*1000)

#? benchmark: run(data)

# warmup
for (i in 1:12) {
  run(small)
}
