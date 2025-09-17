execute <- function(size=1000000L){
  vl <- list (dd=1.4, cc=1.3, bb=1.2, aa=1.1)

  pl <- pairlist (dd=1.4, cc=1.3, bb=1.2, aa=1.1)

  ev <- new.env(parent=emptyenv())
  ev$aa <- 1.1
  ev$bb <- 1.2
  ev$cc <- 1.3
  ev$dd <- 1.4

  for (i in 1:size) s1 <- vl$"aa"+vl$"bb"+vl$"cc"+vl$"dd"
  for (i in 1:size) s2 <- pl$"aa"+pl$"bb"+pl$"cc"+pl$"dd"
  for (i in 1:size) s3 <- ev$"aa"+ev$"bb"+ev$"cc"+ev$"dd"

  list(s1,s2,s3)
}