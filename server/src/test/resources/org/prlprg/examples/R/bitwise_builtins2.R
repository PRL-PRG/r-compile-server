popcount <- function(x) {
  count <- 0L
  while (x != 0L) {
    count <- count + bitwAnd(x, 1L)
    x <- bitwShiftR(x, 1L)
  }
  count
}

popcount(255L)
