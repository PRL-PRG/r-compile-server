fibonacci <- function(n) {
  if (n <= 1) {
    return(n)
  }
  return(fibonacci(n - 1) + fibonacci(n - 2))
}

#? benchmark: fibonacci(34)

# warmup
for (i in 1:15) {
  fibonacci(7)
}
