convolve <- function(a, b) # from the extending R manual
{
    a <- as.double(a)
    b <- as.double(b)
    na <- length(a)
    nb <- length(b)
    ab <- double(na + nb)
    for(i in 1 : na)
        for(j in 1 : nb)
            ab[i + j] <- ab[i + j] + a[i] * b[j]
    ab
}

execute <- function(n) {
  a <- 1:n
  b <- 1:n
  checksum <- 0
  for (i in 1:10) {
    checksum <- checksum + convolve(a,b)[[n]]
  }
  cat("Convolution ", n, " " , checksum, ": ")
  checksum
}
