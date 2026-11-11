# `print(5L)`'s value is unused, but GNU-R prints it at each call and in each iteration.
f <- function(n) {
  for (j in seq_len(n)) print(5L)
  1
}
g <- function() {
  print(6L)
  1
}
for (i in 1:12) {
  f(2L)
  g()
}
