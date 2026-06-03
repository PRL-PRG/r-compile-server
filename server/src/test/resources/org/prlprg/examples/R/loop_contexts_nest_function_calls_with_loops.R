outer_func <- function() {
  inner_func <- function() {
    x <- 0
    for (j in 1:3) {
      for (i in 1:3) {
        if (i == 2) {
          break()
        }
        x <- i
      }
      if (j == 2) {
        return(x)
      }
    }
    x
  }

  x <- 0
  for (j in 1:100) {
    x <- x + inner_func()
  }
  return(x)
}

outer_func()
