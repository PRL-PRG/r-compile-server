# `parent.frame` reflects on the caller's frame, and `ls` of that frame then lists only its bindings.
h <- function() parent.frame()
f <- function() {
  x <- 1
  h()
  ls()
}
stopifnot(identical(f(), "x"))
f()
