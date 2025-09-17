execute <- function(size = 1000000L) {
  w <- x <- y <- z <- 0
  a <- 1.1
  b <- 2.2
  for (i in 1:size) {
    w <- a+1
    x <- a+b
    y <- a-b
    z <- a*b
  }
  w+x+y+z
}