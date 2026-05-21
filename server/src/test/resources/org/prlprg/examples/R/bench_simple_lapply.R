execute <- function(n) {
  x <- 1:n
  f <- function(x) x + 1.5
  lapply(x, f)
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
