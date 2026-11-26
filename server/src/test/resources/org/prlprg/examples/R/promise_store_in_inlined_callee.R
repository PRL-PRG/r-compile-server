# The argument `x <- 2` of the inlined callee `id` stores into the caller's environment, not into
# the callee's (elided) environment, so `x` is 2 after the call. `g` nests the promise in another.
id <- function(a) a
f <- function() { x <- 1; id(x <- 2); x }
g <- function() { x <- 1; id(id(x <- 2)); x }
for (i in 1:12) { f(); g() }
# The interpreter has no `$`, so the feedback stops here.
invisible(.Machine$integer.max)
c(f(), g())
