sieve <- function(n) {
  primes <- rep(TRUE, n)
  primes[1] <- FALSE
  
  for (i in 2:floor(sqrt(n))) {
    if (primes[i]) {
      for (j in seq(i * i, n, by = i)) {
        primes[j] <- FALSE
      }
    }
  }
  
  return(sum(primes))
}

main <- function() {
  result <- sieve(10000)
  return(result)
}