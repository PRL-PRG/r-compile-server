#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")
# `length` of an S4 object without an S4 method dispatches to an S3 method, here one in the
# caller's environment. The unboxed `length` has no environment to find it in, so it deopts (an
# error in C).
setClass("LenS3", representation(x = "numeric"))
f <- local({
  length.LenS3 <- function(x) 7L
  function(x) length(x) + 1L
})
x <- new("LenS3", x = 1)
for (i in 1:12) r <- f(x)
r
