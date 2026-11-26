#? gcTorture
# `g` passes `v + 1` lazily to `f`, which returns a closure that keeps the promise. The optimized
# `g` keeps `v` in a register, which the promise reads. The promise is forced after `g` returns.
f <- function(p) function() p
g <- function(v) f(v + 1)

# warmup
for (i in 1:12) {
  g(c(1, 2, 3) * i)
}

h <- g(c(10, 20))
junk <- g(c(5, 6, 7))
h()
