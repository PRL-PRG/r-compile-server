execute <- function(size = 200L) {
  cholesky <- function(A) {
    if (!is.matrix(A) || nrow(A) != ncol(A)) {
      stop("The argument for cholesky must be a square matrix")
    }

    p <- nrow(A)
    U <- matrix(0, p, p)

    for (i in 1:p) {
      if (i == 1) {U[i,i] <- sqrt(A[i,i])} 
      else {U[i,i] <- sqrt(A[i,i] - sum(U[1:(i-1),i]^2))}

      if (i<p) {
        for (j in (i+1):p) {
          if (i == 1) {U[i, j] <- A[i, j] / U[i, i]} 
          else {U[i, j] <- (A[i, j] - sum(U[1:(i-1), i] * U[1:(i-1), j])) / U[i, i]}
        }
      }
    }
    U
  }

  set.seed(1)
  A <- matrix(rnorm(size^2), size, size)
  M <- t(A) %*% A

  U <- vector("list", 10)
  for (i in 1:10) U[[i]] <- cholesky(M)
    
  V <- vector("list", 1000)
  for (i in 1:1000) V[[i]] <- chol(M)
  
  res <- sum((U[[1]]-V[[1]])^2)
  return (res)
}