#? gcTorture
#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")
# `g` doesn't store its parameters, so its optimized version elides its environment. The warmup
# makes `f` return a numeric vector, so the version speculates on it. The benchmark call makes `f`
# return a character vector, so the version deopts: the deopt branch stores `i` and `test` into the
# environment, which the C backend must make real first. (C deopt itself isn't implemented yet.)
# The interpreter doesn't run the benchmark call. A feedback stop (`.Machine$...`) before the call
# would also hide it, but it makes the feedback partial, and then the environment isn't elided.
f <- function(x, test) {
  y <- x * 2
  if (test) c(deparse(substitute(x)), missing(x), y) else c(missing(x), y)
}
g <- function(i, test) f(i - 1, test)

#? benchmark: g(4, TRUE)

# warmup
for (i in 1:12) {
  g(4, FALSE)
}
