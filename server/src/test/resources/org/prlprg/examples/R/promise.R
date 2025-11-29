check({
  f <- function(x) x + 1
  y <- 2
  f(y*2)
}, returns(5))