# `y`'s value is unused, but GNU-R still looks it up, so the last call raises "object 'y' not found".
f <- function(u) {
  if (u) y
  1
}
for (i in 1:12) {
  y <- i
  f(TRUE)
}
rm(y)
tryCatch(f(TRUE), error = function(e) conditionMessage(e))
