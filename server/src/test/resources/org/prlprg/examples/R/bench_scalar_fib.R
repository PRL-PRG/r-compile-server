# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/scalar/fib/fib.R
# TODO: Add comment
#
# Author: Haichuan Wang(hwang154@illinois.edu)
###############################################################################

run <- function(rep=1000)
{
	n <-1000;
	for(i in 1:rep){
		a <- 1
		b <- 1
		for(j in 1:n) {t <- a; a <- b; b <- b+t}
	}
	b
}

#? benchmark: run(2000L)

# warmup
for (i in 1:12) {
  run(2L)
}
