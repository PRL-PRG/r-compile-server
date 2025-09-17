execute <- function(size = 1000L) {
  L <- size
  R <- 500
  a <- 1:L
  names(a) <- rep("n", L)
  
  for (j in 1:R) {
    tmp <- names(a)
    for (i in 1:L) tmp[i] <- "N"
    names(a) <- tmp
  }
  return(a)
}