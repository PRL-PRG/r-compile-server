execute <- function(size = 1000L) {
  m <- matrix(seq(0,1,length=1200), 30, 40)
  M <- matrix(seq(0,1,length=120000), 300, 400)
  
  f <- function (m,n) {
    for (i in seq_len(n)) { 
        v <- numeric(nrow(m)); 
        for (j in seq_len(nrow(m))) v[j] <- sum(m[j,])
    }
    v
  }
  
  v1 <- f(m, (size*10))
  v2 <- f(M, size)
  list(v1, v2[c(1:10,291:300)])
}