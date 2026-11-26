# `f` only stores `...` (its entry `st ... = ddd`) and reads it through `..1` (`ld ..1`), so the
# store must stay. `g` calls `f` from compiled code, so `f` makes its own frame (a call from R
# reuses R's frame, which already binds `...`).
f <- function(...) {
  a <- ..1
  a * 2
}
g <- function(n) f(n)

# warmup
for (i in 1:12) {
  g(i)
}

g(21)
