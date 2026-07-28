#? returns(2.0)
# returns 1 per outer iteration
x <- 0
i <- 1
while (i <= 2) {
  for (j in 1:3) {
    if (j == 2) {
      break()
    }
    x <- x + 1
  }
  if (i == 1) {
    i <- i + 1
    next()
  }
  i <- i + 1
}
x
