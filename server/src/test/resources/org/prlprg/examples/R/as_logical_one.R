#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")
# The unboxed `as.logical` returns one logical, so it deopts (an error in C) for a longer `x`. A
# version that speculates on one logical (`-+> v1(L)`, from calls with different types) returned the
# first element.
g <- function(x) as.logical(x)
h <- function(a, b) a && b
for (i in 1:12) {
  g(i > 3)
  g(i + 0.5)
  g(c(a = i))
  h(i > 3, i > 5)
  h(i + 0.5, i - 3)
}
# The interpreter has no `$`, so the feedback stops here.
invisible(.Machine$integer.max)
check <- function(value, expected) if (!identical(value, expected)) stop("wrong value")
check(g(2), TRUE)
check(h(2.5, 0), FALSE)
check(grepl("length = 2|deoptimization", tryCatch(h(c(TRUE, FALSE), TRUE), error = conditionMessage)), TRUE)
g(c(1, 0, 1))
