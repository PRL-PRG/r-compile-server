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
  s1 <- s2 <- 0
  for (i in 1:50000) {
    R1 <- matexp(A,power)
    if (R1[length(R1)] < 0) s <- 1
  }
  for (i in 1:50000) {
    R2 <- matexp(A,(power*2))
    if (R2[length(R2)] < 0) s <- 1
  }
  list(s1,s2,R1,R2)
}