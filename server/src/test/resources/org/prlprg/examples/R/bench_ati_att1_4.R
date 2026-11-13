# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Matrix_calculation/att1_4.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the timed part of the test in R-benchmark-25.R. The data is built once at top level,
# smaller than upstream; upstream `runs` repeats are dropped.

run <- function(a) {
	b <- sort(a, method="quick")
	# A summary that depends on the order, because the vector is large.
	sum(b * seq_along(b))
}

set.seed(42)
data <- rnorm(500000)
small <- rnorm(4)

#? benchmark: run(data)

# warmup
for (i in 1:12) {
  run(small)
}
