execute <- function(size = 100000L) {
  a <- seq(0.001,1,length=1000)
  anan <- a
  anan[300] <- 0/0

  x1 <- x2 <- x3 <- x4 <- x5 <- x6 <- x7 <- x8 <- x9 <- NULL

  for (i in 1:size) x1 <- any(a > 0.2)
  for (i in 1:size) x2 <- all(a < 0.2)
  for (i in 1:size) x3 <- any(a > 0.7)
  for (i in 1:size) x4 <- all(a < 0.7)
  for (i in 1:(size*2)) x5 <- any(is.na(a))
  for (i in 1:(size*2)) x6 <- any(is.nan(anan))
  for (i in 1:(size*2)) x7 <- any(is.infinite(a))
  for (i in 1:(size*2)) x8 <- all(is.finite(a))
  for (i in 1:(size*3)) x9 <- all(is.na(a))

  list(x1, x2, x3, x4, x5, x6, x7, x8, x9)
}