# `ls` of a frame that `sys.frame` returns lists only its bindings.
k <- function() {
  t1 <- 1
  ls(sys.frame(-1))
}

k2 <- function() {
  s2 <- 1
  k()
}

k2()
