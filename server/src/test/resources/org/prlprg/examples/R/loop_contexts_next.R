check({
  x <- 0
  for (i in 1:5) {
    if (i == 3) {
      next()
    }
    x <- x + i
  }
  x
})

