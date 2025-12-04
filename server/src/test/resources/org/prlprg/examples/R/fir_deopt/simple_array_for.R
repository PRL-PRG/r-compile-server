#? [bc2fir]deopt
main <- function(n) {
  m <- n + 1L
  x <- rep(0, m)
  for (i in 1L:m) {
    x[i] <- n * i
  }
  x
}

main(1L)