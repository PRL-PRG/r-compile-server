f <- function() tryCatch(log("a"), error = conditionCall)
g <- function(x) tryCatch(x + 1, error = conditionCall)
h <- function(...) tryCatch(sum(...), error = conditionCall)
mc <- function(a, b) match.call()
sc <- function(a, b) sys.call()
w <- function(y) list(mc(y + 1, b = 2), sc(y + 1, b = 2))
print(f())
print(g("a"))
print(h("a"))
print(w(3))
print.foo <- function(x, ...) print(sys.call())
pf <- function(v) print(v)
pf(structure(1, class = "foo"))
Math.foo <- function(x, ...) {
  print(sys.call())
  1
}
lg <- function(v) log(v)
print(lg(structure(1, class = "foo")))
