execute <- function(n=15000000) {
  x <- vector(length=n)
  for (i in 1:n) {
    x[[i]] <- i
  }
}
