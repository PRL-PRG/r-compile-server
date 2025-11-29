check({
  x <- c(1, 2, 3)
  x[2]
}, returns(2), direct.fastSubset)

check({
  x <- c(1, 2, 3)
  x[2L]
}, returns(2), direct.fastSubset)

check({
  x <- c(1L, 2L, 3L)
  x[2L]
}, returns(2L), direct.fastSubset)

check({
  x <- list(1, 2, 3)
  x[3L]
}, direct.fastSubset)

check({
  x <- list('a', 'b')
  x[2]
}, direct.fastSubset)

check({
  x <- data.frame(a=1, b=2, row.names=NULL)
  x['a']
}, direct.dispatchedSubset)

check({
  x <- list(a=1, b=2)
  x['a']
}, direct.slowSubset)

# FIXME: allow to test errors
# check({
#   x <- c(1, 2, 3)
#   x[42]
# }, direct.slowSubset)

check({
  x <- list(a=1, b=2)
  x['c']
}, direct.slowSubset)

