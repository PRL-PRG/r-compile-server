# `f` forces `a`, which assigns `x`, then `b`, which reads that `x`, then `a` again, which is
# already forced. So `g(1)` is (1 + 5) * 2. The second promise must not read a register of the
# first one's body.
f <- function(a, b) {
  a
  b
  a
}
g <- function(y) {
  x <- y
  f(x <- x + 5, x <- x * 2)
  x
}

for (i in 1:12) g(i)
g(1)
