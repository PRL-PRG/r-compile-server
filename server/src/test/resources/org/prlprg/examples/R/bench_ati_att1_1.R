# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Matrix_calculation/att1_1.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the timed part of the test in R-benchmark-25.R. The data is built once at top level,
# smaller than upstream; upstream `runs` repeats are dropped.

run <- function(a) {
	b <- a^1000
	# A summary, because the matrix is large. Most elements are 0 or Inf.
	c(sum(is.finite(b)), sum(b == 0))
}

set.seed(42)
data <- abs(matrix(rnorm(1500*1500)/2, ncol=1500, nrow=1500))
small <- abs(matrix(rnorm(4*4)/2, ncol=4, nrow=4))

#? benchmark: run(data)

# warmup
for (i in 1:12) {
  run(small)
}
