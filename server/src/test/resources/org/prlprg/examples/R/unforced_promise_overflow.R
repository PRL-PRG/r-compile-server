# `f` passes the promise `d + 1L` to itself, and a call with `n == 0L` returns without forcing it.
# So GNU-R never computes `.Machine$integer.max + 1L`, and nothing warns: `count()` is `0 0`. The
# optimizer must not evaluate the promise before the call, although its body has no effects.
f <- function(d, n) {
  if (n == 0L) return(0L)
  if (d < 0L) return(-1L)
  f(d + 1L, n - 1L)
}
count <- function() {
  k <- 0L
  v <- withCallingHandlers(
    f(.Machine$integer.max - 3L, 4L),
    warning = function(w) {
      k <<- k + 1L
      invokeRestart("muffleWarning")
    }
  )
  c(v, k)
}

#? benchmark: count()

# warmup
for (i in 1:12) {
  f(i, 5L)
}

count()
