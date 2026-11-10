#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")
# The `bitwXor` block never runs in the warmup, so the optimizer assumes that `bitwXor` is the
# builtin. The `assign` after the warmup shadows it with a function that gives 1001 in the
# benchmark call, so the assumption fails. Compiled code can't deoptimize yet, so it raises the
# documented error; it must never call the builtin (11) without checking the assumption.
f <- function(n, mix) {
  r <- n * 2L
  if (mix) r <- bitwXor(r, 1L)
  r
}

#? benchmark: f(5L, TRUE)

# warmup
for (i in 1:12) {
  f(5L, FALSE)
}
assign("bitwXor", function(a, b) a * 100L + b)
NULL
