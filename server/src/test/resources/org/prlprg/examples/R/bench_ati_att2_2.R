# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Matrix_functions/att2_2.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the timed part of the test in R-benchmark-25.R. The data is built once at top level,
# smaller than upstream; upstream `runs` repeats are dropped.

run <- function(a) {
	# `$Value` is an upstream typo for `$values`, so `b` is NULL. Kept.
	b <- eigen(a, symmetric=FALSE, only.values=TRUE)$Value
	b
}

set.seed(42)
data <- array(rnorm(240*240), dim = c(240, 240))
small <- array(rnorm(4*4), dim = c(4, 4))

#? benchmark: run(data)

# warmup
for (i in 1:12) {
  run(small)
}
