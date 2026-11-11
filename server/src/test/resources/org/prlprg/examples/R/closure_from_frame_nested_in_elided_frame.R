# `g` elides its frame, and the inlined `f` pushes a real frame in it. The closure that `f` returns
# keeps that frame, so its lookup of `y` reaches `g`'s parent (1), also after `b` pushed its elided
# frame, whose parent binds `y` to 100.
y <- 1
f <- function(p) function(k) p + y + k
g <- function() f(5)
make_b <- function() {
  y <- 100
  function(n) n + y
}
for (i in 1:12) b <- make_b()

for (i in 1:12) {
  g()
  b(i)
}

h <- g()
b(1)
h(0)
