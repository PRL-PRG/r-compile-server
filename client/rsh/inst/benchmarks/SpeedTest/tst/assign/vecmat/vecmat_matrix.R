execute <- function(size = 1000000L) {
  f <- function(n, j, k, v){
    mat <- matrix ((1:100)/100, 10, 10)
    for (i in 1:n) mat[j,k] <- v
    sum(mat)
  }
  r1 <- f(size,7,2,1.1)
  r2 <- f(size,5:7,2,1.1)
  list(r1,r2)
}