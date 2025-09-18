execute <- function(size=20L) {
  m <- matrix (seq(0,1,length=1200), 30, 30)
  m <- m+t(m)
  M <- matrix (seq(0,1,length=120000), 300, 300)
  M <- M+t(M)
	
  f <- function (m,n,k) {for (i in seq_len(n)) v <- svd(m,0,0); v$d}

  a<-f(m,(size*500))
  b<-f(M,size)
  
  list(a,b)
}