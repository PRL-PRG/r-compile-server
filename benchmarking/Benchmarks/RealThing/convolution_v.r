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
  cat("Convolution ", n, " " , checksum, ": ")
  checksum
}
