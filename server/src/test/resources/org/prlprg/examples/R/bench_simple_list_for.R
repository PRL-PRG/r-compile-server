execute <- function(n) {
  x <- list()
  for (i in 1:n) {
    x[[i]] <- i
  }
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
