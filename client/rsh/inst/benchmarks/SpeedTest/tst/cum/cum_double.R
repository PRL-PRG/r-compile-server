execute <- function(size=100000L){
  n <- 400
  a <- c(1:n,n:1) + 0.1

  for (i in 1:(size*10)) b1 <- cumsum(a)
  for (i in 1:size) b2 <- cumprod(a)
  for (i in 1:(size*10)) b3 <- cummax(a) 
  for (i in 1:(size*10)) b4 <- cummin(a)

  a[300] <- 0/0
  a[500] <- NA

  for (i in 1:(size*5)) b5 <- cumsum(a)

  list(b1,b2,b3,b4,b5)
}