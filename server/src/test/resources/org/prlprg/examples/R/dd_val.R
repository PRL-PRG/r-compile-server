check({
  e <- new.env(parent = emptyenv())
  e$x <- 42
  get('x', envir = e, inherits = FALSE)
}, returns(42))

check({
  f <- function(...) x <- ..1
  f(42)
})

