# `rep` is a special: GNU-R tests if its argument `len` is missing, which reads the expression of
# the promise bound to `len`. The optimized `const_loop` takes `len` unboxed and wraps it in a
# promise without a source expression, which must stay an evaluated value promise.
const_loop <- function(n, len) {
  x <- rep(1.5, len)
  for (k in 1:n) x <- x * 2 + 1
  x
}
run <- function(len) list(const_loop(3L, len))
for (i in 1:12) {
  run(1L)
  run(3L)
}
run(3L)
