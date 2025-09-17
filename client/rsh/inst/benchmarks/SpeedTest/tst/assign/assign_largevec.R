execute <- function(size = 30000L) {
  f <- function(n, j, v){
    vec <- (1:10000)/10000
    for (i in 1:n) vec[j] <- v
    sum(vec)
  }
  r1 <- f(size,201:8000,1.1)
  r2 <- f(size,201:8000,(1:100)*1.1)
  r3 <- f(size,201:8000,(201:8000)*1.1)
  list(r1,r2,r3)
}