check({
  x <- matrix(1L:6L, nrow=2)
  x[1,2] <- 42L
  x
}, direct.fastSubassign)

check({
  x <- matrix(1L:6L, nrow=2)
  x[1,2] <- 42
  x
}, direct.slowSubassign)

check({
  x <- data.frame(a=c(1,2), b=c(3,4))
  x[1,2] <- 42
  x
}, direct.dispatchedSubassign)

check({
  x <- matrix(1L:6L, nrow=2)
  x[[1,2]] <- 42L
  x
}, direct.fastSubassign)

check({
  x <- data.frame(a=c(1,2), b=c(3,4))
  x[[1,2]] <- 42
  x
})

