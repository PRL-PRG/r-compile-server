execute <- function(size = 500000L) {
  u <- numeric(1000)
  for (i in 1:size) {
    v <- u
    v <- 0
    u[10] <- 1
  }
  u[10]
}