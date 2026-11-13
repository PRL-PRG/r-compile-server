# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/scalar/gcd/gcd_rec.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# TODO: Add comment
#
# Author: Haichuan Wang(hwang154@illinois.edu)
###############################################################################

run <- function(mn) {
    m <- mn[[1]]
    n <- mn[[2]]
	gcd<-function(m,n) {
		if(n==0) { m; }
		else { gcd(n,m %% n); }
	}
	r<-gcd(m,n);
	r;
}

# Calls `run` `reps` times, like the upstream harness, because one call is too short to time.
bench_reps <- function(reps, mn) {
  for (bench_i in 1:reps) r <- run(mn)
  r
}

mn <- list(123456789L, 234736437L)

#? benchmark: bench_reps(6000L, mn)

# warmup
for (i in 1:12) {
  bench_reps(2L, mn)
}
