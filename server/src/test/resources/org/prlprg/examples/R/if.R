check(function(x = FALSE) {
  if (x) 1
})

check({
  x <- 10
  if (x > 0) {
    3
  }
  x
})

check({
  function(x) {
    if (x > 0) {}
    1
  }

  1
})

