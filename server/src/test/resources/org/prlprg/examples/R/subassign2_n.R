check({
  a <- array(1:8, dim=c(2,2,2))
  a[[1,2,1]] <- 42L
  a
}, direct.fastSubassign)

check({
  a <- structure(array(1:8, dim=c(2,2,2)), class='a')
  a[[1,2,1]] <- 42
  a
}, direct.slowSubassign)

