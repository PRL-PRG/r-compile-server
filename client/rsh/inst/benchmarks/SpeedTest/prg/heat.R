execute <- function(size = 10L) {
  initial_temperatures <- function(nr, nc) {
    M <- matrix(0, nrow = nr, ncol = nc)
    for (i in 1:nr) M[i,nc] <- 1
    for (j in 1:nc) M[nr,j] <- 1
    M
  }

  heat_flow <- function(M) {
    R <- M
    for (i in 2:(ncol(M)-1)) {
      for (j in 2:9) {
        R[i,j] <- (M[i,j] + M[i-1,j] + M[i,j-1] + M[i+1,j] + M[i,j+1]) / 5
      }
    }
    R
  }

  doit <- function(nr,nc,k){
    M <- initial_temperatures(nr, nc)
    for (i in 1:k) M <- heat_flow(M)
    M
  }
  
  r1 <- doit(size,size,(size*3000))
  res1 <- round(r1,2)
  r2 <- doit((size*10),(size*10),(size*30))
  res2 <- round(r2[91:100,91:100],2)
  list(res1, res2)
}