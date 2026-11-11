# `g` captures `f`'s frame, and `g()` stores 100 in its `x` with `<<-`, so `f` returns 100.
f <- function(n, t) {
  x <- n
  g <- function() x <<- 100
  if (t) g()
  x
}

for (i in 1:12) f(1, i == 12L)
f(1, TRUE)
