# Two factories make closures with the same text but different environments; the call site
# guards `h` with `?-` on the shared inner function.
mk1 <- function(a) function() a
mk2 <- function(a) {
  a <- a * 100
  function() a
}
r <- 0
for (i in 1:20) {
  h <- if (i > 14) mk2(i) else mk1(i)
  r <- r + h()
}
print(r)
