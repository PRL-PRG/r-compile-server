# `o[1, 2] <- 3` and `o[[4, 5]] <- 6` are static calls. GNU-R passes the subscripts untagged, so an
# S3 method sees no tags, and they match its `row` and `col` by position.
`[<-.foo` <- function(x, ..., value) {
  attr(x, "seen") <- c("tags:", names(list(...)))
  x
}
`[[<-.foo` <- function(x, row, col, value) {
  attr(x, "seen2") <- c(row, col)
  x
}
f <- function(o) {
  o[1, 2] <- 3
  o[[4, 5]] <- 6
  o
}
o <- structure(list(), class = "foo")
r <- NULL
for (k in 1:12) r <- f(o)
list(attr(r, "seen"), attr(r, "seen2"))
