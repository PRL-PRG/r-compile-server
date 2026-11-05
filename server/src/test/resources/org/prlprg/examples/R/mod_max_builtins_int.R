f <- function(i, j, z, v, l) {
  c(
    i %% j, -i %% j, i %% -j, -i %% -j, i %% z, NA_integer_ %% j, v %% j, v %% c(j, -j, j), l %% j,
    max(i), max(i, j), max(v), max(v, NA_integer_), max(l), max(l, i), max(NULL, v, -i)
  )
}

f(7L, 3L, 0L, c(-4L, 1L, 9L), c(TRUE, FALSE, TRUE))
