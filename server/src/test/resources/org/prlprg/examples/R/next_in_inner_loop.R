# 2 per outer iteration
check({
  x <- 0
  for (i in 1:3) {
    for (j in 1:3) {
      if (j == 2) {
        next()
      }
      x <- x + 1
    }
  }
  x
}, returns(6))

