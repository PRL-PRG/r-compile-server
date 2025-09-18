execute <- function(size=1000000L){
  n <- 900
  a <- c(1:n,n:1)

  for (i in 1:size) b1 <- cumsum(a)
  for (i in 1:size) b2 <- cummax(a)
  for (i in 1:size) b3 <- cummin(a)
  
  a[300] <- NA

  for (i in 1:size) b4 <- cumsum(a)

  list(b1,b2,b3,b4)
}