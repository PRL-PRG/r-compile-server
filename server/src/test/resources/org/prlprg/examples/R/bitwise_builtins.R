x <- 12L
y <- 10L

c(
  bitwNot(x),
  bitwAnd(x, y),
  bitwOr(x, y),
  bitwXor(x, y),
  bitwShiftL(x, 2L),
  bitwShiftR(x, 1L)
)
