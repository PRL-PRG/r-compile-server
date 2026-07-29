f <- function(prom) function() prom
g <- function(i) f(x <- i)
x <- 0

for (i in 1:11) {
  h <- g(i)  # `x <- i` is leaked, `x` is unchanged
  h()  # `x <- i` is forced, `x` is now `i`
}

h <- g(12)  # `x <- i` is leaked, `x` is still 0
h()  # x <- i` is forced, `x` would now be 12,
     # except the FIR program will crash because it speculated `x <- i` is local
