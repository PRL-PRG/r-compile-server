check(function(x = TRUE) {
  while (x) 1
})

check(function(x = TRUE, y) {
  while (x) { break() }
})

check(function(x = TRUE, y = FALSE) {
  while (x) { if (y) break() else 1 }
})
