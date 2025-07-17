execute <- function(size = 1000L) {
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

  set.seed(2)
  p_dim <- max(100, round(size/10))
  P <- matrix(runif(p_dim*size,-2,+2), p_dim, size)
  M <- matrix(rnorm(size*20*size), size, 20*size)
  proj_M <- P %*% M
  V <- matrix(rnorm(size*5*p_dim), size, 5*p_dim)
  
  res <- near(M,V,P,425^2,proj_M)
  unlist(res)
}