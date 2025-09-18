execute <- function(size=500000L) {
  v <- seq(1,2,length=10*10*10)

  f <- function (r,d) { 
    m <- c(10,10,10)
    for (i in 1:r){ 
      a <- array(d,m)
      a[1,1,1] <- 0
    }

    a
  }

  a1<-f(size,1.1)
  a2<-f(size,c(1.1,2.2))
  a3<-f(size,v)

  res <- lapply(list(a1, a2, a3), function(x) list(
    dim1_slice = x[1, 1, 1:10],
    dim2_slice = x[1, 1:10, 1],
    dim3_slice = x[1:10, 1, 1]
  ))
  return(res)
}