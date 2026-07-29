execute <- function(n) {
  x <- 0
  i <- 0
  while (i < n) {
    x <- i
    i <- i + 1
  }
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
