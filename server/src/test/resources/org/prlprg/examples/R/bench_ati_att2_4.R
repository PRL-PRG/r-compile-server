# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Matrix_functions/att2_4.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the body of the upstream `runs` loop, with the size `n` in place of the upstream
# constant. The data is not built at top level, because Matrix caches the factorization in it.

run <- function(n) {
	set.seed(42)
	a <- crossprod(new("dgeMatrix", x = rnorm(n*n),
					Dim = as.integer(c(n, n))))
	b <- chol(a)
	# A summary, because the matrix is large.
	sum(b)
}

require(Matrix)

#? benchmark: run(400)

# warmup
for (i in 1:12) {
  run(4)
}
