execute <- function(size=10000L) {
  u <- rep(1.1,80)
  j <- 1:80
  v <- rep(2.2,800)
  w <- rep(3.3,80)

  f <- function (n,...) {for (i in 1:n) x <- c(...); x}

  x1<-f((size*500),2.1,3.2)
  x2<-f((size*500),"ab","xy","pqrs")
  x3<-f((size*500),list(1.1,2.2),list(3.3),list(4.4))
  x4<-f((size*200),u,w)
  x5<-f((size*50),u,j,v,w)
  x6<-f((size*3),a=u,b=w)

  names(u) <- paste("x",1:length(u),sep=":")
  names(w) <- paste("y",1:length(u),sep=":")
  x7<-f((size*10),u,w)
  x8<-f((size*10),a=u,b=w)

  list(x1,x2,x3,x4,x5,x6,x7,x8)
}