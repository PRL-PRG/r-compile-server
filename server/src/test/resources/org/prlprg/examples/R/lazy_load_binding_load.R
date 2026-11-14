# GNU-R binds a base function to a lazy-load promise, also after it forces it. The interpreter binds
# the value, so a load of `which.min` in the promise of `lapply`'s argument is speculated a closure.
f <- function(l) lapply(l, which.min)
for (i in 1:12) {
  r <- f(list(c(3, 1, 2), c(1, 2)))
}
r
