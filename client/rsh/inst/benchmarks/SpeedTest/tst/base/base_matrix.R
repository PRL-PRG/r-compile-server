execute <- function(size=5000L) {
  v <- seq(1,2,length=300*210)
  u <- seq(3,4,length=300)

  f <- function (d,n,m,r,byrow=FALSE) { 
    for (i in 1:r)
    { a <- matrix(d,n,m,byrow=byrow)
        a[1,1] <- 0
    }

    a
  }
  
  a1<-f(1.1,300,210,size)
  a2<-f(c(1.1,2.1,2.3),300,210,size)
  a3<-f(v,300,210,size)
  a4<-f(1.1,210,300,size,byrow=TRUE)
  a5<-f(u,210,300,size,byrow=TRUE)
  a6<-f(c(1.1,2.1,2.3),210,300,size,byrow=TRUE)
  a7<-f(v,210,300,size,byrow=TRUE)

  res <- list(
  row_slices = lapply(list(a1, a2, a3, a4, a5, a6, a7), function(x) x[1, 1:15]),
  col_slices = lapply(list(a1, a2, a3, a4, a5, a6, a7), function(x) x[1:15, 1])
  )
  return(res)
}