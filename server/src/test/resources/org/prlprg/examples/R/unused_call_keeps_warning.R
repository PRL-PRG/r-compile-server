# `x + 1L`'s value is unused, but GNU-R still evaluates it, so `f(.Machine$integer.max)` warns
# "NAs produced by integer overflow". The argument is a promise in the warmup too, so the last call
# doesn't fail a type assumption.
f <- function(x) {
  x + 1L
  0
}

for (i in 1:12) f(i)
f(.Machine$integer.max)
