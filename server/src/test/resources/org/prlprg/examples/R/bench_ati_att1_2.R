# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Matrix_calculation/att1_2.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the body of the upstream `runs` loop, with the size `n` in place of the upstream
# constant, so that the warmup can be small.

run <- function(n) {
	set.seed(42)
	a <- matrix(rnorm(n*n)/10, ncol=n, nrow=n);
	b <- t(a);
	dim(b) <- c(n/2, 2*n);
	a <- t(b)
	# A summary, because the matrix is large.
	sum(a * seq_along(a))
}

#? benchmark: run(1300)

# warmup
for (i in 1:12) {
  run(4)
}
