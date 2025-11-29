check({
  x <- NULL
  is.null(x)
})

check({
  a <- 10
  x <- 1:a
  is.integer(x)
})

check({
  x <- 'a'
  is.double(x)
})

check({
  x <- 1
  is.double(x)
})

check({
  x <- c(1, 2)
  is.double(x)
})

check({
  a <- 10
  x <- 1:a
  is.double(x)
})

check({
  x <- 1
  is.null(x)
})

check({
  x <- ''
  is.null(x)
})

check({
  x <- 1
  is.logical(x)
})

check({
  x <- T
  is.logical(x)
})

check({
  x <- c(T, F)
  is.logical(x)
})

check({
  x <- 'a'
  is.integer(x)
})

check({
  x <- 1L
  is.integer(x)
})

check({
  x <- c(1L, 2L)
  is.integer(x)
})

# TODO: missing other is.xxx
