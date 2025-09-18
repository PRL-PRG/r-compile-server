execute <- function(size = 16L) {
  isPrime <- function(n) {
    if (n < 2) FALSE
    else if (n == 2) TRUE
    else if (n %% 2 == 0) FALSE
    else{ 
      upperLimit <- sqrt(n);
      i <- 3
      while (i <= upperLimit) { 
        if (n %% i == 0) return(FALSE)
        i <- i + 2
      }
      TRUE
    }
  }

  doit <- function (LIMIT) {
    limit <- 2^LIMIT
    noPrimes <- 0
    for (n in 0:limit) {if (isPrime(n)) noPrimes <- noPrimes + 1}
    paste("pi(",limit,") = ",noPrimes,"\n",sep="")
  }

  r1 <- doit(size)
  r2 <- doit((size+2))

  list(r1, r2)
}