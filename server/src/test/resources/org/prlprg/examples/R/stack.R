check({
  a <- 1
  b <- 2
  c <- 3
  (a + b) * (a + c)
})

check({
  a <- 1
  b <- 2
  c <- 3
  x <- if (a) b + c else b
  x + 1
})

