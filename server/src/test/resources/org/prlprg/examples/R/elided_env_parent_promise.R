# `a` has an elided environment and passes `x` lazily to `b`, which has an elided environment with
# another parent. `b` forces the promise, which loads `x` from `a`'s parent (1), not `b`'s (100).
make_b <- function() {
  x <- 100
  function(n, m) n + m + x
}
for (i in 1:12) b <- make_b()
x <- 1
a <- function(n) b(n, x)
d <- function(n) a(n) + 0

for (i in 1:12) {
  d(i)
}

d(1)
