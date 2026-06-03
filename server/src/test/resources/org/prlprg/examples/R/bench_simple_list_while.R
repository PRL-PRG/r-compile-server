execute <- function(n) {
  x <- list()
  i <- 1
  while (i < n) {
    x[[i]] <- 5
    i <- i + 1
  }
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
