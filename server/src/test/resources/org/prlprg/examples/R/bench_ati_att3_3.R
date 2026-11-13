# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Programmation/att3_3.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the timed part of the test in R-benchmark-25.R. The data is built once at top level,
# smaller than upstream; upstream `runs` repeats are dropped.

run <- function(data) {
	gcd2 <- function(x, y) {if (sum(y > 1.0E-4) == 0) x else {y[y == 0] <- x[y == 0]; Recall(y, x %% y)}}
	a <- data[[1]]
	b <- data[[2]]
	c <- gcd2(a, b)                            # gcd2 is a recursive function
	# A summary, because the vector is large.
	sum(c)
}

set.seed(42)
data <- list(ceiling(runif(300000)*1000), ceiling(runif(300000)*1000))
small <- list(ceiling(runif(4)*1000), ceiling(runif(4)*1000))

#? benchmark: run(data)

# warmup
for (i in 1:12) {
  run(small)
}
