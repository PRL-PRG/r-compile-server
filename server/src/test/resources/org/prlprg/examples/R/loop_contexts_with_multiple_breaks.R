x <- 0
for (i in 1:10) {
  if (i == 2) {
    x <- x + 100
    break()
  }
  if (i == 5) {
    break()
  }
  x <- x + i
}
x
