# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Matrix_calculation/att1_5.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the timed part of the test in R-benchmark-25.R. The data is built once at top level,
# smaller than upstream; upstream `runs` repeats are dropped.

run <- function(data) {
	a <- data[[1]]
	b <- data[[2]]
	c <- solve(crossprod(a), crossprod(a,b))
	# A summary, because the vector is large.
	sum(c)
}

require(Matrix)
set.seed(42)
data <- list(new("dgeMatrix", x = rnorm(430*430), Dim = as.integer(c(430,430))), as.double(1:430))
small <- list(new("dgeMatrix", x = rnorm(4*4), Dim = as.integer(c(4,4))), as.double(1:4))

#? benchmark: run(data)

# warmup
for (i in 1:12) {
  run(small)
}
