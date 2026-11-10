# `matrix` of empty data without dimensions has one column.
f <- function(x) list(matrix(x), matrix(x, nrow = 3), matrix(x, ncol = 2))

f(seq_len(0L))
