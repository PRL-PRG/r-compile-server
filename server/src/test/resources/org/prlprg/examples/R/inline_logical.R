check(function(x = TRUE, y = NA) {
  list(
    x == y,
    x != y,
    x < y,
    x <= y,
    x > y,
    x >= y,
    x & y,
    x | y,
    !x
  )
})
