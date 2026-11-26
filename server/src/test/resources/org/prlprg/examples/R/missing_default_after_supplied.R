# `missing(y)` of a parameter with a default is TRUE when the call doesn't supply it, also after a
# warm-up that always supplied it, and FALSE once `y` is assigned. `z`'s default is a constant.
f <- function(x, y = x * 2, z = 3) {
  m <- c(missing(y), missing(z))
  z <- 4
  c(m, missing(z), y)
}
for (q in 1:12) f(1, 3, 5)
list(f(1), f(1, 3), f(1, z = 5))
