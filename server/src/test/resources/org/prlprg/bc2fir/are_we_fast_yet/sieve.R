sieve <- function(n) {
  primes <- rep(TRUE, n)
  primes[1] <- FALSE
  
  for (i in 2:floor(sqrt(n))) {
    if (primes[i]) {
      j <- i * i
      while (j <= n) {
        primes[j] <- FALSE
        j <- j + i
      }
    }
  }
  
  return(sum(primes))
}

main <- function() {
  result <- sieve(10000)
  return(result)
}