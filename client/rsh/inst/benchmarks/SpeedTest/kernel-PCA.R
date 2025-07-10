execute <- function(size = 100L) {
  kpca <- function(Xtrn, Xtst, rho, m) {
    n <- nrow(Xtrn)
    
    K <- matrix(NA, n, n)
    for (i in 1:n) {
      for (j in i:n) {
        K[i,j] <- K[j,i] <- exp(-rho^2*sum((Xtrn[i,]-Xtrn[j,])^2))
      }
    }
    
    M <- diag(n) - matrix(1/n, n, n)
    e <- eigen(M %*% K %*% M, symmetric=TRUE)
    
    prj <- matrix(NA, nrow(Xtst), m)
    Ks <- colSums(K)/n
    for (t in 1:nrow(Xtst)) {
      k <- rep(NA, n)
      for (i in 1:n) {
        k[i] <- exp(-rho^2*sum((Xtrn[i,]-Xtst[t,])^2))
      }
      for (w in 1:m) {
        prj[t,w] <- (k - Ks) %*% M %*% e$vectors[,w] / sqrt(e$values[w])
      }
    }
    prj
  }

  set.seed(1)
  n <- size
  X <- matrix(NA, n, 2)
  
  for (i in 1:(n)) {
    theta <- runif(1, 0, 2*pi)
    r <- runif(1, 1, 1.75)
    X[i,1] <- r*cos(theta)
    X[i,2] <- 1.1*r*sin(theta)
    
    class <- as.numeric(runif(1) < 0.5)
    if (class) {
      X[i,1] <- 0.8*X[i,1] + 0.1
      X[i,2] <- 0.7*X[i,2] - 0.2
    }
  }

  for (i in 1:25) {
    prj <- kpca(X, X, 1, 3)
  }
  
  return(prj[1:min(5, nrow(prj)), ])
}