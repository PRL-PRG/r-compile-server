g <- function(e) e
f <- function() {
  x <- 1
  # `environment()` reflects on `f`'s frame when `g` forces its argument
  g(environment())
}
# Forcing `e` exits the promise's code by an error
h <- function(e) tryCatch(e, error = function(c) 0)
execute <- function(n) {
  s <- 0
  for (i in 1:n) {
    s <- s + length(ls(f())) + h(stop("boom"))
  }
  s
}

#? benchmark: execute(100)

# warmup
for (i in 1:12) {
  execute(2)
}
