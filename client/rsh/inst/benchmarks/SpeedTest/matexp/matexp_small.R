execute <- function(power = 10L) {
  matexp <- function(A, last_pow) {
    S <- diag(nrow(A))
    if (last_pow > 0) {
      T <- A
      if (last_pow > 1) {
        for (pow in 2:last_pow) {
          S <- S + T
          T <- (A %*% T) * (1/pow)
        }
      }
      S <- S + T
    }
    S
  }

  A <- matrix(seq(0,1,length=7^2), 7, 7)
  s <- 0
  for (i in 1:50000) {
    R <- matexp(A,power)
    if (R[length(R)] < 0) s <- 1
  }
  return(list(check=s, result=R))
}