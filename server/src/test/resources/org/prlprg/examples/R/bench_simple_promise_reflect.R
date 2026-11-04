g <- function(e) e
f <- function() {
  x <- 1
  # `environment()` reflects on `f`'s frame when `g` forces its argument
  g(environment())
}
execute <- function(n) {
  s <- 0
  for (i in 1:n) {
    s <- s + length(ls(f()))
  }
  s
}

#? benchmark: execute(100)

# warmup
for (i in 1:12) {
  execute(2)
}
