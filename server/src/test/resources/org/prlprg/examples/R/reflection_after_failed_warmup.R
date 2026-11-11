# The interpreter has no mock of `nchar`, so the warm-up stops at `i = 12`, after `f` ran 12 times
# without reflecting. The optimizer must not take that as evidence that `f` never reflects.
f <- function(i) {
  if (i %% 2L == 0L) {
    if (i > 12L) environment()
  }
  i
}

run <- function() {
  s <- 0L
  for (i in 1:20) {
    s <- s + f(i)
    if (i == 12L) s <- s + nchar("ab")
  }
  s
}

run()
