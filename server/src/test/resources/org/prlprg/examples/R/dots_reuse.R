# The same `...` passed to a closure three times.
k <- function(...) {
  add <- function(x, y) x + y
  r <- 0
  for (i in 1:3) r <- r + add(...)
  r
}
k(1, 2)
