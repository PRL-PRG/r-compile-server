execute <- function(iter = 30000L) {
  initial_temperatures <- function() {
    M <- matrix(0, nrow = 10, ncol = 10)
    M[, 10] <- 1
    M[10, ] <- 1
    M
  }

  heat_flow <- function(M) {
    R <- M
    for (i in 2:9) {
      for (j in 2:9) {
        R[i,j] <- (M[i,j] + M[i-1,j] + M[i,j-1] + M[i+1,j] + M[i,j+1]) / 5
      }
    }
    R
  }

  M <- initial_temperatures()
  for (i in 1:iter) M <- heat_flow(M)
  
  return(round(M, 2))
}