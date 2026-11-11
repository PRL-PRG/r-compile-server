# The optimized `main` calls `f` and `f` calls `g` without a GNU-R context. `sys.frame(-1)` in `g`
# still counts `f`'s frame, so `assign` writes `y` there, and `f` returns 100.
g <- function(test) if (test) assign("y", 100, envir = sys.frame(-1)) else 0
f <- function(n, test) {
  y <- n
  g(test)
  y
}

for (i in 1:12) {
  f(i + 0.5, FALSE)
}

f(1.5, TRUE)
