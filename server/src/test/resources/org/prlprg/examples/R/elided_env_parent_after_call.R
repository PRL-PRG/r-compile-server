# `a` and `b` have elided environments with different parents. After `b` returns, `a` loads `x`
# from its own parent (1), not from `b`'s (100).
make_b <- function() {
  x <- 100
  function(n) n + x
}
for (i in 1:12) b <- make_b()
x <- 1
a <- function(n) b(n) + x
d <- function(n) a(n) + 0

for (i in 1:12) {
  d(i)
}

d(1)
