execute <- function(size=600000L) {
  f <- function (n,s1,s2,s3)
    {
      for (i in 1:n) v <- c(rep(s1,10),s2,s3)
      v
    }

  s1 <- rep("1.2",100)
  s2 <- rep("3.4",1000)
  s3 <- rep("5.6",1001)
  
  r <- f(size,s1,s2,s3)
  c(length(r),sum(as.numeric(r)))
}