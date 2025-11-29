check({
  M <- matrix(c(1.2,1.3,1.4),3,3,byrow=TRUE)
  d <- as.data.frame(M)
  h <- function (n,d){
      for (i in 1:n) {
          d[3,2] <- 5.5
      }
      d
  }
  h(100, d)
})

