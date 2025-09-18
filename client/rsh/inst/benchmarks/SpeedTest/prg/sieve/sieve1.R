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

  for (i in 1:2000) ra <- sieve(size)
  for (i in 1:2) rb <- sieve(size*1000)
  list(ra, rb[c(1:10,(length(rb)-9):length(rb))])
}