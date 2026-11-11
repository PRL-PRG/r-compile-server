#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")
# `length(o)`'s value is unused, but GNU-R dispatches it to `length.foo`, which prints, so the
# call stays. The unboxed `length` deopts for an object (an error in C).
length.foo <- function(x) {
  cat("length.foo\n")
  1L
}
f <- function(o) {
  length(o)
  1
}
o <- structure(list(), class = "foo")
for (i in 1:12) f(o)
