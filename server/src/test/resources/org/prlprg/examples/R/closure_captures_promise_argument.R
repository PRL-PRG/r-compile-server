# The closure that `g` makes captures `g`'s environment, where the argument is the promise
# `x <- 9`. `h` calls the closure, which forces the promise. So `f` returns 9.
g <- function(a) {
  p <<- function() a
  0
}
h <- function() p()
f <- function() {
  x <- 1
  g(x <- 9)
  x <- 2
  h()
  x
}

for (i in 1:12) f()
f()
