execute <- function(n) {
  x <- 1:n
  f <- function(x, y) x + 1.5 * y
  a <- n / 2
  lapply(x, f, y=a)
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
