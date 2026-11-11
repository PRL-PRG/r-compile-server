# A subscript whose value is a symbol is an error ("invalid subscript type 'symbol'"); the special
# must not evaluate the symbol to `k`'s value. The second subscript is in the call's `...`, and
# the tag makes the last call dynamic.
k <- 2
f <- function(j) {
  m <- matrix(0, 2, 2)
  a <- tryCatch({ m[1, j] <- 9; m }, error = function(e) conditionMessage(e))
  b <- tryCatch(m[1, j], error = function(e) conditionMessage(e))
  c <- tryCatch({ m[i = 1, j] <- 9; m }, error = function(e) conditionMessage(e))
  list(a, b, c)
}
r <- NULL
for (n in 1:12) r <- f(quote(k))
r
