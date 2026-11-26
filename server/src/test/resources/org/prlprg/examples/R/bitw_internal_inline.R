# The `bitw*` closures only call their `.Internal`, so `InlineInternalWrapper` calls the
# `.Internal` directly: it forces the promise arguments in parameter order, then calls it. `f`
# runs warm on reals, then its cold branch runs the conversions, errors, and warnings of GNU-R.
msg <- function(expr) tryCatch(expr, error = conditionMessage)
warned <- function(expr) {
  withCallingHandlers(expr, warning = function(w) {
    cat("warning:", conditionMessage(w), "\n")
    invokeRestart("muffleWarning")
  })
}
g <- function(a, b) bitwAnd(a, b)

f <- function(x, y, cold) {
  v <- x * 2
  r <- bitwXor(v, y) + bitwShiftR(v, 1L)
  if (cold) {
    print(bitwAnd(c(5, NA, 12.7), 3L))
    print(bitwOr(integer(0), 1L))
    print(bitwNot(structure(c(a = 1L, b = 2L), class = "foo", extra = "attr")))
    print(msg(bitwAnd(1L, "a")))
    print(msg({
      bitwAnd(1L, "a")
      "not reached"
    }))
    print(bitwOr(5.7, 3))
    print(msg(bitwAnd(TRUE, TRUE)))
    print(warned(bitwAnd(2^31, 1L)))
    print(msg(g(1L)))
    print(msg(bitwAnd(1L)))
    print(bitwShiftL(n = 2L, a = 1L))
    # `.Internal` arguments are positional: 4L << 1L.
    print(.Internal(bitwiseShiftL(n = 4L, a = 1L)))
    na <- NA
    zb <- 0L
    print(msg(bitwAnd(if (na) 1L else 2L, zb <- 1L)))
    print(zb)
    print(withVisible(bitwAnd(z <- v, 3)))
    print(withVisible(bitwAnd(z <- 5, 3)))
    print(withVisible(bitwXor(v, y)))
  }
  r
}

for (i in 1:12) {
  f(i + 0.5, 3, FALSE)
}
f(6, 3, TRUE)
