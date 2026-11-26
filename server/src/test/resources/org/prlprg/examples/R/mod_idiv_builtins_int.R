f <- function(i, j, z, v, l) {
  c(
    i %/% j, -i %/% j, i %/% -j, -i %/% -j, i %/% z, z %/% z, NA_integer_ %/% j, v %/% j,
    v %/% c(j, -j, j), l %/% j
  )
}

f(7L, 3L, 0L, c(-4L, 1L, 9L), c(TRUE, FALSE, TRUE))
