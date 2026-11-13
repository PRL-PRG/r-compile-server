# The names sort in the same order in every locale.
f <- function(y) {
  zeta <- 1
  .hidden <- 3
  s_t <- 4
  environment()
}

id <- function(e) e

# `environment()` in a promise reflects on the frame that created it, like in
# `promise_reflect_benchmark`.
k <- function() {
  w <- 1
  id(environment())
}

g <- function() {
  e <- f(1)
  list(ls(e), ls(envir = f(2)), length(ls(f(3))), ls(k()))
}

g()
