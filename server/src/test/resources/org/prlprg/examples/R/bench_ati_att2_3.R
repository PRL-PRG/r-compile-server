# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Matrix_functions/att2_3.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the timed part of the test in R-benchmark-25.R. The data is built once at top level,
# smaller than upstream; upstream `runs` repeats are dropped.

run <- function(a) {
	b <- det(a)
	# Inf at this size (the determinant overflows).
	b
}

set.seed(42)
data <- rnorm(650*650); dim(data) <- c(650, 650)
small <- rnorm(4*4); dim(small) <- c(4, 4)

#? benchmark: run(data)

# warmup
for (i in 1:12) {
  run(small)
}
