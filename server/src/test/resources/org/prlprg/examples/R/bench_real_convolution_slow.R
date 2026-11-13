# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/RealThing/convolution_slow.r
# License: none stated, see server/doc/benchmark-licenses.md

convolveSlow <- function(x,y) {
  nx <- length(x)
  ny <- length(y)
  z <- numeric(nx + ny - 1)
  for(i in seq(length = nx)) {
    xi <- x[[i]]
    for(j in seq(length = ny)) {
      ij <- i + j - 1
      z[[ij]] <- z[[ij]] + xi * y[[j]]
    }
  }
  z
}

execute <- function(n) {
  a <- 1:n
  b <- 1:n
  checksum <- 0
  for (i in 1:10) {
    checksum <- checksum + convolveSlow(a,b)[[n]]
  }
  # cat("Convolution ", n, " " , checksum, ": ")
  checksum
}

#? benchmark: execute(200L)

# warmup
for (i in 1:12) {
  execute(2L)
}
