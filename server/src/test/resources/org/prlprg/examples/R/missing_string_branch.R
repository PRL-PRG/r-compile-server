# `missing` of a string reads the variable it names, like `missing` of a symbol. `g` branches on
# `missing(x)`, so the optimizer may call the `--> B` version of `missing`.
f <- function(x) missing("x")
g <- function(x, y = 2) if (missing(x)) y else x

# warmup
for (i in 1:12) {
  f()
  f(1)
  g()
  g(1)
}

c(f(), f(1), g(), g(1))
