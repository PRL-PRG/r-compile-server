# `f` passes its promise `x` on to `g`. GNU-R gives `g` a new promise whose expression is `x`, and
# the closure that `g` returns keeps `g`'s frame, so the code after the loop reads that expression:
# `x`. The caller's own promise, whose expression is `z`, must not take its place.
g <- function(a, use) {
  use
  function() if (use) a else 0
}
f <- function(x, use) {
  if (!use) x
  g(x, use)
}
z <- 1

for (i in 1:12) {
  k <- f(z, i == 12L)
}
eval(parse(text = "substitute(a, environment(k))"))
