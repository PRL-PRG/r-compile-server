# Each iteration of `f`'s loop passes a promise of the same code to `g`. In the second iteration,
# `p2` forces that promise, whose `h()` forces the promise of the first iteration (through `p1`).
# The first promise stores 2 into `board` before the second one reads it, so `f(2)` is 2.
n_ps <- 0L
done <- FALSE
g <- function(x) {
  n_ps <<- n_ps + 1L
  if (n_ps == 1L) {
    p1 <<- function() x
    0
  } else {
    p2 <<- function() x
    p2()
  }
}
h <- function() {
  if (n_ps == 2L && !done) {
    done <<- TRUE
    p1()
  } else 0
}
f <- function(n) {
  board <- 0
  r <- 0
  for (k in 1:n) {
    board <- 1
    r <- g({ h(); b <- board; board <- 2; b })
  }
  r
}

for (i in 1:12) {
  n_ps <- 0L
  done <- FALSE
  f(2)
}
n_ps <- 0L
done <- FALSE
f(2)
