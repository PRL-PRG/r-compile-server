check({
  x <- 0
  for (i in 1:5) {
    if (i == 2) {
      next()
    }
    if (i == 4) {
      next()
    }
    x <- x + i
  }
  x
})

