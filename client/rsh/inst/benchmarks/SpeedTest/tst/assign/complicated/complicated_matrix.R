execute <- function(size = 60000L) {
  lis <- list(a=1, b=matrix(4,2,2), c=10)
  for (i in 1:size) diag(lis$b)[2] <- 5
  unlist(lis)
}
