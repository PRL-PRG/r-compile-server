# A subscript of `NULL` is `NULL`, and so is `[[` of a list with an `NA` subscript.
f <- function(x, l, i) list(x[i], x[[i]], l[[NA_integer_]])

f(NULL, list(1, 2), 1L)
