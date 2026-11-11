# Coercing a real to a string formats it like `as.character`: 15 significant digits, and
# scientific notation if it's shorter.
f <- function(x, s) {
  a <- x
  a[2L] <- "s"
  b <- s
  b[1L] <- x[1L]
  b[2L] <- NA_real_
  list(c(x, s), a, b, as.character(x[3L]), as.character(NA_integer_))
}

f(c(5, 1e15, 1 / 3, 1e5, 0.1 + 0.2, 123456789012), c("p", "q"))
