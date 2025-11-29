check({
  x <- 42L
  x + 21L
}, direct.fastArith)

check({
  x <- 42L
  x - 21L
}, direct.fastArith)

check({
  x <- 42L
  x * 2L
}, direct.fastArith)

check({
  x <- 42L
  x / 2L
}, direct.fastArith)

