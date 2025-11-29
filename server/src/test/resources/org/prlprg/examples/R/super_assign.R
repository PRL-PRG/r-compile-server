check({
  x <- c(1,2)
  g <- function() {
    x <<- 42
  }
  g()
  x
})

check({
  x <- c(1,2)
  g <- function() {
    x[] <<- 42
  }
  g()
  x
})

check({
  y <- c(1,2)
  g <- function() {
    y[[x=1]] <<- 42
  }
  g()
  y
})

