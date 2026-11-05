# `missing` follows a promise to the caller's parameter. `g` doesn't store `a`, so its optimized
# version elides its environment, and the absent `a` lives only in a register. GNU-R returns TRUE.
f <- function(x) missing(x)
g <- function(a) f(a)

# warmup
for (i in 1:12) {
  g()
}

c(g(), g(1))
