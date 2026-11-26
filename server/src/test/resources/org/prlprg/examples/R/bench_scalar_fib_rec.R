#? gcTorture
# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/scalar/fib/fib_rec.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# TODO: Add comment
#
# Author: Administrator
###############################################################################

run <- function(n=30)
{
	if (n < 2) { 1; }
	else {run(n - 1) + run(n - 2);}
}

#? benchmark: run(24L)

# warmup
for (i in 1:12) {
  run(5L)
}
