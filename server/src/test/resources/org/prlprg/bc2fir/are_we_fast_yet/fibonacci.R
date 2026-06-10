fibonacci <- function(n) {
  if (n <= 1) {
    return(n)
  }
  return(fibonacci(n - 1) + fibonacci(n - 2))
}

main <- function() {
  result <- fibonacci(25)
  return(result)
}