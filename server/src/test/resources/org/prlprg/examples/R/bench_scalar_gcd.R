# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/scalar/gcd/gcd.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# TODO: Add comment
#
# Author: Haichuan Wang(hwang154@illinois.edu)
###############################################################################

run <- function(l=100000) {
	
	set.seed(42)
	a <- as.integer(runif(l, 1, 1000000000));
	b <- as.integer(runif(l, 1, 1000000000));
	for(i in 1:l) {
		m<-a[i];
		n<-b[i];
		while(n!=0) {
			t=m;
			m=n;
			n=t %% n;
		}
	}
	l
}

#? benchmark: run(25000L)

# warmup
for (i in 1:12) {
  run(10L)
}
