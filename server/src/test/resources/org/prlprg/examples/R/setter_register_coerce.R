# `C[i] = <integer>` on a double vector isn't a vector write, so it calls `[<-`, on a `C` that the
# optimized versions keep in a register. `f` reads the old `C` only in deopt branches after the
# call, so the call modifies `C` in place (a copy in each iteration made
# `bench_mathkernel_int_vec_add_t1` quadratic). In `g`, `old` still holds the old `C`, so the call
# must copy it.
f <- function(data) {
  n <- data[[1]]
  C <- vector("double", n)
  for (i in 1:n) C[i] = i + 1L
  C
}
g <- function(data) {
  n <- data[[1]]
  C <- vector("double", n)
  old <- C
  for (i in 1:n) {
    old <- C
    C[i] = i + 1L
  }
  list(C, old)
}
d <- list(5L)
for (i in 1:12) {
  f(d)
  g(d)
}
list(f(d), g(d))
