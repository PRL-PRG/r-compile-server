# The names sort in the same order in every locale.
f <- function(y) {
  zeta <- 1
  .hidden <- 3
  s_t <- 4
  environment()
}

g <- function() {
  e <- f(1)
  list(ls(e), ls(envir = f(2)), length(ls(f(3))))
}

g()
