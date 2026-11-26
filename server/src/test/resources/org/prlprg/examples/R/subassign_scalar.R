# Scalar subassignments, which fir2c stores directly when the vector is unshared and has no class.
fill <- function(x, v) {
  for (i in seq_along(x)) {
    x[[i]] <- v
  }
  x
}
fill1 <- function(x, v) {
  for (i in seq_along(x)) {
    x[i] <- v
  }
  x
}
# The value has an attribute. A local, because `fill`'s optimized code can't take a promise for `v`.
fill_named <- function(x) {
  v <- c(n = 3)
  for (i in seq_along(x)) {
    x[[i]] <- v
  }
  x
}
grow <- function(x, v) {
  x[[length(x) + 1L]] <- v
  x
}
truncated <- function(x, v) {
  x[[2.7]] <- v
  x
}
aliased <- function(x, v) {
  y <- x
  x[[1]] <- v
  list(x, y)
}

# Repeated, so the stubs request their optimized versions.
for (k in 1:20) r <- list(
  fill(c(1.5, 2.5), 3L),
  fill(c(1.5, 2.5), NA_integer_),
  fill(c(1.5, 2.5), TRUE),
  fill(c(1L, 2L), 7L),
  fill(c(1L, 2L), 7.5),
  fill(c(TRUE, FALSE), NA),
  fill(c(a = 1, b = 2), 0),
  fill_named(c(1, 2)),
  fill(structure(c(1, 2), class = "foo"), 4),
  fill1(c(1L, 2L), 5L),
  fill1(c(1, 2), FALSE),
  grow(c(1, 2), 3),
  truncated(c(1L, 2L, 3L), 9L),
  aliased(c(1, 2), 5)
)
r
