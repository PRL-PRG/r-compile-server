#? returns(1.0)
x <- 0
for (i in 1:3) {
  if (i == 2) {
    break();
  }
  x <- x + i
}
x
