#? gcTorture
# Scalar subscripts at the edges of the runtime's paths without an argument list: indices that are
# out of range or not scalar, targets with attributes, shared targets, and stores that coerce.
read <- function(x, m, a, l, i, d) {
  list(
    x[0], x[-1], x[NA_integer_], x[NA_real_], x[i + 3L], x[d], x[[d]], x[i:2], x[c(a = 1L)],
    m[i, 2L], m[[i, 2L]], m[2L, d], m[[3L]], m[i, ], m[5L],
    a[i], a[[2L, 1L, 2L]], a[i, 1L, 2L],
    l[[i]], l[i], l[[2L]][[1L]], l[["b"]]
  )
}
write <- function(x, m, a, l, i, d) {
  y <- x
  y[i] <- 5
  x[[i + 3L]] <- 9
  x[d] <- NA
  x[[2L]] <- TRUE
  n <- c(1L, 2L)
  n[i] <- 2.5
  n[[2L]] <- NA
  g <- c(TRUE, FALSE)
  g[[i]] <- 1L
  m[i, 2L] <- 7L
  m[[2L, i]] <- 8
  m[[d, d]] <- 9
  a[[i, 2L, 2L]] <- 0
  l[[i]] <- NULL
  l[[2L]] <- l
  l[["new"]] <- 1:3
  k <- list(1, 2)
  k[[i]] <- k
  k[i] <- 3
  list(x, y, n, g, m, a, l, k)
}

# The interpreter has no `.Machine$`, so the feedback stops here. Feedback would make the optimizer
# replace the subscript calls with typed versions, which don't take those paths.
invisible(.Machine$integer.max)
for (k in 1:20) {
  m <- matrix(1:6, 2, dimnames = list(c("r1", "r2"), c("a", "b", "c")))
  r <- list(
    read(c(10, 20, 30), m, array(1:8, c(2, 2, 2)), list(1, list("x"), b = 3), 1L, 2.7),
    write(c(10, 20, 30), m, array(1:8, c(2, 2, 2)), list(1, list("x"), b = 3), 1L, 2.7)
  )
}
r
