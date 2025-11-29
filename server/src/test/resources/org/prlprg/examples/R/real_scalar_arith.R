check({
  x <- 42
  x + 21
}, direct.fastArith)

check({
  x <- 42
  x - 21
}, direct.fastArith)

check({
  x <- 42
  x * 2
}, direct.fastArith)

check({
  x <- 42
  x / 2
}, direct.fastArith)

check({
  x <- 42
  x ^ 2
}, direct.fastArith)

