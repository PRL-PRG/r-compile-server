execute <- function(size = 1000L) {
  sieve <- function(n) {
    composite <- logical(n)
    composite[1] <- TRUE
    
    for (i in 2:floor(n/2)) {
      if (!composite[i]) {
        composite[seq.int(from=2*i, to=n, by=i)] <- TRUE
      }
    }
    (1:n)[!composite]
  }

  for (i in 1:10000) ra <- sieve(size)
  for (i in 1:10) rb <- sieve(size*1000)
  list(ra, rb[c(1:10,(length(rb)-9):length(rb))])
}