#? gcTorture
# `f` never forces `b`, so its promise becomes a deopt stub, which compiles to one promise for its
# site (in `g`'s version with a regular environment, because the expression isn't a symbol). `k`'s
# promise isn't a stub, because `h` reads its expression with `substitute`.
f <- function(a, b) a
h <- function(a, b) deparse(substitute(b))
g <- function(n) {
  s <- 0
  for (i in 1:n) s <- s + f(i, stop("forced"))
  s
}
k <- function(i) h(i, stop(i))

# warmup
for (i in 1:12) {
  g(10)
  k(i)
}

c(g(100), k(1))
