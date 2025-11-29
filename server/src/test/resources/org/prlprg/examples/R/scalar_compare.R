check({
  x <- 42
  x < 100
}, direct.fastRelop)

check({
  x <- 42
  x > 100
}, direct.fastRelop)

check({
  x <- 42
  x <= 42
}, direct.fastRelop)

check({
  x <- 42
  x >= 42
}, direct.fastRelop)

check({
  x <- 42
  x == 42
}, direct.fastRelop)

check({
  x <- 42
  x == 100
}, direct.fastRelop)

check({
  x <- 42
  x != 42
}, direct.fastRelop)

check({
  x <- 42
  x != 100
}, direct.fastRelop)

