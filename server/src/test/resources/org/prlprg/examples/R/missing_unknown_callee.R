# `seq` is a base closure, so the call stays dynamic. `seq.default` calls `missing(from)`, which
# follows the promise of `lo` into the environment of `f`. So that environment must stay accurate.
g <- function(y) y * 2
f <- function(n) {
  lo <- 1
  s <- 0
  for (x in seq(lo, n, 2)) s <- s + g(x)
  s
}

# warmup
for (i in 1:12) {
  f(9)
}

f(9)
