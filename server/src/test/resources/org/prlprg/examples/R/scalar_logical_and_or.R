# `&&` and `||` on logical scalars that are comparisons of arguments (TRUE, FALSE, or NA from
# `NA_real_ > 0`), so the operands have type `L` and don't fold: every pair of the 3 values, with
# the result stored as a value.
f <- function(a, b) {
  x <- a > 0
  y <- b > 0
  r1 <- x && y
  r2 <- x || y
  r3 <- !x && y
  r4 <- !x || y
  c(r1, r2, r3, r4)
}

vals <- c(1, -1, NA_real_)
out <- list()
for (k in 1:12) {
  for (a in vals) {
    for (b in vals) {
      out[[length(out) + 1]] <- f(a, b)
    }
  }
}
out
