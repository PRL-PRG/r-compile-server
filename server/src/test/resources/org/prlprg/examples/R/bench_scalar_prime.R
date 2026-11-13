# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/scalar/prime/prime.R
# TODO: Add comment
#
# Author: Haichuan Wang(hwang154@illinois.edu)
###############################################################################

#Simple trivial test of n
#no any optimizaiton, just test the worst loop case

run <- function(n=100000) {
	if(n<2) { n <- 2;}

	num_primes <- 0;

	for(i in 2:n) {
		limit <- sqrt(i);
		prime <- TRUE; #for 2 is prime
		j<-2; # i %% j
		while(prime && j <= limit){
			if((i %% j) ==0) { prime <- FALSE;}
			j <- j+1;
		}
		if(prime) {
			#print("prime:");print(i);
			num_primes<-num_primes+1;
		}
	}
	num_primes;
}

#? benchmark: run(25000L)

# warmup
for (i in 1:12) {
  run(10L)
}
