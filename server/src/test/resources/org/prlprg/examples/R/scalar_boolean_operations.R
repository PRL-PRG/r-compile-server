check({
  a <- TRUE
  b <- TRUE
  a && b
})

check({
  a <- TRUE
  b <- TRUE
  a || b
})

check({
  a <- TRUE
  b <- FALSE
  a || b
})

check({
  a <- FALSE
  b <- TRUE
  a || b
})

check({
  a <- FALSE
  b <- FALSE
  a || b
})

check({
  a <- NA
  b <- FALSE
  a || b
})

check({
  a <- NA
  b <- TRUE
  a || b
})

check({
  a <- TRUE
  b <- NA
  a || b
})

check({
  a <- FALSE
  b <- NA
  a || b
})

check({
  a <- NA
  b <- NA
  a || b
})

check({
  a <- TRUE
  b <- FALSE
  a && b
})

check({
  a <- FALSE
  b <- TRUE
  a && b
})

check({
  a <- FALSE
  b <- FALSE
  a && b
})

check({
  a <- NA
  b <- FALSE
  a && b
})

check({
  a <- NA
  b <- TRUE
  a && b
})

check({
  a <- TRUE
  b <- NA
  a && b
})

check({
  a <- FALSE
  b <- NA
  a && b
})

check({
  a <- NA
  b <- NA
  a && b
})

