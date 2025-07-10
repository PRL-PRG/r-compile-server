execute <- function(size = 50000L) {
  HMC <- function(U, grad_U, epsilon, L, current_q) {
    q = current_q
    p = rnorm(length(q),0,1)
    current_p = p
    p = p - epsilon * grad_U(q) / 2
    
    for (i in 1:L) { 
      q = q + epsilon * p
      if (i!=L) p = p - epsilon * grad_U(q)
    }
    
    p = p - epsilon * grad_U(q) / 2
    p = -p
    
    current_U = U(current_q)
    current_K = sum(current_p^2) / 2
    proposed_U = U(q)
    proposed_K = sum(p^2) / 2
    
    if (runif(1) < exp(current_U-proposed_U+current_K-proposed_K)) q else current_q
  }

  set.seed(1)
  
  if (size <= 50000) {
    epsilon = 0.8
    L = 10
    n = size
  } else {
    epsilon = 1.1
    L = 1
    n = size
  }
  
  U = function(q) q^2/2 + sin(q)
  grad_U = function(q) q + cos(q)
  
  q = numeric(n+1)
  for (i in 1:n) q[i+1] = HMC(U, grad_U, epsilon, L, q[i])
  
  list(median=median(q), mean=mean(q), sd=sd(q))
}