check({
  x <- TRUE
  y <- x
  is.na(y)
})

check({
  x <- FALSE
  y <- x
  is.na(y)
})

check({
  x <- NA
  y <- x
  is.na(y)
})

check({
  y <- NA_integer_
  is.na(y)
})

