# At `DEBUG=false`, optimizing the lazy optimized version of `swap` didn't reach a fixpoint: a value
# promise and a `box` sat before one `deopt`, and `SchedulePure` swapped them on every run.
# `f2` and `h2` are never called; they are part of the program that showed the failure.
swap <- function(v, i, j) {
  t <- v[i]
  v[i] <- v[j]
  v[j] <- t
  v
}
swap2 <- function(v, i, j) {
  t <- v[j]
  v[j] <- v[i]
  v[i] <- t
  v
}
f <- function(n, len) {
  vec <- rep(1.5, len)
  for (k in 1:n) vec <- swap(vec, 3L, 4L)
  vec
}
f2 <- function(n, len) {
  vec <- rep(1.5, len)
  for (k in 1:n) vec <- swap(swap(vec, 1L, 2L), 3L, 4L)
  vec
}
h2 <- function(n, len, sw) {
  vec <- rep(1.5, len)
  for (k in 1:n) vec <- sw(vec, 3L, 4L)
  vec
}
for (k in 1:12) {
  f(5L, 10L)
}
list(f(6L, 10L))
