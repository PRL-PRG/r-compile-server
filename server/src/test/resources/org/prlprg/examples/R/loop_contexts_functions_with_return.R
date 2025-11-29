check({
  process <- function() {
    x <- 0
    for (i in 1:5) {
      if (i == 3) {
        break()
      }
      x <- x + i
    }
    return(x)
  }
  process()
})

