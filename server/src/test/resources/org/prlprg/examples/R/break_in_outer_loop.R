check({
  x <- 0
  for (i in 1:3) {
    for (j in 1:3) {
      x <- x + 1
    }
    if (i == 2) {
      break()
    }
  }
  x
}, dontSaveSnapshot, returns(6))
