check({
  x <- 42
  +x
}, direct.fastUnary)

check({
  x <- 42
  -x
}, direct.fastUnary)

check({
  x <- -42
  +x
}, direct.fastUnary)

check({
  x <- -42
  -x
}, direct.fastUnary)

check({
  x <- 42L
  +x
}, direct.fastUnary)

check({
  x <- 42L
  -x
}, direct.fastUnary)

check({
  x <- -42L
  +x
}, direct.fastUnary)

check({
  x <- -42L
  -x
}, direct.fastUnary)

check({
  x <- c(1, -2)
  -x
})

