main <- function() {
  c(
    if0(0, "foo", "bar"),
    if0(1, "baz", "qux")
  )
}

if0 <- function(cond, true, false) {
  if (cond) true else false
}