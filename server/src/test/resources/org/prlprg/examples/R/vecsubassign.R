check({
  x <- c(1,2,3)
  x[1] <- 2
  x
}, direct.fastSubassign)

check({
  x <- data.frame(a=1, b=2, row.names=NULL)
  x['a'] <- 42
  x
}, direct.dispatchedSubassign)

check({
  x <- list(1,2,3)
  x[[1]] <- x
  x
}, direct.fastSubassign)

