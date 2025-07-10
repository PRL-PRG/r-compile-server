execute <- function(size = 100L) {
  initial_temperatures <- function(n) {
    M <- matrix(0, nrow = n, ncol = n)
    M[, n] <- 1
    M[n, ] <- 1
    M
  }

  heat_flow <- function(M) {
    R <- M
    nr <- nrow(M)
    nc <- ncol(M)
    for (i in 2:(nr-1)) {
      for (j in 2:(nc-1)) {
        R[i,j] <- (M[i,j] + M[i-1,j] + M[i,j-1] + M[i+1,j] + M[i,j+1]) / 5
      }
    }
    R
  }

  M <- initial_temperatures(size)
  for (i in 1:300) M <- heat_flow(M)
  
  n <- size
  return(round(M[(n-9):n, (n-9):n], 2))
}