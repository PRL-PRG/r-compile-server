f <- function(prom) function() prom
x <- 0

for (i in 1:11) {
  g <- f(x <- i)  # `prom`/`x <- i` is leaked, `x` is unchanged
  g()  # `prom`/`x <- i` is forced, `x` is now `i`
}

g <- f(x <- 12)  # `prom`/`x <- 12` is leaked, `x` is still 0
g()  # `prom`/`x <- 12` is forced, `x` is now 12,
     # no FIR crash because it speculated `prom` is local
