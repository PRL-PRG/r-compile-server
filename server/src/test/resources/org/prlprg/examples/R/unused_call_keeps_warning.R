# `sqrt(x)`'s value is unused, but GNU-R still evaluates it, so `f(-i)` warns "NaNs produced". The
# argument is a promise in the warmup too, so the last call doesn't fail a type assumption.
f <- function(x) {
  sqrt(x)
  0
}

for (i in 1:12) f(i)
f(-i)
