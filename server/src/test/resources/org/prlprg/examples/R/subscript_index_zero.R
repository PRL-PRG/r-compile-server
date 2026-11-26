# `x[i]` where `i` is 0 in half the calls, so the result is empty there: the optimizer must not
# select the `[` version that returns one element.
g <- function(x, i) x[i]
r <- list()
for (k in 1:12) r[[k]] <- g(c(10, 20, 30), if (k %% 2L == 0L) 0L else 2L)
r
