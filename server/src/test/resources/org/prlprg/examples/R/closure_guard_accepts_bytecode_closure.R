# The optimized loop guards `h` with `?-` on the inner function. A stub of `f` runs the bytecode
# baseline, which creates a bytecode closure: the guard must accept it (`Fir_is_bytecode_closure_of`).
f <- function() function() 1
for (i in 1:11) {
  h <- f()
  h()
}
h()
