# `[[` with `exact = FALSE` matches a unique name prefix; `drop` doesn't change a vector subscript.
f <- function(x, l) {
  names(x) <- c("abc", "abd")
  names(l) <- c("abc", "x")
  list(l[["ab", exact = FALSE]], l[["ab", exact = TRUE]], l[["ab"]], x[["abc", exact = FALSE]],
       x[2, drop = FALSE], x[2, drop = TRUE])
}

f(c(1, 2), list(1, 2))
