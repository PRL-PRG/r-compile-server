# The `print(p)` block never runs in the warmup, so no feedback says what `print` runs. In the
# benchmark call, GNU-R's `print` dispatches to `print.probe`, which writes `acc` in its caller's
# frame, so `f` returns 100. The optimizer must not assume that the cold `print` call leaves the
# frame alone.
print.probe <- function(x, ...) {
  assign("acc", 100, envir = parent.frame())
  invisible(x)
}

f <- function(n, show, p) {
  acc <- n * 3
  if (show) print(p)
  acc
}

#? benchmark: f(5, TRUE, structure(list(), class = "probe"))

# warmup
for (i in 1:12) {
  f(5, FALSE, 0)
}
