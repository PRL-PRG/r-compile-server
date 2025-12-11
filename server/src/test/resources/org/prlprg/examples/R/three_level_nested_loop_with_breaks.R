x <- 0
for (i in 1:2) {
  for (j in 1:2) {
    for (k in 1:3) {
      if (k == 2) {
        break()
      }
      x <- x + 1
    }
    if (j == 2) {
      break()
    }
  }
}
x
