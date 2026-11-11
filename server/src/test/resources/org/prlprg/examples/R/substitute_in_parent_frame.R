# `h` reads the expression of `g`'s argument through `parent.frame()`, which `substitute` (a special)
# evaluates. So `h` needs a context, though it calls no context reader by name. GNU-R gives the
# symbol `x` (the promise that `g(x)` makes), not `a`.
h <- function() substitute(a, parent.frame())
g <- function(a) h()
f <- function(x) g(x)
z <- 1

# warmup
for (i in 1:12) {
  f(z)
}

f(z)
