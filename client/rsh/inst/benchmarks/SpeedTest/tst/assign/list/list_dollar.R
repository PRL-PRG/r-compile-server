execute <- function(size = 1000000L) {
  lis <- list(ab=3, cd=4, ef=5, gh=6)
  for (i in 1:size) lis$ef <- 10
  unlist(lis)
}