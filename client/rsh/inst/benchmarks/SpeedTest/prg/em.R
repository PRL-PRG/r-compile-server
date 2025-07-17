execute <- function(iter = 10L) {
  EM.censored.poisson <- function(n, m, c, lambda0 = (n * m + c) / (n + c), iterations) {
    log.likelihood <- function(lambda) 
    {n * m * log(lambda) - (n + c) * lambda + c * log(1 + lambda)}
    
    lambda <- lambda0
    old.ll <- log.likelihood(lambda)
    
    for (i in 1:iter) {
      p1 <- lambda / (1+lambda)
      lambda <- (n*m + c*p1) / (n+c)
      new.ll <- log.likelihood(lambda)
      
      if (new.ll - old.ll < -1e-6) {stop("Log likelihood decreased!")}
      old.ll <- new.ll
    }
    lambda
  }

  for (i in 1:3) r1 <- EM.censored.poisson(5,6.1,20,(iter*1000))
  for (i in 1:30000) r2 <- EM.censored.poisson(5,6.1,20,iter)
  
  list(r1,r2)
}