# Operations that the test interpreter runs in GNU-R (`GnuRFallback`): vector subscripts and
# arithmetic, base closures with data arguments (`cbind` names its columns after the argument
# symbols), a special builtin with code arguments, a function of an attached package, the RNG.
f <- function(x, idx) {
  y <- x[idx] * 2
  y[y > 6] <- 0
  m <- cbind(idx, y)
  words <- strsplit("ab cde f", " ")[[1]]
  s <- paste(nchar(words), collapse = "-")
  n <- length(idx)
  list(y, dim(m), colnames(m), s, rep(1:2, n * 2), median(x), sum(runif(n)) < n)
}

set.seed(42)
r <- NULL
for (i in 1:5) r <- f(c(1, 2, 3, 4), 2:4)
list(r, sample(10, 3))
