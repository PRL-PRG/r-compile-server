y <- c(1,2)
g <- function() {
  y[[x=1]] <<- 42
}
g()
y
