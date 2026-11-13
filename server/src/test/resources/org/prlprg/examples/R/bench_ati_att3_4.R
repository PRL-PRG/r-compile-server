# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Programmation/att3_4.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the body of the upstream `runs` loop, with the size `n` in place of the upstream
# constant, so that the warmup can be small.

run <- function(n) {
	b <- rep(0, n*n); dim(b) <- c(n, n)
	for (j in 1:n) {
		for (k in 1:n) {
			jk<-j - k;
			b[k,j] <- abs(jk) + 1
		}
	}
	# A summary, because the matrix is large.
	sum(b * seq_along(b))
}

#? benchmark: run(700L)

# warmup
for (i in 1:12) {
  run(2L)
}
