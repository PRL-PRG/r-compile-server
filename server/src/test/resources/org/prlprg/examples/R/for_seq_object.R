#? gcTorture
# A `for` loop over a factor loops over its labels, and over another object without dispatching
# `length` or `[[` (GNU-R's `STARTFOR` and `STEPFOR`; `toForSeq`).
length.foo <- function(x) NA_integer_
`[[.foo` <- function(x, i) stop("dispatched [[")
f <- function(s) {
  r <- character()
  for (x in s) r <- c(r, as.character(x))
  r
}
for (k in 1:12) f(list(k, "a"))
# The interpreter has no `$`, so the feedback stops here.
invisible(.Machine$integer.max)
check <- function(value, expected) if (!identical(value, expected)) stop("wrong value")
check(f(structure(list(1, 2), class = "foo")), c("1", "2"))
check(f(factor(c("b", "a", "b"))), c("b", "a", "b"))
check(tryCatch(f(environment()), error = conditionMessage), "invalid for() loop sequence")
