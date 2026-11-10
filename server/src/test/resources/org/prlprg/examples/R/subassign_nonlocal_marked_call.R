# `x[[i]] <- 0` where `x` is not local in the first iteration (GNU-R copies the global `x`) and
# local in the second (the setter protocol applies and marks the call as an assignment). From the
# second call of `f` on, the first iteration must still copy the global.
x <- list()
for (k in 1:3) x[[k]] <- k
f <- function() {
  for (i in 1:2) x[[i]] <- 0
  x
}
r <- list()
for (k in 1:6) r[[k]] <- f()
list(r[[6]], x)
