check({
  x <- matrix(1L:6L, nrow=2)
  x[1,2]
}, returns(3L), direct.fastSubset)

check({
  x <- data.frame(a=c(1,2), b=c(3,4))
  x[1,2]
}, returns(3))

