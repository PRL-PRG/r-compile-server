check(function(x = TRUE) {
  if (x) 1 else 2
})

check(function(x = 1) {
  if (x == 1) 1 else if (x == 2) 2 else 3
}, returns(1))

check(function(x = 2) {
  if (x == 1) 1 else if (x == 2) 2 else 3
}, returns(2))

check(function(x = 3) {
  if (x == 1) 1 else if (x == 2) 2 else 3
}, returns(3))

