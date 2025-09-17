execute <- function(size = 500000L) {
  lis <- list(a=1, b=(1:11)/11, c=list(xa=10,ya=20,xb=30,yb=40))
  for (i in 1:size) lis$c$xb <- 5
  unlist(lis)
}