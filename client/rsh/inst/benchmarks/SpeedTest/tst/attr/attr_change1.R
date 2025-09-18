execute <- function(size = 1000L) {
  L <- size
  R <- 500
  a <- 1:L
  attr(a, "fred") <- rep("f", L)
  
  for (j in 1:R){
    tmp <- attr(a, "fred")
    for (i in 1:L) tmp[i] <- "F"
    attr(a, "fred") <- tmp
  }
  return(a)
}