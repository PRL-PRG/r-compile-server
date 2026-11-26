f <- function(prom) function() prom
g <- function(i) f(x <- i)
x <- 0

for (i in 1:11) {
  h <- g(i)  # `x <- i` is leaked, `x` is unchanged
  h()  # `x <- i` is forced, `x` is now `i`
}

h <- g(12)  # `x <- i` is leaked, `x` is still 0
h()  # `x <- i` is forced in `g`'s frame, the global `x` is still 0
