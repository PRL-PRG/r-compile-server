# `missing` of a supplied and of a missing parameter.
f <- function(x, y) c(missing(x), missing(y))

# warmup
for (i in 1:12) {
  f(1)
  f()
}

c(f(1), f(), f(y = 2))
