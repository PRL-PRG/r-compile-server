# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/algorithm/Pi/Pi_lapply.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# Monte-Carlo Pi - lapply based solution
# 
# Author: Haichuan Wang
###############################################################################

run <- function(S) {
    
    #X includes "1" column, Y column vec
    sample.func <- function(aSample) {
        if((aSample[1]^2 + aSample[2]^2) < 1) {
            1.0
        } else {
            0.0
        }
    }
    
    sampleOut <- lapply(S, sample.func)
    
    reduceCount <- Reduce('+', sampleOut)
    mcPi <- 4.0 * reduceCount / length(S)
    
    mcPi
}

# setup_Pi.R
set.seed(42)
n <- 45000L
rdata <- runif(n*2)
S <- lapply(1:n, function(i){rdata[(2*i-1):(2*i)]})
data <- S

#? benchmark: run(data)

# warmup
warm <- data[1:20]
for (i in 1:12) {
  run(warm)
}
