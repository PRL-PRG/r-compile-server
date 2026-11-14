# A scalar sub-assignment past the end grows the vector. The typed `[<-` versions only write within
# the vector, so the optimizer must not select them for a call that the feedback saw grow.
f <- function(n, v) {
  x <- integer(n)
  for (i in 1:n) x[i] <- i
  x[n + 1L] <- v
  y <- x
  y[[length(y) + 1L]] <- v
  y
}
for (i in 1:12) {
  r <- f(3L, i)
}
r
