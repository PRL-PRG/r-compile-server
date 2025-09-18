execute <- function(size=1000000L){
  n <- 100
  a <- c(1:n,n:1) + 0.1i

  for (i in 1:size) b1 <- cumsum(a)
  for (i in 1:size) b2 <- cumprod(a)

  list(b1,b2)
}