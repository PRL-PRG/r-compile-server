check({
  x <- 42
  x + 21
}, direct.fastArith)

check({
  x <- 42L
  x + 21L
}, direct.fastArith)

check({
  x <- 42L
  x + 21
}, direct.fastArith)

check({
  x <- 42
  x + c(1, 2)
})

check({
  x <- c(42, 43)
  x + c(1, 2)
})

check({
  x <- 42L
  x + c(1, 2)
})

check({
  x <- c(42, 43)
  x + c(1, 2)
})

