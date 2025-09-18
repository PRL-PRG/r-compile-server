execute <- function(size = 1000000L) {
  f <- function(n, j, v){
    vec <- (1:100)/100
    for (i in 1:n) vec[j] <- v
    sum(vec)
  }
  r1 <- f(size, 17, 1.1)
  r2 <- f(size, 15:17, 1.1)
  list(r1,r2)
}