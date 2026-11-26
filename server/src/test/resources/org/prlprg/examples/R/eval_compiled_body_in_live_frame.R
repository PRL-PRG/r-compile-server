# `.Internal(bodyCode(helper))` of a compiled closure is its code, so the `eval` runs `helper`'s
# code in `f`'s frame, which stays live. `f`'s promise of `n`, which it passes to `isTRUE`, still
# belongs to a live frame when `isTRUE` forces it. The warmup skips the `test` branch, which the FIŘ
# interpreter can't run.
helper <- function() 1
f <- function(n, test) {
  m <- n * 2
  if (test) {
    eval(call("{", .Internal(bodyCode(helper))), environment())
    c(missing(n), isTRUE(n), m)
  } else c(missing(n), m)
}
g <- function(i, test) f(i - 1, test)

for (i in 1:12) {
  g(4, FALSE)
}

c(g(4, FALSE), g(4, TRUE))
