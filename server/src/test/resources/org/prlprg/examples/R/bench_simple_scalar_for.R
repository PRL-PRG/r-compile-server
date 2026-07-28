execute <- function(n) {
  x <- 0
  for (i in 1:n) {
    x <- i
  }
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
