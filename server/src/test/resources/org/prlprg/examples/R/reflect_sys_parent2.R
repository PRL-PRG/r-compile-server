f <- function(b) {
  if (b) {
    sys.parent()
    1L
  } else {
    0L
  }
}

b <- TRUE
r <- 0L
for (i in 1:11) {
  r <- r + f(b)
  b <- !b
}
r
