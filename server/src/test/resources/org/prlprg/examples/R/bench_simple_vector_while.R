execute <- function(n) {
  x <- vector(length=n)
  i <- 1
  while (i < n) {
    x[[i]] <- i
    i <- i + 1
  }
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
