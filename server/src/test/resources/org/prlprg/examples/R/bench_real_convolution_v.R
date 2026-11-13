# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/RealThing/convolution_v.r
# License: none stated, see server/doc/benchmark-licenses.md

convolveV <- function(x, y) {
  nx <- length(x)
  ny <- length(y)
  xy <- rbind(outer(x,y), matrix(0, nx, ny))
  nxy <- nx + ny - 1
  length(xy) <- nxy * ny
  dim(xy) <- c(nxy, ny)
  rowSums(xy)
}

execute <- function(n) {
  a <- 1:n
  b <- 1:n
  checksum <- 0
  for (i in 1:10) {
    checksum <- checksum + convolveV(a,b)[[n]]
  }
  # cat("Convolution ", n, " " , checksum, ": ")
  checksum
}

#? benchmark: execute(700L)

# warmup
for (i in 1:12) {
  execute(2L)
}
