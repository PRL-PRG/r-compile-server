execute <- function(size = 16L) {
  isPrime <- function(n) {
    if (n < 2) FALSE
    else if (n == 2) TRUE
    else if (n %% 2 == 0) FALSE
    else {
      upperLimit <- sqrt(n)
      i <- 3
      while (i <= upperLimit) {
        if (n %% i == 0) return(FALSE)
        i <- i + 2
      }
      TRUE
    }
  }

  limit <- 2^size
  noPrimes <- 0
  for (n in 0:limit) {
    if (isPrime(n)) noPrimes <- noPrimes + 1
  }
  return(noPrimes)
}