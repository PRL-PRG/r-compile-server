check(function(cond = FALSE) {
  if (cond) "a" else "b"
})

check({
  if0 <- function(cond, true, false) {
    if (cond == 0) true else false
  }

  c(
    if0(0, "foo", "bar"),
    if0(1, "baz", "qux")
  )
})