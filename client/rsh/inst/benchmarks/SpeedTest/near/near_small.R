execute <- function(size = 20L) {
  sq_dist <- function(M, v) colSums((M-v)^2)

  near <- function(M, V, P, t, proj_M=P%*%M) {
    count <- numeric(ncol(V))
    dist <- numeric(ncol(V))
    
    for (j in 1:ncol(V)) {
      sqd <- sq_dist(proj_M, as.vector(P %*% V[,j]))
      c <- 0
      d <- Inf
      
      for (i in 1:length(sqd)) {
        if (sqd[i] < t) {
          c <- c + 1
          d2 <- sum((M[,i]-V[,j])^2)
          if (d2 < d) d <- d2
        }
      }
      
      count[j] <- c
      dist[j] <- sqrt(d)
    }
    
    list(count=count, dist=dist)
  }

  set.seed(1)
  p_dim <- max(5, round(size/4))
  P <- matrix(runif(p_dim*size,-2,+2), p_dim, size)
  M <- matrix(rnorm(size*10*size), size, 10*size)
  proj_M <- P %*% M
  V <- matrix(rnorm(size*size), size, size)
  
  res <- NULL
  for (i in 1:500) res <- unlist(near(M,V,P,8^2,proj_M))
  res
}