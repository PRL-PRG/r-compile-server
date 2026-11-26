# The unboxed `as.integer` of a real truncates toward zero, and a number out of the integer range
# becomes `NA` with a warning, as R's `IntegerFromReal` does. A real subscript is coerced the same
# way, but without the warning.
f <- function(x) as.integer(x)
g <- function(x, i) x[i]
for (i in 1:12) {
  f(i + 0.5)
  g(c(10, 20, 30), i %% 3 + 0.5)
}
print(f(2147483647.5))
print(f(3e9))
print(f(-2147483648.5))
print(g(c(10, 20, 30), 3e9))
f(NaN)
