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

  if (size < 1000000) {
    res <- NULL
    for (i in 1:10000) res <- sieve(size)
    return(res)
  } else if (size >= 1000000) {
    res <- NULL
    for (i in 1:10) res <- sieve(size)
    return(res[c(1:10, (length(res)-9):length(res))])
  }
}