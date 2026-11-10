# A `for` loop over `a:NaN` is the error "NA/NaN argument", not a descending loop (`ElideRangeRead`
# tests the direction only after the `:` call). `do.call` makes the arguments promises of constants.
f <- function(a, b) {
  acc <- 0
  for (i in a:b) acc <- acc * 10 + i
  acc
}

#? benchmark: tryCatch(do.call(f, list(-3, NaN)), error = function(e) conditionMessage(e))

for (k in 1:12) {
  f(1, 5)
  f(5, 1)
}
