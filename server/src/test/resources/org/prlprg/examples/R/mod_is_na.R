f <- function(x, i, l, s) {
  c(is.na(x), is.na(i), is.na(l), is.na(s), is.na(NA), is.na(NaN), is.na(1.5))
}

f(c(1, NA, NaN), c(1L, NA), c(TRUE, NA), c("a", NA))
