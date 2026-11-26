# `f` is a closure of compiled code, but `body`, `deparse`, `identical` and `print` see the source
# of its body, as they see the source of a bytecode body.
f <- function(x, y = 2) x + y
k <- function(n) f(n)

for (i in 1:12) {
  k(i)
}

list(
  body(f),
  formals(f),
  deparse(f),
  identical(f, function(x, y = 2) x + y),
  capture.output(print(f))[1:2]
)
