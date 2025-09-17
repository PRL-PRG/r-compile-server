execute <- function(size=10000L) {
  u <- rep(1.1,80)
  v <- rep(2.2,800)
  w <- rep(3.3,80)

  f <- function (n,xl) {for (i in 1:n) x <- unlist(xl); x}

  x1<-f((size*100),list(u,w))
  x2<-f((size*30),list(u,v,w))
  x3<-f((size*3),list(a=u,b=w))
  
  names(u) <- paste("x",1:length(u),sep=":")
  names(w) <- paste("y",1:length(u),sep=":")
  x4<-f((size*10),list(u,w))
  x5<-f((size*10),list(a=u,b=w))

  list(x1, sum(x2), x3, x4, x5)
}