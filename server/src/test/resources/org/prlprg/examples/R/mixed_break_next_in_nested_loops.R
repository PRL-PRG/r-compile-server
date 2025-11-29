check({
  x <- 0
  for (i in 1:4) {
    if (i == 4) {
      break()
    }
    for (j in 1:4) {
      if (j == 2) {
        next()
      }
      if (j == 4) {
        break()
      }
      x <- x + (i * 10 + j)
    }
  }
  x
})

