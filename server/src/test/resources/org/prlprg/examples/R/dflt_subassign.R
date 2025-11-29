check({
  x <- c(1,2,3)
  x[] <- 42
  x
})

check({
  y <- c(1,2,3)
  y[[x=1]] <- 42
  y
})

check({
  x <- data.frame(a=1, b=2, row.names=NULL)
  x[] <- 42
  x
}, direct.dispatchedSubassign)

