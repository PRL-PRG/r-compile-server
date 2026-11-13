# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/riposte/black_scholes.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
#adapted from https://github.com/ispc/ispc/tree/master/examples/options
#changed by hwang154@illinois.edu
# 1) according to the test harness
# 2) remove global variable lookup

run <- function(dataset) {
    S<-dataset[[1]]
    X<-dataset[[2]]
    TT<-dataset[[3]]
    r<-dataset[[4]]
    v<-dataset[[5]]
    N_OPTIONS<-dataset[[6]]

    N_ROUNDS <- 1000

    log10 <- log(10)
    invSqrt2Pi <- 0.39894228040

    CND <- function(X) {
        k <- 1.0 / (1.0 + 0.2316419 * abs(X))
        w <- (((((1.330274429*k) - 1.821255978)*k + 1.781477937)*k - 0.356563782)*k + 0.31938153)*k
        xx <- X * X * -.5
        w <- w * invSqrt2Pi * exp(xx)
        w <- ifelse(X > 0,1 - w,w)
        #Xgt0 <- X > 0
        #w[Xgt0] <- (1-w)[Xgt0]
        #w
    }

    black_scholes <- function() {
        delta <- v * sqrt(TT)
        sx <- S/X
        d1 <- (log(sx)/log10 + (r + v * v * .5) * TT) / delta
        d2 <- d1 - delta
        rt<--r * TT
        s<-S * CND(d1) - X * exp(rt) * CND(d2)
        sum(s)
    }
    #bench part
    acc <- 0
    for(i in 1:N_ROUNDS) {
        acc <- acc + black_scholes()
    }
    acc <- acc / (N_ROUNDS * N_OPTIONS)
    acc
}

N_OPTIONS <- 600L
S <- rep(100,each=N_OPTIONS)
X <- rep(98,each=N_OPTIONS)
TT <- rep(2,each=N_OPTIONS)
r <- rep(.02,each=N_OPTIONS)
v <- rep(5,each=N_OPTIONS)
data <- list(S,X,TT,r,v,N_OPTIONS)

#? benchmark: run(data)

# warmup
warmup_data <- list(rep(100, 2), rep(98, 2), rep(2, 2), rep(.02, 2), rep(5, 2), 2L)
for (i in 1:12) {
  run(warmup_data)
}
