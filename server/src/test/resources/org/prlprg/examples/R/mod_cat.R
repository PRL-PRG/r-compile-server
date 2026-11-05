f <- function(x, i, s) {
  cat(sep = "", "x = ", x, ", i = ", i, "\n")
  cat(x, i, s, NULL, TRUE, NA, 1e5, 123456, 0.1 + 0.2, -1 / 3, 1e-20, "\n")
  cat("a", "b", "c", sep = c("-", "+\n"))
  cat()
}

f(c(1.5, 2), 3L, c("p", NA))
