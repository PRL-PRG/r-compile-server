check({
  x <- 1
  sin(x)
}, direct.fastMath1)

check({
  x <- 1L
  sin(x)
})

check({
  x <- c(1,2)
  sin(x)
})

