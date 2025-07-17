execute <- function(size = 1000L) {
  sieve <- function(n) {
    composite <- logical(n)
    composite[1] <- TRUE
    
    for (i in 2:n) {
      if (!composite[i]) {
        j <- 2*i
        while (j <= n) {
          composite[j] <- TRUE
          j <- j + i
        }
      }
    }
    (1:n)[!composite]
  }

  if (size < 1000000) {
    res <- NULL
    for (i in 1:2000) res <- sieve(size)
    return(res)
  } else if (size >= 1000000) {
    res <- NULL
    for (i in 1:2) res <- sieve(size)
    return(res[c(1:10, (length(res)-9):length(res))])
  }
}