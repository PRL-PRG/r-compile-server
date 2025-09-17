execute <- function(size=50000L) {
  a <- rep(c(T,F),length=100)
  u <- seq(1,2,length=100)
  v <- seq(4,5,length=100)

  f <- function (n,a,u,v) { 
    for (i in seq_len(n)) r <- ifelse(a,u,v); r 
  }

	r1<-f((size*4),T,10,20)
	r2<-f(size,a,u,v)
	r3<-f(size,a,u,c(10,20,30,40,50))

	u <- seq(1,2,length=20)
	v <- seq(4,5,length=40)
	attr(a,"fred") <- "bert"
	r4<-f(size,a,u,v)
	list(r1, r2, r3, r4)
}