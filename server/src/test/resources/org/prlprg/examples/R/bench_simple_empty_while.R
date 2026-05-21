execute <- function(n) {
  x <- 1
  while (x < n) {
    x <- x + 1
  }
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
