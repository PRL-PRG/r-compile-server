execute <- function(size=10000L){
  u <- seq(1,2,length=2000)
  v <- seq(2,3,length=2000)

  f <- function (n,a,b){ 
    for (i in 1:n) r <- exp(sin(1-abs(a*b)+5*b) / (1+cos(a+b+1/b+1)) - 1)
    r
  }
  r1 <- f((size*100),1.1,2.2)
  r2 <- f(size,u,v)
  list(r1, sum(r2))
}