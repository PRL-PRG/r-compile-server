execute <- function(size=100000L){
  u <- 1:100
  v <- 101:200
  w <- 1001:1100

  g <- function (n,a,b,c){ 
    for (i in 1:n) r <- a + ((- b + 3L*a - c + 30000L) %/% (a+100L)) %% 5L
    r
  }
  r1 <- g((size*10),300L,500L,700L)
  r2 <- g(size,u,v,w)
  list(r1, sum(r2))
}