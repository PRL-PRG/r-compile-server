# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/RealThing/convolution.r
# License: none stated, see server/doc/benchmark-licenses.md

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
  # cat("Convolution ", n, " " , checksum, ": ")
  checksum
}

#? benchmark: execute(250L)

# warmup
for (i in 1:12) {
  execute(2L)
}
