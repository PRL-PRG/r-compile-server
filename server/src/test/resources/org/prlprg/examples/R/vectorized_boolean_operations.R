# TODO test empty vector

check({
  x <- TRUE
  y <- FALSE
  x & y
})

check({
  x <- TRUE
  y <- FALSE
  x | y
})

check({
  x <- c(T, F, T, F, NA, NA, T, F)
  y <- c(T, T, F, F, T, F, NA, NA)
  x & y
})

check({
  x <- c(T, F, T, F, NA, NA, T, F)
  y <- c(T, T, F, F, T, F, NA, NA)
  x & y
})

check({
  x <- c()
  y <- T
  x & y
})

check({
  x <- T
  y <- c()
  x & y
})

check({
  x <- TRUE
  !x
})

check({
  x <- 42
  !!x
})

check({
  x <- c(T, F, T, F)
  y <- c(T, T, F, F)
  x | y
})
