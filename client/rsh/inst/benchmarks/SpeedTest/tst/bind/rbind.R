execute <- function(size=10000L) {
  u <- rep(1.1,100)
  j <- 1:100
  v <- rep(0.7,10)
  M <- matrix(2.2,50,100)
  N <- matrix(3.3,40,100)
  W <- matrix(7.1,2,100)

  Mnamed <- M
  rownames(Mnamed) <- paste("R",1:nrow(M),sep="")
  colnames(Mnamed) <- paste("C",1:ncol(M),sep="")

  Nnamed <- N
  rownames(Nnamed) <- paste("r",1:nrow(N),sep="")
  colnames(Nnamed) <- paste("c",1:ncol(N),sep="")

  f <- function (n,...) {for (i in 1:n) x <- rbind(...); x}

  x1<-f((size*3),M,N)
  x2<-f((size*3),Mnamed,Nnamed)
  x3<-f((size*3),M,u,j,N)
  x4<-f((size*3),M,u)
  x5<-f((size*3),M,v)
  x6<-f((size*20),u,u,u,u,u)
  x7<-f((size*20),W,W,W)
  x8<-f((size*10),100,M,200)

  res <- list(
    row_sums = lapply(list(x1, x2, x3, x4, x5), function(x) rowSums(x)),
    col_sums = lapply(list(x1, x2, x3, x4, x5), function(x) colSums(x)),
    dim_sums = lapply(list(x6,x7), function(x) c(dim(x), sum(x))),
    x8 = list(x8[,1], x8[,100])
  )
  return(res)
}