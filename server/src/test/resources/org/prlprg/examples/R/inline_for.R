check(function(x = 1:10) {
  for (i in x) 1
})
check(function(x = 1:10) {
  for (i in x) if (i) break() else 1
})
