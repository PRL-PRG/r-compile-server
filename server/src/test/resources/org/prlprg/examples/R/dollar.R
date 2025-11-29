check({
  x <- list(a=1, b=2)
  x$a
}, returns(1))

check({
  x <- list(a=2)
  x$b
})

