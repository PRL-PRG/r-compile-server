# An operand of `&&` or `||` must be a number of length at most 1. The feedback sees only
# logicals and reals, so the optimized `f` and `g` get a string, a factor and a longer vector.
f <- function(x) x && TRUE
g <- function(y) FALSE || y
for (i in 1:12) {
  f(i > 3)
  f(i + 0.5)
  f(c(a = TRUE))
  g(i > 3)
  g(logical())
}
invisible(.Machine$integer.max)
list(
  tryCatch(f("TRUE"), error = conditionMessage),
  tryCatch(f(factor("a")), error = conditionMessage),
  tryCatch(g(c(FALSE, TRUE)), error = conditionMessage),
  g(logical())
)
