execute <- function(size = 500000L) {
  f <- function(n, j, k, v){
    lis <- list (a=1, b=(1:11)/11, c=list(xa=10,ya=20,xb=30,yb=40))
    for (i in 1:n) lis[[j]][k] <- v
    lis
  }
  
  r1 <- f(size,2,3,5)
  r2 <- f(size,"b",3,5)
  list(unlist(r1), unlist(r2))
}