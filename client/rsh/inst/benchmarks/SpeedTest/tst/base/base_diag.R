execute <- function(size=10000L) {
  m <- matrix (seq(0,1,length=1200), 30, 30)
  m <- m+t(m)
  M <- matrix (seq(0,1,length=120000), 300, 300)
  M <- M+t(M)

  f <- function (d,n) { 
    for (i in 1:n){ 
      M <- diag(d)
      M[1,2] <- 7
      diag(M) <- diag(M) + 1
      M[1,1] <- 9
      v <- sum(diag(M))
    }

    v
  }

  a<-f(30,size)
  b<-f(rep(1+2i,30),size)

  list(a, b)
}