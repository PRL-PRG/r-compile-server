execute <- function(n=2000000) {
  x <- 0
  f <- function() {
    while (x < n) {
      x <<- x + 1
    }
  }
  f()
  x
}
