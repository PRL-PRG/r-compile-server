#? returns(6.0)
# skip middle iteration
x <- 0
for (i in 1:3) {
  if (i == 2) {
    next()
  }
  for (j in 1:3) {
    x <- x + 1
  }
}
x
