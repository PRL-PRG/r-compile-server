fibonacci <- function(n) {
  if (n <= 1) {
    return(n)
  }
  return(fibonacci(n - 1) + fibonacci(n - 2))
}

#? benchmark: fibonacci(30)

# warmup
for (i in 1:12) {
  fibonacci(3)
}
