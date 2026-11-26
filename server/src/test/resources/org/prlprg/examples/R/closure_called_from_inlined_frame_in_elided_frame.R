# `f` elides its frame, and the inlined `g` pushes a real frame in it, where it makes the closure
# that `keep` holds. `keep`'s frame is elided, and its parent is that real frame, so the real frame's
# parent must not be the elided environment (a cycle in the parent chain).
keep <- NULL
g <- function(a) {
  keep <<- function() a
  NULL
}
f <- function() {
  v <- c(1, 2, 3)
  w <- v
  g(w)
  v[1] <- 100
  keep()[1]
}
for (i in 1:12) r <- f()
r
