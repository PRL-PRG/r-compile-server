execute <- function(size=1000000L) {
  f <- function (n,u,v)
    {
      for (i in 1:n) r <- c(u+1,v-1)
      r
    }

  r1 <- f((size*10),10,27)
  r2<-f(size,numeric(1000)+0.1,123.4)
  
  list(r1,length(r2),sum(r2))
}