f <- function(prom) function() prom
x <- 0

for (i in 1:11) f(x <- i) # warmup speculating that `prom` is local
                          # `prom`/`x <- i` is leaked but not forced, so it doesn't matter

g <- f(x <- 12)  # `prom`/`x <- 12` is leaked, `x` is still 0
g()  # `prom`/`x <- 12` is forced, `x` would now be 12,
     # except the FIR program will crash because it speculated `prom` is local
