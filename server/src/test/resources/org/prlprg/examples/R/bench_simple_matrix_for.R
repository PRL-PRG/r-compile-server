execute <- function(n) {
  x <- matrix(nrow=n, ncol=n)
  for (i in 1:n) {
    for (j in 1:n) {
      x[[i, j]] <- 5
    }
  }
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
