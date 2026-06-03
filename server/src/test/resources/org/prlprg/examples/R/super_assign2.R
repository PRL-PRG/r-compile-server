x <- c(1,2)
g <- function() {
  x[] <<- 42
}
g()
x
