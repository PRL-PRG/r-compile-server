execute <- function(size = 1000L) {
  m <- matrix(seq(0,1,length=1200), 30, 40)
  M <- matrix(seq(0,1,length=120000), 300, 400)
  
  f <- function (d,m,n) { 
    for (i in seq_len(n)) v <- apply(m,d,sum); v 
  }
  
  v1 <- f(1, m, (size*10))
  v2 <- f(2, m, (size*10))
  v3 <- f(1, M, size)
  v4 <- f(2, M, size)
  list(v1, v2, v3[c(1:10,291:300)], v4[c(1:10,391:400)])
}