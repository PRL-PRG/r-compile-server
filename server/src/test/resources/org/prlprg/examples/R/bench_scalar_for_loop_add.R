# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/scalar/ForLoopAdd/ForLoopAdd.R
# TODO: Add comment
#
# Author: Haichuan Wang(hwang154@illinois.edu)
###############################################################################

run <-function(n=10000000) {
  r <- 0;
  for( i in 1:n) {
    r <- r + i;
  }
  r
};

#? benchmark: run(3000000L)

# warmup
for (i in 1:12) {
  run(10L)
}
