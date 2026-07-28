execute <- function(n) {
  x <- 0
  f <- function() {
    while (x < n) {
      x <<- x + 1
    }
  }
  f()
}

#? benchmark: execute(10000)

# warmup
for (i in 1:12) {
  execute(10)
}
