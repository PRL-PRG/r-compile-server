execute <- function(n) {
  x <- 0
  f <- function() {
    while (x < n) {
      x <<- x + 1
    }
  }
  f()
}
