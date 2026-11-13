# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Programmation/att3_2.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the body of the upstream `runs` loop, with the size `a` in place of the upstream
# constant, so that the warmup can be small.

run <- function(a) {
	b <- rep(1:a, a); dim(b) <- c(a, a);
	b <- 1 / (t(b) + 0:(a-1))
	# A summary, because the matrix is large.
	sum(b)
}

#? benchmark: run(2000)

# warmup
for (i in 1:12) {
  run(4)
}
